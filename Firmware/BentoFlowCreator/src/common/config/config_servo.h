#pragma once

#define DEVICE_TYPE "Single Servo ESP32"

#define ESP32
#define BUTTON_COUNT 0 // ne devrait pas etre necessaire

#define HAS_SERVO
#define SERVO_PIN 13

// SD config
#define HAS_FILES

#define SDSPEED 27000000

//#define SD_EN 16 // drive LOW to turn on and set to HIGH-Z for off. 

#define SD_MISO 19
#define SD_MOSI 18
#define SD_SCK 5
#define SD_CS 33