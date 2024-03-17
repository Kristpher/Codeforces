#include <stdio.h>
#include <string.h>
int main()
{
  int b;
  scanf("%d", &b);
  char a[100020];
  scanf("%s", a);
  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < strlen(a); i++)
  {
    if (a[i] == 'D')
      count1++;
    else if (a[i] == 'A')
      count2++;
  }
  if (count1 > count2)
    printf("Danik");
  else if (count1 < count2)
    printf("Anton");
  else if (count1 == count2)
    printf("Friendship");

  return 0;
}