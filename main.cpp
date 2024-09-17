#include <iostream>
#include "wiringPiI2C.h"
using namespace std;

int main() {
    // Ouvrir le capteur en 0x18 (addresse du capteur MCP9808)
    int fd = wiringPiI2CSetup(0x18);

    if (fd == -1) {
        cout << "Erreur : Impossible d'ouvrir le périphérique I2C" << endl;
        return -1;
    }

    // Configurer en mode continu
    wiringPiI2CWriteReg16(fd, 0x01, 0);

    // Lire le registre de température (0x05)
    int rawTemp = wiringPiI2CReadReg16(fd, 0x05);

    // Vérifier si la lecture est valide
    if (rawTemp == -1) {
        cout << "Erreur lors de la lecture de la température" << endl;
        return -1;
    }

    // Convertir la valeur brute en température
    rawTemp = ((rawTemp & 0xFF) << 8) | (rawTemp >> 8); 
    float tempC = rawTemp & 0x0FFF; // Prendre les 12 bits de poids faible
    tempC /= 16.0; // Chaque unité correspond à 1/16°C

    // Si le 13e bit est 1, c'est une température négative
    if (rawTemp & 0x1000) {
        tempC -= 256;
    }

    // Afficher la température sur la console
    cout << "Temperature : " << tempC << "°C" << endl;

    return 0;
}
