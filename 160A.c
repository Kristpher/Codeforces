#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  int arr[a];
  int sum = 0;
  int max = 0;
  int k = 0;
  int hash[101];
  int j = 0;
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 101; i++)
  {
    hash[i] = 0;
  }
  for (int i = 0; i < a; i++)
  {
    sum = sum + arr[i];
    hash[arr[i]]++;
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  while (k <= sum / 2)
  {
    while (hash[max] == 0)
    {
      max--;
    }
    k = k + max;
    hash[max]--;
    j++;
  }
  printf("%d", j);
  return 0;
}