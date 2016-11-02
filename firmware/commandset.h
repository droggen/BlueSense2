#ifndef __COMMANDSET_H
#define __COMMANDSET_H

#include "command.h"


extern const char help_demo[];
extern const char help_z[];
extern const char help_y[];
extern const char help_w[];
extern const char help_b[];
extern const char help_r[];
extern const char help_i[];
extern const char help_c[];
extern const char help_l[];
extern const char help_t[];
extern const char help_d[];
extern const char help_quit[];
extern const char help_h[];
extern const char help_a[];
extern const char help_f[];
extern const char help_m[];
extern const char help_n[];
extern const char help_g[];
extern const char help_o[];
extern const char help_sd[];
extern const char help_coulomb[];
extern const char help_power[];
extern const char help_s[];
extern const char help_identify[];
extern const char help_annotation[];
extern const char help_bootscript[];
extern const char help_info[];

extern const COMMANDPARSER CommandParsersDefault[];
extern const unsigned char CommandParsersDefaultNum;
extern unsigned char __CommandQuit;

extern unsigned CurrentAnnotation;

/*
unsigned char CommandParserTime(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
unsigned char CommandParserDate(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
unsigned char CommandParserQuit(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
unsigned char CommandParserSuccess(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
unsigned char CommandParserError(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
unsigned char CommandParserHelp(unsigned char *buffer,unsigned char size,COMMANDDATA *data);
*/
unsigned char CommandParserTime(unsigned char *buffer,unsigned char size);
unsigned char CommandParserDate(unsigned char *buffer,unsigned char size);
unsigned char CommandParserQuit(unsigned char *buffer,unsigned char size);
unsigned char CommandParserSuccess(unsigned char *buffer,unsigned char size);
unsigned char CommandParserError(unsigned char *buffer,unsigned char size);
unsigned char CommandParserHelp(unsigned char *buffer,unsigned char size);
unsigned char CommandParserLCD(unsigned char *buffer,unsigned char size);
unsigned char CommandParserIO(unsigned char *buffer,unsigned char size);
unsigned char CommandParserSwap(unsigned char *buffer,unsigned char size);
unsigned char CommandParserOff(unsigned char *buffer,unsigned char size);
unsigned char CommandParserStreamFormat(unsigned char *buffer,unsigned char size);
unsigned char CommandParserPower(unsigned char *buffer,unsigned char size);
unsigned char CommandParserSync(unsigned char *buffer,unsigned char size);
unsigned char CommandParserTestSync(unsigned char *buffer,unsigned char size);
unsigned char CommandParserIdentify(unsigned char *buffer,unsigned char size);
unsigned char CommandParserAnnotation(unsigned char *buffer,unsigned char size);
unsigned char CommandParserMPUTest(unsigned char *buffer,unsigned char size);
unsigned char CommandParserBootScript(unsigned char *buffer,unsigned char size);
unsigned char CommandParserInfo(unsigned char *buffer,unsigned char size);

/*unsigned char CommandExecTime(COMMANDDATA *data);
unsigned char CommandExecDate(COMMANDDATA *data);
unsigned char CommandExecQuit(COMMANDDATA *data);
unsigned char CommandExecHelp(COMMANDDATA *data);*/

unsigned char CommandShouldQuit(void);
void CommandChangeMode(unsigned char newmode);


#endif