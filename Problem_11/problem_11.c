#include<stdio.h>
int main()
{
    int  T, N;
    long long int Result;
    scanf("%d",&T);
    for(int  i = 1 ; i <= T ; i++)
    {
        scanf("%d",&N);
        Result = 1;
        for(int  j = 1 ; j <= N ; j++)
        {
            Result = Result * j;
        }
        printf("%lld\n",Result);

    }

}
