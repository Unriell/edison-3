#ifndef _CUST_EXT_FG_DEFS_H_
#define _CUST_EXT_FG_DEFS_H_

typedef enum
{
	EXT_FG_CMD_SOC,
	EXT_FG_CMD_TEMPERATURE,
	EXT_FG_CMD_VOLTAGE,
	EXT_FG_CMD_CURRENT,

	EXT_FG_CMD_NUMBER
} EXT_FG_CTRL_CMD;

#define EXT_FG_HAS_SOC

#define EXT_FG_HAS_TEMPERATURE

#define EXT_FG_HAS_VOLTAGE

#define EXT_FG_HAS_CURRENT

#define BAT_CAPACITY_MIN 4

#define BAT_CAPACITY_MAX 100

#endif /* _CUST_EXT_FG_DEFS_H_ */ 