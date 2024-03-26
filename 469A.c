#include <stdio.h>
int main()
{
  int a, c = 1, k = 0, count = 0;
  scanf("%d", &a);
  int arr[10000];
  int hash[a];
  while (count < 2)
  {
    k++;
    scanf("%d", &arr[k]);
    if (k <= a)
      hash[k] = 0;
    if (getchar() == '\n')
      count++;
  }
  for (int j = 1; j <= k; j++)
  {
    if (hash[arr[j]] == 0)
      hash[arr[j]] = 1;
    else
      continue;
  }
  for (int j = 1; j <= a; j++)
  {
    if (hash[j] != 1)
      c = 0;
  }
  if (c)
    printf("I become the guy.");
  else if (!c)
    printf("Oh, my keyboard!");
  return 0;
}