#include <stdio.h>
#include <string.h>
int main()
{
  char arr[100];
  char arr2[100];
  char arr3[200];
  scanf("%s%s%s", arr, arr2, arr3);
  int hash[26];
  int hash2[26];
  int c = 1;
  for (int i = 0; i < 26; i++)
  {
    hash[i] = 0;
    hash2[i] = 0;
  }
  if (strlen(arr3) == (strlen(arr) + strlen(arr2)))
  {
    for (int i = 0; i < strlen(arr3); i++)
    {
      hash2[arr3[i] - 65]++;
      if (i < strlen(arr2))
        hash[arr2[i] - 65]++;
      if (i < strlen(arr))
        hash[arr[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
      if (hash[i] != hash2[i])
      {
        c = 0;
      }
    }
    if (c == 1)
      printf("YES");
    else if (c == 0)
      printf("NO");
  }
  else
    printf("NO");
  return 0;
}