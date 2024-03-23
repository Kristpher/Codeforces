#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int b = 2 * a;
  int arr[b];
  for (int i = 0; i < b; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < b; i += 2)
  {
    if (arr[i] % arr[i + 1] == 0)
    {
      printf("0 ");
    }
    else
      printf("%d ", arr[i + 1] - (arr[i] % arr[i + 1]));
  }
  return 0;
}