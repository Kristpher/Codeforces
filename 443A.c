#include<stdio.h>
#include<string.h>
int main(){
    char arr[1000];
    int hash[26];
    fgets(arr,1000,stdin);
    for(int i=0;i<26;i++){
        hash[i]=0;
    }
    for(int i=0;i<strlen(arr);i++)
    {  if(arr[i]>96 &&arr[i]<123)
        hash[arr[i]-97]++;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(hash[i]>0)
        count++;
    }
    printf("%d",count);
    return 0;
}