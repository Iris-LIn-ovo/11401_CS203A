/* #include "hash_fn.hpp"
using namespace std;

int hashInt(int key, int m) {
    if (m <= 0) return -1;
    return (31 * key + 7) % m;
}

int hashString(const string &s, int m) {
    if (m <= 0) return -1;

    unsigned long long hash = 0;
    const unsigned long long p = 31;

    for (char c : s) {
        hash = (hash * p + (unsigned char)c) % m;
    }

    return static_cast<int>(hash);
}
*/
/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: 
 */
#include "hash_fn.hpp"

int myHashInt(int key, int m) {

    if (m <= 0) return -1;
    // TODO: replace with your own design
    return (31 * key + 7) % m;

}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;

    // TODO: replace with your own design
    if (m <= 0) return -1;
    const unsigned long p = 31;

    for (char c : str) {
        hash = (hash * p + (unsigned char)c);
    }

    return static_cast<int>(hash % m);  // basic division method
}