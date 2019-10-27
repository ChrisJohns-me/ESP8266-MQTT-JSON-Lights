/* Add your keys & rename this file to setup.h */
using namespace std;

#define WIFI_SSID "SSID"
#define WIFI_PASSWORD "PASSWORD"

#define MQTT_SERVER "DOMAIN_OR_IP"
#define MQTT_USER "USERNAME"
#define MQTT_PASSWORD "PASSWORD"
#define MQTT_PORT 1883
char *MQTT_STATE_TOPIC_PREFIX = "light/"; // e.g. light/led and light/led/set

#define OTApassword "PASSWORD" //the password you will need to enter to upload remotely via the ArduinoIDE
#define OTAport 8266

#define LED1_PIN 5 // D1
#define LED1_COUNT 61
#define LED2_PIN 4 // D2
#define LED2_COUNT 50
#define LED3_PIN 14 // D5
#define LED3_COUNT 400

#define NEO_PIXEL_TYPE NEO_BRG + NEO_KHZ800
#define DEFAULT_EFFECT FX_MODE_RAINBOW_CYCLE
#define DEFAULT_POWER_ON_STATE false

char *deviceName = "led";
