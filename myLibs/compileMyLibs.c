#include "./myLib.h"


#include "./input.c"
#include "./print.c"
#include "./myStringLib.c"
#include "./numberFuns.c"
#include "./convertHexToDec.c"
#include "./convertDecToHex.c"


void endProgram(int status)
{
  printYellow("\npress enter to end this program ... ");
  getchar();
  status == 1 ? exit(EXIT_SUCCESS) : exit(EXIT_FAILURE);
}

