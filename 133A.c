#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 for(int i=1;i<=a;i++)
 {
  if(i!=a)
  {
    if(i%2!=0)
    printf("I hate that ");
    else
    printf("I love that ");
  }
  else
  {
    if(a%2!=0)
    {
       printf("I hate it");
    }
    else
    printf("I love it");

  }
 }
return 0;
}