#include "./myLib.h"

/*


        123
        0
        1
        2


*/


MYNUMBER charToNum(char hexCode)
{
    hexCode = charToLowerCase(hexCode);
    switch (hexCode)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case 'a':
        return 10;
    case 'b':
        return 11;
    case 'c':
        return 12;
    case 'd':
        return 13;
    case 'e':
        return 14;
    case 'f':
        return 15;
    default:
        break;
    }
}

MYNUMBER convertHexToDec(char *hexCode)
{
    //123abc
    size_t hexCodeLen = strlen(hexCode);
    size_t order = strlen(hexCode) - 1;
    MYNUMBER result = 0;

    for (size_t i = 0; i < hexCodeLen; i++)
    {
        MYNUMBER number = charToNum(hexCode[i]);
        result += (number * (power(16, order)));
        order--;
    }

    return result;
}