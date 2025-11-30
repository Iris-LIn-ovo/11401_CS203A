/*
#ifndef HASH_FN_HPP
#define HASH_FN_HPP
#include <string>

int hashInt(int key, int m);
int hashString(const std::string &s, int m);

#endif 
*/
/*
   ========================================
   hash_fn.hpp — declare your hash functions
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
#ifndef HASH_FN_HPP
#define HASH_FN_HPP

#include <string>

int myHashString(const std::string& str, int m);
int myHashInt(int key, int m);

#endif