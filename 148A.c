#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  int hash[e];
  for (int i = 0; i < e; i++)
  {
    hash[i] = 0;
  }
  if (a == 1 || b == 1 || c == 1 || d == 1)
  {
    printf("%d", e);
  }
  else
  {
    for (int i = 0; i < e; i++)
    {
      if (i % a == 0)
      {
        hash[i]++;
      }
      if (i % b == 0)
      {
        hash[i]++;
      }
      if (i % c == 0)
      {
        hash[i]++;
      }
      if (i % d == 0)
      {
        hash[i]++;
      }
    }
    int count = 0;
    for (int i = 0; i < e; i++)
    {
      if (hash[i] > 0)
        count++;
    }
    printf("%d", count);
  }
  return 0;
}