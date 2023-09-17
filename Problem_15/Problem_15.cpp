#include<bits/stdc++.h>
using namespace std;

int main()
{
    char input[1000];
    int T,i;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        int counter[26] = {0};
        cin >> input;
        for(int i = 0 ; i <= strlen(input); i++)
        {
            if(input[i] >= 'a' && input[i] <= 'z')
            {
                counter[input[i] - 'a']++;
            }

        }

        for(int i = 0; i < 26; i++)
        {
            if(counter[i] != 0)
            {
                printf("%c = %d\n", 'a'+i, counter[i]);
            }
        }
    }
    return 0;
}
