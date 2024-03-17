#include <stdio.h>
#include <string.h>
int year(int a)
{
  int b;
  int hash[10];
  for (int i = 0; i <= 9; i++)
  {
    hash[i] = -1;
  }
  int c = -5;
  while (a >= 10)
  {
    b = a % 10;
    if (hash[b] == -1)
    {
      hash[b] = -2;
    }
    else
    {
      return -1;
    }
    a = a / 10;
  }
  if (hash[a % 10] == -1)
  {
    return 1;
  }
  else
    return -1;
}
int main()
{
  int a;
  scanf("%d", &a);
  a++;
  while (year(a) != 1)
  {
    a++;
  }
  printf("%d", a);
  return 0;
}