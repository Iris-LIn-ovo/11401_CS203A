/*
   ========================================
   hash_fn.h — declare your hash functions
   ========================================

    Development History:
    - 2025/11/25: 新增程式碼
    - 2025/11/25: 修正無法編譯問題
    - 2025/11/29: 新增程式碼
    - 2025/11/29: 刪除全型底線
    - 2025/11/30: 新增執行成果與成果與查看結果程式碼
    - 2025/11/30: 新增更新日誌

 */
#ifndef HASH_FN_H
#define HASH_FN_H

#include <stdio.h>
#include <string.h>

int myHashString(const char* str, int m);
int myHashInt(int key, int m);

#endif