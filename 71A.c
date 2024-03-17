#include<stdio.h>
#include<string.h>
void func(char arr[])
{
       if(strlen(arr)<=10)
   {
       printf("%s",arr);
        printf("\n");
   }
   else
   {
       printf("%c",arr[0]);
       int a=strlen(arr)-2;
       printf("%d",a);
       printf("%c",arr[a+1]);
       printf("\n");
   }
}
int main(){
    int b;
    scanf("%d",&b);
    char arr[100];
    for(int i=0;i<b;i++)
    {
    scanf("%s",arr);
    func(arr);
    }

    return 0;
}