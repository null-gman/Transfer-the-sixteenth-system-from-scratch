#include "./myLib.h"

char decCodeToHexCode(int num)
{
    switch (num)
    {
    case 0:
        return '0';
    case 1:
        return '1';
    case 2:
        return '2';
    case 3:
        return '3';
    case 4:
        return '4';
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return '7';
    case 8:
        return '8';
    case 9:
        return '9';
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    default:
        break;
    }
}
char *convertDecToHex(char *decNum)
{
    // 123abc
    size_t decNumLen = strlen(decNum);
    size_t order = decNumLen - 1;

    int size = 1;
    char *result = (char *)malloc(sizeof(char) * size);

    int number = strToInt(decNum);
    int iter;
    int remaind;

    size_t i = 0;

    while (1)
    {
        remaind = number % 16;

        result[i] = decCodeToHexCode(remaind);
        iter = number / 16;
        number = iter;
        i++;
        size++;
        result = (char *)realloc(result, sizeof(char) * size);
        if (iter == 0)
        {
            break;
        }
    }
    result[i] = '\0';

    revercStr(result);
    return result;
}