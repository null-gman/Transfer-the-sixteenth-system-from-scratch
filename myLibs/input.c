#include "./myLib.h"

void freeBuffAfterFgets()
{
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
    //net and dust
  };
}

//input()
int inputStr(const char *msg, char *dest, int buff)
{
  printBold(msg);

  if (fgets(dest, buff, stdin) == NULL)
  {
    // no string inputs
    return 0;
  }

  size_t len = strlen(dest);

  if (len > 0 && dest[len - 1] == '\n')
  {
    dest[len - 1] = '\0';
  }
  else
  {
    freeBuffAfterFgets();
    return -1;
  }

  trimStr(dest);//.strip
  return (strlen(dest) == 0) ? 0 : 1;
}




