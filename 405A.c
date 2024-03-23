#include<stdio.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  int a;
  scanf("%d",&a);
  int arr[a];
  for(int i=0;i<a;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<a;i++)
  {
    for(int j=i+1;j<a;j++)
    {
      if(arr[i]>arr[j])
      swap(&arr[i],&arr[j]);
    }
  } 
   for(int i=0;i<a;i++)
  printf("%d ",arr[i]);
}