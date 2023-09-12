#include<stdio.h>
int main()
{
    for(int i=1000,j=1; i >=1; i--,j++)
    {
        printf("%d\t",i);
        if(j%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
