#include <stdio.h>
#include<string.h>
int main() {
int a;
int c=1;
scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++)
{
 scanf("%d",&arr[i]);   
}
for(int i=0;i<a;i++)
{
    if(arr[i]==1)
    {c=0;
    break;}
}
if(c==0)
printf("HARD");
else if(c==1)
printf("EASY");
return 0;
}