#include <stdio.h>
#include<string.h>
int main() {
int a,b;
scanf("%d%d",&a,&b);
char arr[a];
int hash[10000];
scanf("%s",arr);
 for(int k=0;k<b;k++)
 {
     for(int j=0;j<strlen(arr);j++)
     {
         hash[j]=0;
     }
     for(int i=0;i<strlen(arr)-1;i++)
     {
         if(arr[i]=='B'&&arr[i+1]=='G'&&hash[i]==0)
         {   char temp=arr[i+1];
             arr[i+1]=arr[i];
             arr[i]=temp;
             hash[i+1]=1;
         }
     }
 }
 printf("%s",arr);
return 0;
}