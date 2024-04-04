#include <stdio.h>
int main()
{
  int a;
  int c = 1;
  scanf("%d", &a);
  int hash[4];
  int arr[a];
  for (int i = 1; i <= 4; i++)
  {
    hash[i] = 0;
  }
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &arr[i]);
    hash[arr[i]]++;
  }
  int count = 0;
  count = count + hash[4];

  for (int i = 0; i < a; i++)
  {
    if (hash[arr[i]] != 0)
    {
      if (arr[i] < 4)
      {
        if (arr[i] == 2 && hash[2] != 0)
        {
          if (hash[2] != 1)
          {
            hash[2] = hash[2] - 2;

            count++;
          }
          if (c == 0 && hash[2] == 1 && hash[1] != 0)
          {
            count++;

            hash[2]--;
            if (hash[1] == 1)
              hash[1]--;
            else
              hash[1] = hash[1] - 2;
          }
        }
        else
        {
          if (hash[1] != 0 && hash[3] != 0)
          {
            hash[1]--;
            hash[3]--;

            count++;
          }
          else
            c = 0;
        }
      }
    }
  }
  if (hash[3] != 0)
  {
    count = count + hash[3];
  }
  if (hash[1] != 0)
  {
    count = count + hash[1];
  }
  if (hash[2] != 0)
  {
    count = count + hash[2];
  }
  printf("%d", count);
  return 0;
}
