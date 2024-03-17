#include <stdio.h>
#include <string.h>
int main()
{
  char c1[100000];
  scanf("%s", c1);
  c1[strlen(c1)] = '\0';
  if (c1[0] >= 97 && c1[0] <= 122)
  {
    c1[0] = c1[0] - 32;
  }
  printf("%s", c1);
  return 0;
}