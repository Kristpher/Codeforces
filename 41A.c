#include <stdio.h>
#include <string.h>
int main()
{
  char a[200];
  char c[200];
  scanf("%s%s", a, c);
  int val = 1;
  for (int i = 0; i < strlen(a); i++)
  {
    if (c[strlen(c) - 1 - i] != a[i])
    {
      val = 0;
      break;
    }
  }

  if (val == 1)
    printf("YES");
  else if (val == 0)
    printf("NO");
  return 0;
}