#include <stdio.h>
#include <string.h>
int main()
{
  int a;
  scanf("%d", &a);
  int flag = 1;
  if (a < 26)
    printf("NO");
  else
  {
    int count = 0;
    int hash[26];
    for (int i = 0; i < 26; i++)
    {
      hash[i] = 0;
    }
    char arr[a];
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
      if (arr[i] > 96 && arr[i] < 123)
      {
        hash[arr[i] - 97]++;
      }
      else if (arr[i] < 91 && arr[i] > 64)
      {
        hash[arr[i] - 65]++;
      }
    }
    for (int i = 0; i < 26; i++)
    {

      if (hash[i] < 1)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 0)
    {
      printf("NO");
    }
    else if (flag == 1)
    {
      printf("YES");
    }
    return 0;
  }
}