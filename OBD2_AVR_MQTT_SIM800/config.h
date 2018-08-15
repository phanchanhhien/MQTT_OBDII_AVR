#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

/**************************************
* Configuration Definitions
**************************************/
#define NET_NONE 0
#define NET_WIFI 1
#define NET_SIM800 2
#define NET_SIM5360 3

/**************************************
* OBD-II configurations
**************************************/
// maximum consecutive OBD-II access errors before entering standby
#define MAX_OBD_ERRORS 3

// VIN used when real one unavailable
#define DEFAULT_VIN "FREEMATICS"

// minimum processing loop time
#define MIN_LOOP_TIME 1000 /* ms */

/**************************************
* Networking configurations
**************************************/
#ifndef NET_DEVICE
// change the following line to change network device
#define NET_DEVICE NET_WIFI
// WIFI settings
#define WIFI_SSID "HOTSPOT"
#define WIFI_PASSWORD "PASSWORD"
// APN settings for cellular network
#define CELL_APN "mdata.net.au"
// Freematics Hub server settings
#define SERVER_HOST "hub.freematics.com"
#define SERVER_PORT 8081
#endif

#define SERVER_KEY "TEST_SERVER_KEY"

// maximum consecutive communication errors before entering standby
#define MAX_CONN_ERRORS 20
// maximum consecutive communication errors before reconnecting
#define MAX_CONN_ERRORS_RECONNECT 3
// maximum allowed connecting time
#define MAX_CONN_TIME 10000 /* ms */

/**************************************
* Data storage configurations
**************************************/
#define SERVER_SYNC_INTERVAL 60 /* seconds, 0 to disable */

/**************************************
* MEMS motion sensors
**************************************/
#define MEMS_MODE 1 /* 0 to disable */

/**************************************
* GPS
**************************************/
#ifndef ENABLE_GPS
// change the following line to enable (1)/disable (0) GPS
#define ENABLE_GPS 1
#endif
#define GPS_SERIAL_BAUDRATE 115200L

/**************************************
* Standby/wakeup
**************************************/
#define RESET_AFTER_WAKEUP 1
// motion threshold for waking up
#define WAKEUP_MOTION_THRESHOLD 0.15f /* in unit of G */
// engine jumpstart voltage
#define JUMPSTART_VOLTAGE 14 /* V */

#endif // CONFIG_H_INCLUDED
