#include <stdio.h>
int main()
{
  int a, count = 0;
  scanf("%d", &a);
  int arr[a];

  for (int i = 0; i < a; i++)
    scanf("%d", &arr[i]);
  int min = arr[0];
  int max = arr[0];
  for (int i = 1; i < a; i++)
  {
    if (min > arr[i])
    {

      min = arr[i];
      count++;
    }
    if (max < arr[i])
    {

      max = arr[i];
      count++;
    }
  }
  printf("%d", count);
  return 0;
}