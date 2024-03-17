#include <stdio.h>
#include <string.h>
int main()
{
  int count = 0;
  char a[1000];
  scanf("%s", a);
  a[strlen(a)] = '\0';
  int arr[26];
  for (int i = 0; i < 26; i++)
  {
    arr[i] = 0;
  }
  for (int i = 0; i < strlen(a); i++)
  {
    for (int j = 97; j <= 122; j++)
    {
      if (a[i] == j)
      {
        if (arr[j - 97] == 0)
        {
          arr[j - 97] = 1;
        }
      }
    }
  }

  for (int i = 0; i < 26; i++)
  {
    if (arr[i] == 1)
      count++;
  }

  if (count % 2 == 0)
  {
    printf("CHAT WITH HER!");
  }
  else
  {
    printf("IGNORE HIM!");
  }

  return 0;
}