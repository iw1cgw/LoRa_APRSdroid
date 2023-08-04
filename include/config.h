// GENERAL SETTINGS

#define Project "LoRa-APRSdroid"
#define Release "v1.02"
#define Maker "IW1CGW"
#define bottom   ". (m)enu - (d)isplay ."
char BT_device_name[10] = "APRSdroid";
char build[7] = "230802";
char info[52] = "info";
char frequency[7] = "433775";

#define  EEPROM_SIZE  128  // // EEPROM size puo indirizzare da 0 a 127

//#define USE_PIN             // Uncomment this to use PIN during pairing. The pin is specified on the line below
const char *pin = "1234";     // Change this to more secure PIN.

#define SERIAL_BAUD 9600                           // serial baud

#define LoRa_SCK 5
#define LoRa_MISO 19
#define LoRa_MOSI 27
#define LoRa_SS 18
#define LoRa_RST 14
#define LoRa_DIO0 26

#define SSD1306_ADDRESS 0x3C
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET 23 

#define PLED1 25        // pin number for LED on Tracker 
#define BATT_SENS 35    // pin number for BATTERY SENSOR 














#define LoRa_SpreadingFactor 12
#define LoRa_SignalBandwidth 125000
#define LoRa_CodingRate4 5

