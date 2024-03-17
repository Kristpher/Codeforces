#include <stdio.h>
#include <string.h>
int main()
{
  char arr[100];
  scanf("%s", arr);
  int count = 1;
  int max = -1;
  for (int i = 0; i < strlen(arr); i++)
  {
    if (arr[i] == arr[i + 1])
    {
      count++;
      if (max < count)
        max = count;
    }
    else
      count = 1;
  }

  if (max >= 7)
    printf("YES");
  else
    printf("NO");
  return 0;
}