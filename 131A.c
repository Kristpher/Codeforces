#include <stdio.h>
#include <string.h>
int main()
{
  char arr[101];
  scanf("%s", arr);
  char str[101];
  int c = 0;
  int i;
  for (i = 1; i < strlen(arr); i++)
  {
    if (arr[i] < 91 && arr[i] > 64)
    {
      str[i] = arr[i] + 32;
      c = 1;
    }
    else if (arr[i] > 96 && arr[i] < 123)
    {
      c = 0;
      break;
    }
  }
  if (arr[0] < 123 && arr[0] > 96)
  {
    str[0] = arr[0] - 32;
    if (arr[1] == '\0')
      arr[0] = arr[0] - 32;
  }
  if (arr[0] < 91 && arr[0] > 64)
  {
    if (c == 1 )
    {
      str[0] = arr[0] + 32;
    }
    
    else if (c == 0)
    {
      str[0] = arr[0];
    }
    if(arr[1]=='\0')
    arr[0]=arr[0]+32;
  }
  str[i] = '\0';
  if (c == 0)
    printf("%s", arr);
  else if (c == 1)
    printf("%s", str);
  return 0;
}