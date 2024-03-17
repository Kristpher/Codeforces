#include <stdio.h>
#include <string.h>
int main()

{
  int a;
  scanf("%d", &a);
  int arr[a][3];
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  int x = 0, y = 0, z = 0;
  for (int j = 0; j < 3; j++)
  {
    for (int i = 0; i < a; i++)
    {
      if (j == 0)
        x = x + arr[i][j];
      if (j == 1)
        y = y + arr[i][j];
      if (j == 2)
        z = z + arr[i][j];
    }
  }

  if (x == 0 && y == 0 && z == 0)
  {
    printf("YES");
  }
  else
    printf("NO");
  return 0;
}