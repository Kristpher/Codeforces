#include <stdio.h>
#include<string.h>
int main() {
char arr[150];
scanf("%s",arr);
int count=0;
int c=0;
for(int i=0;i<strlen(arr);i++)
{int b=0;
    if(arr[i]=='h'&&count==0)
    {
        count++;
    }
       if(arr[i]=='e' && count==1)
    {
        count++;
    }
       if(arr[i]=='l' && count==2)
    {
        count++;
        b=1;
    }
     if(arr[i]=='l' && count==3 &&b==0)
    {
        count++;
    }
     if(arr[i]=='o' && count==4)
    {
        count++;
        c=1;
    }
}
if(c==0)
{
    printf("NO");
}
else
{
    printf("YES");
}
return 0;
}