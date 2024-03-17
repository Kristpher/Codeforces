#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  int b = 0;
  int max = -1;
  scanf("%d", &a);
  int arr[2 * a];
  for (int i = 0; i < 2 * a; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 2 * a - 1; i >= 0; i--)
  {
    if (i % 2 != 0)
    {
      b = b - arr[i];
    }
    else
    {
      b = b + arr[i];
    }
    if (max < b)
      max = b;
  }
  printf("%d", max);
  return 0;
}