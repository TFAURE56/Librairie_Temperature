# Activite04_librairie-temperature

## Projet : Lecture de la Température avec MCP9808 sur Raspberry Pi

Pour répondre à la demande du client, nous avons créé un programme en C++ qui tourne sur un Raspberry Pi et permet de lire la température à partir du module MCP9808. Le capteur utilise une connexion I2C. Nous avons utilisé la bibliothèque `wiringPi` pour la communication.

## Matériel et Logiciels Requis

### 1. Matériel Requis

- **Raspberry Pi** : Modèle avec support GPIO, comme le Raspberry Pi 3b.
- **Capteur de température MCP9808** : Capteur de température communiquant via le protocole I2C.
- **Câbles de connexion** : Fils de connexion pour relier le capteur MCP9808 aux broches GPIO du Raspberry Pi.
- **Résistances de pull-up** : Résistances de 4.7kΩ pour les lignes SDA et SCL (souvent déjà présentes sur le module MCP9808).

### 2. Logiciel Requis

- **Raspbian OS** : Système d'exploitation basé sur Linux pour le Raspberry Pi.
- **GCC/G++** : Compilateur C++.
- **wiringPi** : Bibliothèque pour le contrôle des GPIO du Raspberry Pi.
- **i2c-tools** : Outils pour scanner et tester les périphériques I2C.

## Diagramme de Séquence

Voici le diagramme de séquence utilisé pour ce projet :

![Diagramme de Séquence](https://github.com/TFAURE56/Librairie_Temperature/blob/main/diag-de-sequence.png)
