#include <iostream>
#include "wiringPiI2C.h"
using namespace std;

int main() {
	// Ouvrir le capteur en 0x18 (addresse du capteru MCP9808)
	int fd = wiringPiI2CSetup(0x18);

	// Configurer en mode continue
	wiringPiI2CWriteReg16(fd, 0x01, 0);

	// Lire le registre de température
	cout << "Température : " << wiringPiI2CReadReg16(fd, 0x05) << endl;

}
