#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 26

bool is_pangram(const char *str_in) 
{
    bool pangram_alphabet[MAX] = {false}; // Initialize all elements to false
    int i = 0;

    while (str_in[i]) 
    {
        if (str_in[i] >= 'A' && str_in[i] <= 'Z') 
        {
            int index = str_in[i] - 'A';
            pangram_alphabet[index] = true;
        } 
       else if (str_in[i] >= 'a' && str_in[i] <= 'z') 
       {
            int index = str_in[i] - 'a';
            pangram_alphabet[index] = true;
        }
        i++;
    }

    for (int j = 0; j < MAX; j++)
    {
        if (!pangram_alphabet[j])
        {
            return false;
        }
    }

    return true;
}
