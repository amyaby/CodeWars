#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 26

bool is_pangram(const char *str_in) 
{
    bool pangram_alphabet[MAX] = {false}; // Initialize all elements to false
    int i = 0;
    int M = strlen(str_in);
    
 
    char *mutable_str = malloc((M + 1) * sizeof(char));
    if (mutable_str == NULL) return false;
    
    strcpy(mutable_str, str_in);
    
    while (mutable_str[i]) {
        if (mutable_str[i] >= 'A' && mutable_str[i] <= 'Z') {
            mutable_str[i] = mutable_str[i] + 32;
        }
        i++;
    }

    i = 0;

    while (i < M) {
        if (mutable_str[i] >= 'a' && mutable_str[i] <= 'z') {
            int index = mutable_str[i] - 'a';
            pangram_alphabet[index] = true;
        }
        i++;
    }

    free(mutable_str);

    for (int j = 0; j < MAX; j++) {
        if (!pangram_alphabet[j]) {
            return false; 
        }
    }

    return true;
}
