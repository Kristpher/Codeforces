#include <stdio.h>
int main()
{
  long long arr[4];
  for (int i = 0; i < 4; i++)
    scanf("%lld", &arr[i]);
  int count = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = i + 1; j < 4; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
  }
  if (count == 6)
    printf("%d", 3);
  if (count == 3 || count == 2)
    printf("%d", 2);
  if (count == 1)
    printf("%d", 1);
  if (count == 0)
    printf("%d", 0);
}