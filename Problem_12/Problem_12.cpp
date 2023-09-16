#include<bits/stdc++.h>
using namespace std;

int countTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    int T, N;
    cin >> T;
    for(int i = 1; i <= T ; i++)
    {
        cin >> N;
        int zeros = countTrailingZeros(N);
        printf("%d\n", zeros);
    }

    return 0;
}


