#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
  }
  int count = 1;
  for (int i = 0; i < a - 1; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}