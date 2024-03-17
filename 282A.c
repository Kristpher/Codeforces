#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    char c[4];
    int b=0;
    for(int i=0;i<a;i++)
    {
        scanf("%s",c);
        c[3]='\0';
        if(strcmp(c,"++X")==0)
        {
            ++b;
        }
        else if(strcmp(c,"X++")==0)
        {
            b++;
        }
         else if(strcmp(c,"X--")==0)
        {
            b--;
        }
          else if(strcmp(c,"--X")==0)
        {
            --b;
        }
        
    }
    printf("%d",b);
    return 0;
    
}