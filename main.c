#include "./myLib.h"
#include "myLibs/compileMyLibs.c"
/**
 * cli c program that Transfer the sixteenth system(hexadecimal) from scratch
 * Transfer-the-sixteenth-system-from-scratch
 *
 */
void methodDec2Hex()
{
    while (1)
    {
        char decCode[10];

        int status = inputStr("\ttype  numbers(8) : ", decCode, 10);
        if (strCom(decCode, "stop") == 1)
        {
            break;
        }
        if (status == -1)
        {
            printRed(">> overFlow(8)\n");
            continue;
        }
        if (status == 0)
        {

            continue;
        }

        if (isDecNumIsInvalid(decCode))
        {
            printRed(">> you must type valid number or less !!\n"
                     ": \'0,1,2,3,4,5,6,7,8,9\' \n");
            continue;
        }

        char *result = convertDecToHex(decCode);

        printGreen("number is = '");
        printBold(result);
        printGreen("'\n");
        free(result);
    }
}

void methodHex2Dec()
{
    while (1)
    {
        char hexCode[10];
        int status = inputStr("\ttype hex code(8) : ", hexCode, 10);
        if (strCom(hexCode, "stop") == 1)
        {
            break;
        }
        if (status == 0)
        {

            continue;
        }

        if (isHexLenInvalid(status, hexCode))
        {
            printRed(">> you must type 8 number or less !!\n");
            continue;
        }

        if (isHexNumInvalid(hexCode))
        {
            printRed(">> you must type valid number or less !!\n"
                     ": \'0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f\' \n");
            continue;
        }

        MYNUMBER result = convertHexToDec(hexCode);

        printf(">> number is = '%d'\n", result);
    }
}

void method()
{
    while (1)
    {
        char methodChoose[9];
        printBold("----------------------------------------------\n");
        printYellow("methodes:\n\t1. hex to dec\n\t2. dec to hex\n\n");
        printGray("> type 'stop' to exit program ot the method \n");

        int status = inputStr("choose method number : ", methodChoose, 9);
        if (strCom(methodChoose, "stop") == 1)
        {
            break;
        }
        if (status == 0)
        {

            continue;
        }
        if (strCom(methodChoose, "1"))
        {
            methodHex2Dec();
        }
        else if (strCom(methodChoose, "2"))
        {
            methodDec2Hex();
        }
        else
        {
            printRed(">> choose between 1 - 2\n");
        }
    }
}

// start point
int main()
{
    /*
    if you want to compile on linux remove this fun 'enableANSI_ColorsForWin'
       and remover it from sorce file 'myLibs/print.c' and header file myLibs/myLib.c
       and don't forget windows.h
    */

    // usage tip TYPE 'stop' to exit program ot the method
    #ifdef WINDOWS
    enableANSI_ColorsForWin(); // this fun
    #endif
    method();
    endProgram(1); // this functhion print msg and take a input to exit the progrm("enter");
    return 0;
}
