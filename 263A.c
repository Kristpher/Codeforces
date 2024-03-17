#include<stdio.h>
int main()
{
    int arr[5][5];
    int m; int n;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
      
        
    }
      int a= abs(m-2);
        int b=abs(n-2);
        printf("%d",a+b);
    return 0;
}