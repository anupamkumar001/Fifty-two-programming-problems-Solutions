#include<stdio.h>
int main()
{
    int i,t,size;
    char n[100];
    scanf("%d",&t);
    for(i=0; i<t ; i++)
    {
        scanf("%s",&n);
        if(n[strlen(n)-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
