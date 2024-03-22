#include <stdio.h>
#include <string.h>
int main()
{
  char a[102];
  char b[102];
  scanf("%s%s", a, b);
  char c[strlen(a)];
  c[strlen(a)] = '\0';
  for (int i = 0; i < strlen(a); i++)
  {
    if (a[i] == b[i])
    {
      c[i] = '0';
    }
    else
      c[i] = '1';
  }
  printf("%s", c);
  return 0;
}