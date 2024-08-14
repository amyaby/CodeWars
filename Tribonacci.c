#include <stdlib.h>

long long *tribonacci(const long long signature[3], size_t n) {
    if (n == 0) return NULL;

    long long *result = (long long *)malloc(n * sizeof(long long));
    if (result == NULL) {
        return NULL;
    }

    if (n <= 3) {
        for (size_t i = 0; i < n; i++) {
            result[i] = signature[i];
        }
        return result;
    }

    for (size_t i = 0; i < 3; i++) {
        result[i] = signature[i];
    }

    for (size_t i = 3; i < n; i++) {
        result[i] = result[i-1] + result[i-2] + result[i-3];
    }

    return result;
}
