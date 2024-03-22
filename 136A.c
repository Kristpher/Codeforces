#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  for (int i = 1; i <= a; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= a; j++)
    {
      if (i == arr[j])
      {
        printf("%d ", j);
      }
    }
  }
  return 0;
}