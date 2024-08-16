
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(char* array[], int size) {
    for (int i = 1; i < size; i++) {
        char* key = array[i];
        int j = i - 1;
        while (j >= 0 && strcmp(array[j], key) > 0) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

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

    insertionSort(result, k);

    return result;
}