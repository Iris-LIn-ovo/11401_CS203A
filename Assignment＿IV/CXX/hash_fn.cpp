#include "hash_fn.hpp"
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
