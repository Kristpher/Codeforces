#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=1;
    int count=1;
    for(int i=0;i<a-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            count++;
            if(max<count)
            max=count;
          
        }
        else
        count=1;
    }
    printf("%d",max);
    return 0;
}