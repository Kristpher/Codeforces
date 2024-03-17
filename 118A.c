#include <stdio.h>
#include <string.h>
int main()
{
  char arr[120];
  char new[200];
  int k = 0;
  scanf("%s", arr);
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'I' || arr[i] == 'i' || arr[i] == 'O' || arr[i] == 'o' || arr[i] == 'U' || arr[i] == 'u' || arr[i] == 'Y' || arr[i] == 'y')
    {
      continue;
    }
    else
    {
      if (arr[i] < 91 && arr[i] > 64)
      {
        arr[i] = arr[i] + 32;
      }
      new[k] = '.';
      k++;
      new[k] = arr[i];
      k++;
    }
  }
  new[k] = '\0';
  printf("%s", new);
  return 0;
}