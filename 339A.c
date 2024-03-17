#include <stdio.h>
char swap(char *a, char *b)
{
  char temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}
int main()
{
  char arr[100];
  scanf("%s", arr);
  for (int i = 0; arr[i] != '\0'; i++)
  {
    for (int j = i + 1; arr[j] != '\0'; j++)
    {
      if (arr[i] != '+' && arr[j] != '+')
      {
        if ((arr[i] - 48) > (arr[j] - 48))
        {
          swap(&arr[i], &arr[j]);
        }
      }
    }
  }
  printf("%s", arr);
  return 0;
}