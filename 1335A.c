#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        if(b<=2)
        printf("0");
        else
        {
            if(b%2!=0)
            printf("%d",(b-1)/2);
            else
            printf("%d",(b/2)-1);
        }
        printf("\n");
    }
    return 0;
}