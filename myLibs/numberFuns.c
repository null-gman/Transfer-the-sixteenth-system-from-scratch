#include "./myLib.h"

MYNUMBER power(MYNUMBER number, size_t repet)
{
    MYNUMBER result = 1;
    for (size_t i = 0; i < repet; i++)
    {
        result *= number;
    }
    return result;
}

/////////////////////////////dec funs

int charToDecNum(char charcter)
{
    switch (charcter)
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
    default:
        return -1;
        break;
    }
}

// int()
MYNUMBER strToInt(const char *string)
{
    // 123
    size_t stringLen = strlen(string); // 3
    size_t order = stringLen - 1;      // 2
    MYNUMBER result = 0;

    for (size_t i = 0; i < stringLen; i++)
    {
        int num = charToDecNum(string[i]);
        result += num * power(10, order);
        order--;
    }

    return result;
}

int isDecNumIsInvalid(char *string)
{
    size_t i = 0;
    while (string[i] != '\0')
    {
        if (string[i] < 48 || string[i] > 57)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

///////////////////////////////hex funs

int isHexLenInvalid(int status, char *hexCode)
{
    if (status == -1)
    {
        if (strlen(hexCode) <= 8)
        {
            return 0;
        }
        return 1;
    }

    return 0;
}

int isHexNumInvalid(char *hexCode)
{
    // abc123A
    size_t hexCodeLen = strlen(hexCode);

    for (size_t i = 0; i < hexCodeLen; i++)
    {
        switch (charToLowerCase(hexCode[i]))
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
            break;
        default:
            return 1;
            break;
        }
    }
    return 0;
}
