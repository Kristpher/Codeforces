#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  float sum = 0;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  float b = sum / a;
  printf("%f", b);
  return 0;
}