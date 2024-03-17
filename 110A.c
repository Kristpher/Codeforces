#include <stdio.h>
int main()
{
  long long a;
  int b;
  int count = 0;
  scanf("%lld", &a);
  while (a >= 10)
  {
    b = a % 10;
    if (b == 4 || b == 7)
      count++;
    a = a / 10;
  }
  if (a % 10 == 4 || a % 10 == 7)
    count++;
  int c = 1;
  while (count >= 10)
  {
    b = count % 10;
    if (b != 4 &&

        b != 7)
    {
      c = 0;
      break;
    }
    count = count / 10;
  }
  if (count % 10 != 4 && count % 10 != 7)
  {
    c = 0;
  }
  if (c == 1)
    printf("YES");
  else
    printf("NO");
  return 0;
}