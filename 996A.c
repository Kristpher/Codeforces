#include <stdio.h>
int main()
{
  long a;
  int k = 0;
  scanf("%ld", &a);
  int arr[5] = {100, 20, 10, 5, 1};
  if (a >= arr[0] && a != 0)
  {
    k = k + a / arr[0];
    a = a % arr[0];
  }
  if (a >= arr[1] && a != 0)
  {
    k = k + a / arr[1];
    a = a % arr[1];
  }
  if (a >= arr[2] && a != 0)
  {
    k = k + a / arr[2];
    a = a % arr[2];
  }
  if (a >= arr[3] && a != 0)
  {
    k = k + a / arr[3];
    a = a % arr[3];
  }
  if (a >= arr[4] && a != 0)
  {
    k = k + a;
  }
  printf("%d", k);
  return 0;
}