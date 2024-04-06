#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  int count = 0, c = 0;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > 0)
      c = c + arr[i];
    if (arr[i] < 0)
    {
      c--;
      if (c < 0)
        count++;
      if (c < 0)
        c = 0;
    }
  }
  printf("%d", count);
  return 0;
}