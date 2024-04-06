#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count1=0;
    int count2=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i]%2==0)
        count1++;
        else
        count2++;

    }
    if(count1>count2)
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
      if(count1<count2)
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}1