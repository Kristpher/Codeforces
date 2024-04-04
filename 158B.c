#include <stdio.h>
int main()
{
    int a;
    int c = 1;
    scanf("%d", &a);
    int hash[4] = {0};
    int arr[a];
    for (int i = 0; i < 4; i++)
    {
        hash[i] = 0;
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        hash[arr[i] - 1]++;
    }
    count = count + hash[2] + hash[3];
    hash[0] = hash[0] - hash[2];
    count = count + (hash[1] / 2);
    if ((hash[1] % 2) == 1)
    {
        count++;
        hash[0] = hash[0] - 2;
    }
    if (hash[0] > 0)
    {
        if(hash[0]%4==0 
        count = count+hash[0]/4;
        else if(hash[0]%4!=0)
        count=count+1+hash[0]/4;
    }
    printf("%d", count);
    return 0;
}
