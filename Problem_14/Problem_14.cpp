/*#include<bits/stdc++.h>
using namespace std;
void char_finder(string sentence, char charecter)
{
    int counter=0;
    for(int i = 0; i <= sizeof(sentence); i++)
    {
        if(sentence[i] == charecter)
        {
            counter++;
        }


    }
            if(counter > 0)
        {
            cout << "Occurrence of '"<< charecter <<"' in '" << sentence << "' = " << counter << "\n";
        }
        else
        {
            cout << "'" << charecter << "' is not present";
        }
}
int main()
{
    int T;
    cin >> T;
    for(int i = 1 ; i <= T ; i++)
    {
        char first_line[10001], second_line;
        getchar();
        scanf("%[^\n]",first_line);
        getchar();
        scanf("%c",&second_line);
        char_finder(first_line, second_line);
    }
    return 0;
}
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    char character;
    int count , T;
    cin >> T;
    for(int i=1 ; i <= T ; i++)
    {
        count = 0;
        getchar();
        getline(cin, sentence);

        cin >> character;

        for (char c : sentence)
        {
            if (c == character)
            {
                count++;
            }
        }
        if(count > 0)
        {
            cout << "Occurrence of '"<< character <<"' in '" << sentence << "' = " << count << "\n";
        }
        else
        {
            cout << "'" << character << "' is not present" << "\n";
        }
    }
    return 0;
}










