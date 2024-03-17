#include <stdio.h>
#include<string.h>
int main() {
int a;
scanf("%d",&a);
int c=0;
if(a%4==0)
c=1;
if(a%7==0)
c=1;
if(a%44==0)
c=1;
if(a%74==0)
c=1;
if(a%47==0)
c=1;
if(a%444==0)
c=1;
if(a%447==0)
c=1;
if(a%474==0)
c=1;
if(a%477==0)
c=1;
if(c==1)
printf("YES");
else if(c==0)
printf("NO");
return 0;
}