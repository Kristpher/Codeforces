#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  int max = -1;
  int min = 200;
  int c = 0, d = 0;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);

    if (max < arr[i])
    {
      max = arr[i];
      c = i;
    }
    if (min >= arr[i])
    {
      min = arr[i];
      d = i;
    }
  }

  if (d > c)
  {
    printf("%d", c + (a - 1 - d));
  }
  else
  {
    printf("%d", c + (a - 1 - d) - 1);
  }
  return 0;
}