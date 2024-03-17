#include <stdio.h>
#include <string.h>
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  for (int i = 0; i < b; i++)
  {
    if (a % 10 != 0)
    {
      a--;
    }
    else
      a = a / 10;
  }
  printf("%d", a);
  return 0;
}