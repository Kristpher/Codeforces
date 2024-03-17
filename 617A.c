#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  int k = 0;
  int i = 0;
  while (k != a)
  {
    if ((a - k) >= 5)
    {
      k = k + 5;
      i++;
    }
    else
    {
      i++;
      k = a;
    }
  }
  printf("%d", i);
  return 0;
}