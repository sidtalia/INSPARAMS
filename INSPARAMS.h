#ifndef _INSPARAMS_H_
#define _INSPARAMS_H_


#define MODE_STOP 0x00
#define MODE_STANDBY 0x01
#define MODE_MANUAL 0x02
#define MODE_PARTIAL 0x03
#define MODE_AUTO 0x04
#define MODE_AUTO_LUDICROUS 0x05
#define MODE_NO_GPS 0x06
#define MODE_CONTROL_CHECK 0x07

#define FIX_TIMEOUT 1000

#define LUDICROUS 0x05 //interchangable with MODE_AUTO_LUDICROUS
#define CRUISE 0x04 //interchangable with MODE_AUTO

#define START_SIGN 0xFE
#define OFFSET_ID 0x01
#define CONFIG_ID 0x03
#define COMMAND_ID 0x02


#define WP_CIRCLE 0.5 //1/2 meter radius around waypoint. possible culprit

#define WP_ID 0x0005
#define STATE_ID 0x0006
#define SENSOR_ID 0x0016
#define VEL_ID 0x0017
#define POS_ID 0x0018
#define MODE_ID 0x0007
#define CLEAR_ID 0x0008
#define MARK_ID 0x0009
#define CALIB_ID 0x000A
#define SET_ORIGIN_ID 0x000B
#define REC_ID_1 0x000C
#define REC_ID_0 0x00FC
#define REC_DEBUG_ID_1 0x000D
#define REC_DEBUG_ID_0 0x00FD


#define GYRO_CAL 0x10
#define ACCEL_CAL 0x20
#define MAG_CAL 0x30
#define DONE 0x40

#define ERROR_CODE 0xFF

#define JEVOIS_BAUD 115200

#endif
