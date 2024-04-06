#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
    char name[100];
    int vis;
    int count;
    struct node *next;
};
struct node* createnode(char a[]){
    struct node*temp=(struct node *)malloc(sizeof(struct node));
    strcpy(temp->name,a);
    temp->next=NULL;
    temp->vis=0;
    temp->count=0;
    return temp;
}
void check(struct node*hash[],char c[],int size,int *index)
{
   struct node *temp=createnode(c);
        for(int i=0;i<size;i++)
        {
             if(hash[i]==NULL)
            {
                hash[i]=temp;
              
                if(hash[i]->vis==0)
                {
                    hash[i]->vis=1;
                    printf("OK\n");
                    return;
                }
            }
            else if(hash[i]!=NULL){
            if(strcmp(hash[i]->name,c)==0)
            { 
                (hash[i]->count)++;
                printf("%s%d\n",c,hash[i]->count);
                return;
            }
            }
            
            }
    
}
int main(){
    int a;
    scanf("%d",&a);
    char c[100];
    struct node *hash[a];
    for(int i=0;i<a;i++)
    hash[i]=NULL;
    int index=0;
    for(int i=0;i<a;i++){
    scanf("%s",c);
 
    check(hash,c,a,&index);
    }
    return 0;
}