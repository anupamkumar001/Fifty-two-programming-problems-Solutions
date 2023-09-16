#include<bits/stdc++.h>
using namespace std;

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }
}

int countWords(char sentence[])
{
    int count = 0;
    int isWord = 0;

    for(int i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t')
        {
            if(!isWord)
            {
                count++;
                isWord = 1;
            }
        }
        else
        {
            isWord = 0;
        }
    }
    return count;
}

int countDuplicateWords(char sentence[])
{
    char words[10][20]; // Assuming at most 100 words, each with at most 100 characters
    int count[100] = {0}; // Array to keep track of counts
    int uniqueCount = 0;
    int sum_of_total_count = 1;
    char* token = strtok(sentence, " ");
    while (token != NULL)
    {
        int found = 0;
        for (int i = 0; i < uniqueCount; i++)
        {
            if (strcmp(token, words[i]) == 0)
            {
                found = 1;
                count[i]++;
                break;
            }
        }

        if (!found)
        {
            strcpy(words[uniqueCount], token);
            count[uniqueCount]++;
            uniqueCount++;
        }

        token = strtok(NULL, " ");
    }
    for (int i = 0; i < uniqueCount; i++)
    {
        if (count[i] > 1)
        {
            sum_of_total_count *= factorial(count[i]);
        }
    }
    return sum_of_total_count;
}

int main()
{
    int T, count_word = 0, duplicate_words = 0, result = 0;
    char sentence[200];
    scanf("%d",&T);
    for(int k = 1 ; k <= T ; k++)
    {
        getchar();
        scanf("%[^\n]",sentence);
        count_word = countWords(sentence);
        duplicate_words = countDuplicateWords(sentence);
        result = factorial(count_word) / duplicate_words;
        cout <<"1/"<< result << "\n";

    }
    return 0;
}
