#include <stdio.h>
int main()
{
  long long a;
  scanf("%lld", &a);
  long long sum;
  if (a % 2 != 0)
  {
    sum = -((a + 1) / 2);
  }
  else
    sum = a / 2;
  printf("%lld", sum);
}