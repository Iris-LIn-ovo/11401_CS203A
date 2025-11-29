# Assignment IV

# Hash Function 
- 把輸入（key）轉成數字 index 的 Function  
    把「任意資料」→「丟進一個算式」→「得到應該放到哪個抽屜（bucket）」  
    例子
    ```bash 
    index = key % m
    ```
    我作業使用的
    ```bash 
    index = (31 * key + 7) % m
    ```
# 測試資料
    - 整數 Key：21–30、51–60
    - 字串 Key：cat, dog, bat, cow, ant, owl, bee, hen, pig, fox
    - 測試 Table Size (m)：10、11、37

# 測試結果
    1. 整數 Hash 分布        
- m = 10
    ```bash
    Bucket 0: 23 53
    Bucket 1: 24 54
    Bucket 2: 25 55
    Bucket 3: 26 56
    Bucket 4: 27 57
    Bucket 5: 28 58
    Bucket 6: 29 59
    Bucket 7: 30 60
    Bucket 8: 21 51
    Bucket 9: 22 52
    ```
- m = 11
    ```bash
    Bucket 0: 53
    Bucket 1: 25 58
    Bucket 2: 30 52
    Bucket 3: 24 57
    Bucket 4: 29 51
    Bucket 5: 23 56
    Bucket 6: 28
    Bucket 7: 22 55
    Bucket 8: 27 60
    Bucket 9: 21 54
    Bucket 10: 26 59
    ```

```bash 
```
# 結果分析 
    - 
# Git Workflow

## C
- 執行程式：不可以直接按run，會只編譯 main.cpp 檔 -> linker 找不到 hashInt、hashString -> error，要先切換至正確的資料夾
    ```bash 
    cd "/Users/linyuxin/Data Structures/Assignment_IV/C"
    ```

- 查看結果
    ```bash 
    "./output/main"
    ```
    ```bash 
    ```

## CXX
- hash_fn.hpp：宣告
    
- hash_fn.cpp：計算
    * int hashInt(int key, int m) {}  
        定義函式 hashInt（m 是 hash table 大小）
    * return (31 * key + 7) % m;
        算 31 * key + 7，再對 m 取餘數 %
    * 例子
        1. 整數：key = 21, m = 11  
            31 * 21 + 7 = 651 + 7 = 658  
            658 % 11 = **9**  
        2. 字串："cat", m = 10   
            假設 ASCII 值： 'c' = 99, 'a' = 97, 't' = 116  
            Iteration (p = 31):  
            hash = (0 * 31 + 99) % 10 = **9** 
            hash = (**9** * 31 + 97) % 10 = (279 + 97) % 10 = 376 % 10 = **6**  
            hash = (**6** * 31 + 116) % 10 = (186 + 116) % 10 = 302 % 10 = **2**  
            結果 = 2  
    * 遇見問題
        1. 負數 key  
            如果 key 是負數，C++ 中 % 的結果可能為負（例如 -1 % 11 == -1），這會產生負索引  
        gpt建議改善方法：若希望索引永遠在 0..m-1，應改成 ((value % m) + m) % m 或保證 value 非負
        2. 整數溢位
            31 * key + 7 可能溢位（超過 int 的範圍）。對一般小鍵值通常沒問題，但若 key 很大（例如 10^9）或在極端情況下極可能溢位  
        gpt建議改善方法：建議用更大整數型別（如 long long / uint64_t）或在取模前就用模運算技巧（模乘法）避免溢位

- main.cpp：主函式，用來呼叫另外兩個檔案
編譯器把 main.cpp 與 hash_fn.cpp 弄成一個可執行檔

- 執行程式：不可以直接按run，會只編譯 main.cpp 檔 -> linker 找不到 hashInt、hashString -> error，要先切換至正確的資料夾
    ```bash 
    cd "/Users/linyuxin/Data Structures/Assignment_IV/CXX"
    ```

- 查看結果
    ```bash 
    "./output/main"
    ```
    ```bash 
    ```

## Observations
- m 為質數（11, 37）時分布較均勻、碰撞較少。
- m = 10（非質數）時常見重複 pattern 和較多碰撞。
- 建議使用質數表長或更複雜的 hash 設計降低碰撞率。