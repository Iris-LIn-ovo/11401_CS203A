# Assignment IV

## CXX
- hash_fn.hpp：宣告
    
- hash_fn.cpp：計算
    * int hashInt(int key, int m) {}  
        定義函式 hashInt（m 是 hash table 大小）
    * return (31 * key + 7) % m;
        算 31 * key + 7，再對 m 取餘數 %
    * 遇見問題
        1. 負數 key  
            如果 key 是負數，C++ 中 % 的結果可能為負（例如 -1 % 11 == -1），這會產生負索引。
        gpt建議改善方法：若希望索引永遠在 0..m-1，應改成 ((value % m) + m) % m 或保證 value 非負
        2. 整數溢位
            31 * key + 7 可能溢位（超過 int 的範圍）。對一般小鍵值通常沒問題，但若 key 很大（例如 10^9）或在極端情況下極可能溢位
        gpt建議改善方法：建議用更大整數型別（如 long long / uint64_t）或在取模前就用模運算技巧（模乘法）避免溢位
- main.cpp：主函式，用來呼叫另外兩個檔案
編譯器把 main.cpp 與 hash_fn.cpp 弄成一個可執行檔