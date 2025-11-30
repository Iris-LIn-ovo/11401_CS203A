
/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Development History:
    - 2025/11/25: 新增程式碼
    - 2025/11/25: 修正無法編譯問題
    - 2025/11/29: 新增程式碼
    - 2025/11/29: 刪除全型底線
    - 2025/11/29: 加入tasks.json（為了使用c++17）
    - 2025/11/30: 新增執行成果與成果與查看結果程式碼
    - 2025/11/30: 新增更新日誌
   
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