#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int k;
     int arr[n];
     int count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     
    }
    int c=arr[k-1];
    for(int i=0;i<n;i++)
    {
           if(arr[i]>=c &&arr[i]!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}