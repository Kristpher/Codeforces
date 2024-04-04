#include <stdio.h>
int main()
{
  int a, c = 1,count = 0;
  scanf("%d", &a);
  int k;
  int hash[a];
  int p,q;
   scanf("%d", &p);
   for(int i=1;i<=a;i++)
   {
       hash[i]=0;
   }
for(int i=0;i<p;i++)
{
    scanf("%d",&k);
    hash[k]++;
}
 scanf("%d", &q);
for(int i=0;i<q;i++)
{
    scanf("%d",&k);
    hash[k]++;
}

  for (int j = 1; j <= a; j++)
  {
    if (hash[j] == 0)
      c = 0;
  }
  if (c)
    printf("I become the guy.");
  else if (!c)
    printf("Oh, my keyboard!");
  return 0;
}