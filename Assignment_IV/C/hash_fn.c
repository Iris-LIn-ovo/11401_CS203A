/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

    Development History:
        - 2025/11/25: 新增程式碼
        - 2025/11/25: 修正無法編譯問題
        - 2025/11/29: 新增程式碼
        - 2025/11/29: 刪除全型底線
        - 2025/11/30: 新增執行成果與成果與查看結果程式碼
        - 2025/11/30: 新增更新日誌
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