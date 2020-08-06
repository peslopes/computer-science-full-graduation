#ifndef HDLC_H
#define	HDLC_H

#include <stdlib.h>     /* srand, rand */
#include <stdio.h>
#include <time.h>       /* time */

#define IP 64000
#define MAX_FILENAME 80
#define MAX_FRAMES	7

/* Codes for HDLC structure */
#define FLAG 		0x7E
#define BROADCAST	0xFF
#define MAX_HDLC	250
#define NON_I_MSG	0

/* Control codes - for supervision (S) */
#define RR	0x80	//S5 = 0; S4 = 0 => 1000 0000
#define RNR	0x88	//S5 = 0; S4 = 1 => 1001 0000

/* Control codes - for unnumered (U) */
#define DISC -62 	//0xC2 - 11000010 - disconnect
#define UA 	 -50	//0xCE - 11001110 - acknowledgement
#define SIM  -52	//0xCC - 11001100 - set initilization mode

typedef struct hdlc {
	char flag1;
	char address; //broadcast address
	char control;
	int datasize;
	char * data;
	char * FCS; //FCS[0]: MSB; FCS[1]: LSB
	char flag2;
} HDLC;


/* Function prototypes */

/* Error messages */
extern void error(char *msg);

/* Sets the control byte for the HDLC structure */
char setControlByte(char type, char * controlCode, int frameNumber);

/* Creates a new HDLC element */
HDLC * newHDLC(int datasize);

/* Prints the HDLC element. */
void printHDLC(char * msg, HDLC * myHDLC);

/* Simple print for a HDLC element. */
void simplePrintHDLC(char * msg, HDLC * myHDLC);


#endif	/* HDLC_H */