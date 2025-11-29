/*
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
*/
/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    return key % m;  // division method example
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;

    // TODO: replace with your own design
    if (m <= 0 || str == NULL) return -1;
    unsigned long long p = 31;
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash * p + (unsigned char)str[i]);
    }

    return (int)(hash % m); // basic division method
}