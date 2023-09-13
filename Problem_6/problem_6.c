#include<stdio.h>

int main()
{
    int T,N,firstDigit,lastDigit,sum=0,i;
    scanf("%d",&T);
    for(i = 1 ; i <= T ; i++)
    {
        scanf("%d",&N);
        lastDigit = N % 10;
        firstDigit = N;
        while(N >= 10)
        {
            N = N / 10;
        }
        firstDigit = N;
        sum = firstDigit + lastDigit;
        printf("Sum = %d\n",sum);
    }
    return 0;
}

