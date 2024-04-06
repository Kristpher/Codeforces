#include <stdio.h>
int main()
{
  int a;
  int b;
  scanf("%d%d", &a, &b);
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      if (i % 2 == 0)
      {
        printf("#");
      }
      else
      {
        if (i % 4 == 1)
        {
          if (j == b - 1)
          {
            printf("#");
          }
          else
            printf(".");
        }
      }
      if (i % 4 == 3)
      {
        if (j == 0)
        {
          printf("#");
        }
        else
          printf(".");
      }
    
  }
  printf("\n");
}
return 0;
}