#ifndef __MODE_MOTIONSTREAM_H
#define __MODE_MOTIONSTREAM_H

#include "command.h"



extern const char help_streamlog[] PROGMEM;
unsigned char CommandParserStreamLog(unsigned char *buffer,unsigned char size);


unsigned char stream_sample(FILE *f);



void stream(void);



unsigned char CommandParserMotion(unsigned char *buffer,unsigned char size);
void mode_motionstream(void);


#endif