#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  int h;
  scanf("%d", &h);
  int arr[a];
  int width = 0;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > h)
    {
      width = width + 2;
    }
    else
      width++;
  }
  printf("%d", width);
  return 0;
}