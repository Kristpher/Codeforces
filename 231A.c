#include<stdio.h>
int main()
{   int a;
    scanf("%d",&a);
  int arr[a][3];
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<3;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  int count=0;
  int solve=0;
  for(int i=0;i<a;i++)
  {   
      count=0;
      for(int j=0;j<3;j++)
      {
         if(arr[i][j]==1)
         {
             count++;
         }
      }
      if(count>1)
      solve++;
  }
      printf("%d",solve);
      return 0;
  }