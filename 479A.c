#include <stdio.h>
int main()
{
  int a, b, c, out, mid;
  scanf("%d%d%d", &a, &b, &c);
  if (a != 1 && b != 1 && c != 1)
  {
    out = a * b * c;
  }
  else if (a == 1 && b == 1 && c == 1)
  {
    out = a + b + c;
  }
  else
  {
    if (a == 1 && b != 1)
    {
      mid = a + b;
      if (c != 1)
        out = mid * c;
      else
        out = mid + c;
    }
    if (a != 1 && c == 1)
    {
      mid = c + b;
      out = mid * a;
    }
    if (b == 1 && a != 1 && c != 1)
    {
      if (a <= c)
      {
        mid = a + b;
        out = c * mid;
      }
      else
      {
        mid = c + b;
        out = a * mid;
      }
    }
  }
  printf("%d", out);
  return 0;
}