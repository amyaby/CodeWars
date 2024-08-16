#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b);

char** inArray(char* array1[], int sz1, char* array2[], int sz2, int* lg) {
    int k = 0;
    char** result = (char**)malloc(sz1 * sizeof(char*));
    if (result == NULL)
        return NULL;

    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (strstr(array2[j], array1[i]) != NULL) {
                result[k] = array1[i];
                k++;
                break;
            }
        }
    }

    *lg = k;
    result = (char**)realloc(result, k * sizeof(char*));
    if (result == NULL)
        return NULL;

    qsort(result, k, sizeof(char*), compare);

    return result;
}