# Activite04_librairie-temperature

# Projet : Lecture de la Température avec MCP9808 sur Raspberry Pi

- ** Pour répondre à la demande du client, nousa vons crée un programme en C++ qui tourne sur un Raspberry Pi et qui permet de lire la température à partir du module MCP9808. Le capteur utilise une connexion I2C. Nous avons utiliser la bibliothèque `wiringPi` pour la communication.
-
## Voici la liste du matériel et des logiciels dont nous avons eu besoin.

## 1. Matériel Requis

- **Raspberry Pi** : Modèle avec support GPIO, comme le Raspberry Pi 3 ou 4.
- **Capteur de température MCP9808** : Capteur de température communiquant via le protocole I2C.
- **Câbles de connexion** : Fils de connexion pour relier le capteur MCP9808 aux broches GPIO du Raspberry Pi.
- **Résistances de pull-up** : Résistances de 4.7kΩ pour les lignes SDA et SCL (souvent déjà présentes sur le module MCP9808).

## 2. Logiciel Requis

- **Raspbian OS** : Système d'exploitation basé sur Linux pour le Raspberry Pi.
- **GCC/G++** : Compilateur C++ disponible via le paquet `build-essential`.
- **wiringPi** : Bibliothèque pour le contrôle des GPIO du Raspberry Pi. *(wiringPi est dépréciée, mais elle sera utilisée comme demandé)*.
- **i2c-tools** : Outils pour scanner et tester les périphériques I2C.


