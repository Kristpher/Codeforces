#include<stdio.h>
int main()
{   
    long long a,b,c,m,n;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a%c!=0)
     m=(a/c)+1;
    else
     m=a/c;
     if(b%c!=0)
     n=(b/c)+1;
    else
     n=b/c;
    
    printf("%lld",m*n);
    return 0;
}