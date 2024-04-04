#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d",&a);
    char arr[100];
    int count=0;
    for(int i=0;i<a;i++)
    {
        scanf("%s",arr);
        if(strcmp("Tetrahedron",arr)==0)
        count=count+4;
         else if(strcmp("Cube",arr)==0)
        count=count+6;
         else if(strcmp("Octahedron",arr)==0)
        count=count+8;
         else if(strcmp("Icosahedron",arr)==0)
        count=count+20;
         else if(strcmp("Dodecahedron",arr)==0)
        count=count+12;
        
    }
    printf("%d",count);
    return 0;
}