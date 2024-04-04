#include <stdio.h>
#include <string.h>
int main()
{
  char arr[1000];
  scanf("%s", arr);
  char str[500];
  int count = 0;
  int j = 0;
  int c = 0;
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] == 'W' && arr[i + 1] == 'U' && arr[i + 2] == 'B')
    {
      count = 3;
      if (c == 1)
      {
        str[j] = ' ';
        j++;
      }
      c = 0;
    }
    if (count != 0)
    {
      count--;
      continue;
    }
    else
    {
      c = 1;
      str[j] = arr[i];
      j++;
    }
  }
  str[strlen(str)] = '\0';
  printf("%s", str);
  return 0;
}