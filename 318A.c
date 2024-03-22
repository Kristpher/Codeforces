#include <stdio.h>
int main()
{
  long long a, b, val;
  scanf("%lld%lld", &a, &b);
  long long c;
  if (a % 2 != 0)
  {
    c = (a +1) / 2;
  }
  else
    c = a / 2;

  if (b <= c)
  {
    val = 2 * b - 1;
  }
  else
  {
   b = b - c;
    val = 2 * b;
  }
  printf("%lld", val);
  return 0;
}