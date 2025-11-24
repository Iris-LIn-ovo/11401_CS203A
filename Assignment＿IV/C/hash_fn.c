// hash_fn.c
#include "hash_fn.h"
#include <stdint.h>

// ---- Integer Hash Function ----
// h(k) = (31 * k + 7) mod m
int hash_int(int key, int m) {
    if (m <= 0) return -1; // avoid division by zero
    return (31 * key + 7) % m;
}

// ---- String Hash Function ----
// Polynomial rolling hash: sum(s[i] * 31^i)
int hash_string(const char *s, int m) {
    if (m <= 0 || s == NULL) return -1;

    unsigned long long hash = 0;
    unsigned long long p = 31;

    for (int i = 0; s[i] != '\0'; i++) {
        hash = (hash * p + (unsigned char)s[i]) % m;
    }

    return (int)hash;
}
