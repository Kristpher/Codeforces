#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a][2];
  int count = 0;
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < a; i++)
  {
    if (arr[i][1] - arr[i][0] >= 2)
      count++;
  }
  printf("%d", count);
  return 0;
}