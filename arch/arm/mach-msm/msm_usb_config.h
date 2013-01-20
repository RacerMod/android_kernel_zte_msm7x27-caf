//ruanmeisi 20100713 zte pid
#define PRODUCT_ID_ALL_INTERFACE          0x1350
#define PRODUCT_ID_MS_ADB                      0x1351
#define PRODUCT_ID_ADB                             0x1352
#define PRODUCT_ID_MS                               0x1353
#define PRODUCT_ID_DIAG                           0x0112
#define PRODUCT_ID_DIAG_NMEA_MODEM   0x0111
#define PRODUCT_ID_MODEM_MS_ADB         0x1354
#define PRODUCT_ID_MODEM_MS                 0x1355
#define PRODUCT_ID_MS_CDROM                 0x0083
#define PRODUCT_ID_RNDIS_MS                 0x1364
#define PRODUCT_ID_RNDIS_MS_ADB             0x1364
#define PRODUCT_ID_RNDIS             0x1365
//#define PRODUCT_ID_RNDIS_ADB             0x1359
	
	{
		/* MSC */
		.product_id         = PRODUCT_ID_MS,
		.functions	    = 0x02,
		.adb_product_id     = PRODUCT_ID_MS_ADB,
		.adb_functions	    = 0x12
	},
	{
		/* diag + modem + nmea + ms + adb*/
		.product_id         = PRODUCT_ID_ALL_INTERFACE,
		.functions	    = 0x12764,
		.adb_product_id     = PRODUCT_ID_ALL_INTERFACE,
		.adb_functions	    = 0x12764
	},
	{
		/* diag + nmea + modem */
		.product_id         = PRODUCT_ID_DIAG_NMEA_MODEM,
		.functions	    = 0x674,
		.adb_product_id     = PRODUCT_ID_DIAG_NMEA_MODEM,
		.adb_functions	    = 0x674
	},
	{
		/* diag */
		.product_id         = PRODUCT_ID_DIAG,
		.functions	    = 0x4,
		.adb_product_id     = PRODUCT_ID_DIAG,
		.adb_functions	    = 0x4
	},
	{
		/* modem + ms + adb */
		.product_id         = PRODUCT_ID_MODEM_MS,
		.functions	    = 0x26,
		.adb_product_id     = PRODUCT_ID_MODEM_MS_ADB,
		.adb_functions	    = 0x126
	},
	{
		/* ms + CDROM */
		.product_id         = PRODUCT_ID_MS_CDROM,
		.functions	    = 0x2,
		.adb_product_id     = PRODUCT_ID_MS_CDROM,
		.adb_functions	    = 0x2
	},
	{
		/* rndis + ms + adb */
		.product_id         = PRODUCT_ID_RNDIS_MS,
		.functions	    = 0x2A,
		.adb_product_id     = PRODUCT_ID_RNDIS_MS_ADB,
		.adb_functions	    = 0x12A
	},
	{
		/* rndis */
		.product_id         = PRODUCT_ID_RNDIS,
		.functions	    = 0xA,
		.adb_product_id     = PRODUCT_ID_RNDIS,
		.adb_functions	    = 0xA
	},
	/* { */
	/* 	/\* rndis + adb*\/ */
	/* 	.product_id         = PRODUCT_ID_RNDIS_ADB, */
	/* 	.functions	    = 0x1A, */
	/* 	.adb_product_id     = PRODUCT_ID_RNDIS_ADB, */
	/* 	.adb_functions	    = 0x1A */
	/* }, */

struct usb_function_map usb_functions_map[] = {
	{"diag", 0},
	{"modem", 1},
	{"nmea", 2},
	{"mass_storage", 3},
	{"adb", 4},
        //{"ethernet", 5},
};

/* dynamic composition */
struct usb_composition usb_func_composition[] = {
	
	{
		.product_id     = 0x0112,
		.functions	    = 0x01, /* 000001 */
	},

	{
		.product_id     = 0x0111,
		.functions	    = 0x07, /* 000111 */
	},
	
	{
		.product_id     = 0x1355, /*ZTE_USBCONFIG_001*/
		.functions	    = 0x0A, /* 001010 */
	},

	{
		.product_id     = 0x1354, /*ZTE_USBCONFIG_001*/
		.functions	    = 0x1A, /* 011010 */
	},

	{
		.product_id     = 0x1353,
		.functions	    = 0x08, /* 001000: ms */
	},
	
	{
		.product_id     = 0x0083,
		.functions	    = 0x08, /* 001000: ms +cdrom*/
	},

	{
		.product_id     = 0x1352,
		.functions	    = 0x10, /* 010000 */
	},

	{
		.product_id     = 0x1351,
		.functions	    = 0x18, /* 011000 */
	},

	{
		.product_id     = 0x1350,
		.functions	    = 0x1F, /* 011111 */
	},

};
