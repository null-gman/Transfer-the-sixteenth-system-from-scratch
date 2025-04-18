#ifndef  MY_LIB_H
#define MY_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WINDOWS
#include <windows.h> //for enableANSI_ColorsForWin()
#endif

typedef  unsigned long long int  MYNUMBER;

void endProgram(int status);

//print funs

#ifdef WINDOWS
void enableANSI_ColorsForWin();  //for cmd to enable ANSI colot
#endif

void printGreen(const char *msg);
void printRed(const char *msg);
void printYellow(const char *msg);
void printBlue(const char *msg);
void printMagenta(const char *msg);
void printCyan(const char *msg);
void printBold(const char *msg);
void printBoldColor(const char *msg);
void printGray(const char *msg);

//number funs
MYNUMBER power(MYNUMBER number, size_t repet);
MYNUMBER strToInt(const char *string);
int isDecNumIsInvalid(char *string);



//this string funs
int trimStr(char *string); //clear the begging white spaces and after word
int strCom(char *str1, char *str2); //compare two string is str == str2 ? 1 : 0
int stringConcat(const char *str1, const char *str2, char *dest, const int buffSize);
int mystrCopy(const char * sourc, char * dest, int buff);
char charToLowerCase(char charcter);
int revercStr(char * string);
int isHexLenInvalid(int status , char * hexCode);
int isHexNumInvalid(char *hexCode);

//input funs
int inputStr(const char *msg, char *dest, int buff);


//convert funs
MYNUMBER convertHexToDec(char *hexCode);
char *convertDecToHex(char *decNum);
#endif
