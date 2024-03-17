#include <stdio.h>
#include <string.h>
int main()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int p = 0;
  for (int i = 1; i <= c; i++)
  {
    p = p + a * i;
  }

  int r = p - b;
  if (r < 0)
    r = 0;
  printf("%d", r);
  return 0;
}