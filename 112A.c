#include <stdio.h>
#include <string.h>
int main()
{
  char c1[100];
  char c2[100];
  scanf("%s", c1);
  scanf("%s", c2);
  for (int i = 0; c1[i] != '\0'; i++)
  {
    if (c1[i] < 91)
    {
      c1[i] = c1[i] + 32;
    }
  }
  for (int i = 0; c2[i] != '\0'; i++)
  {
    if (c2[i] < 91)
    {
      c2[i] = c2[i] + 32;
    }
  }
  if (strcmp(c1, c2) == 0)
    printf("0");
  else if (strcmp(c1, c2) > 0)
    printf("1");
  else if (strcmp(c1, c2) < 0)
    printf("-1");
  return 0;
}