#include <stdio.h>
#include <string.h>
int main()

{
  char arr[100];
  scanf("%s", arr);
  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] > 96 && arr[i] < 123)
      count1++;
    if (arr[i] > 64 && arr[i] < 91)
      count2++;
  }
  for (int i = 0; i < strlen(arr); i++)
  {
    if (count1 >= count2)
    {
      if (arr[i] > 64 && arr[i] < 91)
        arr[i] = arr[i] + 32;
    }
    if (count1 < count2)
    {
      if (arr[i] > 96 && arr[i] < 123)
        arr[i] = arr[i] - 32;
    }
  }
  printf("%s", arr);
  return 0;
}