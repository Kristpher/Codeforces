#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  char arr[100];
  scanf("%s", arr);
  int count;
  for (int i = 0; i < (strlen(arr) - 1); i++)
  {
    if (arr[i] == arr[i + 1])
    {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}