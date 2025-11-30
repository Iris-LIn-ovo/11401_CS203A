# Assignment IV

* 包括顯示索引分佈的表格或圖表。
* 分析雜湊函式的碰撞率和均勻性。
* 確保您的程式記錄良好，並遵守提供的編碼標準。在您的README.md中包括觀察和分析。
* 解釋你的設計選擇以及它們如何最大限度地減少碰撞。
* 解釋你的方法及其對非整數鍵的有效性。
* 素數與非素數m：素數表大小通常會導致更好的分佈和更少的碰撞。
* 模式或碰撞：非主表尺寸往往會產生重複的模式，導致更多的碰撞。
* 改進：使用主表大小和精心設計的雜湊函式來增強分佈。

本專案實作並觀察兩種類型的 Hash Function：
1. **整數鍵（Integer keys）**
2. **字串鍵（String keys）**
並透過不同的 table size（m = 10, 11, 37）比較 hash 分佈、碰撞率、均勻性與設計差異。

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
    === Integer Hash (m = 10) ===
    Key     Index
    -------------------
    21      8
    22      9
    23      0
    24      1
    25      2
    26      3
    27      4
    28      5
    29      6
    30      7
    51      8
    52      9
    53      0
    54      1
    55      2
    56      3
    57      4
    58      5
    59      6
    60      7
```
- m = 11
```bash
    === Integer Hash (m = 11) ===
    Key     Index
    -------------------
    21      9
    22      7
    23      5
    24      3
    25      1
    26      10
    27      8
    28      6
    29      4
    30      2
    51      4
    52      2
    53      0
    54      9
    55      7
    56      5
    57      3
    58      1
    59      10
    60      8
```

```bash 
    === Integer Hash (m = 37) ===
    Key     Index
    -------------------
    21      29
    22      23
    23      17
    24      11
    25      5
    26      36
    27      30
    28      24
    29      18
    30      12
    51      34
    52      28
    53      22
    54      16
    55      10
    56      4
    57      35
    58      29
    59      23
    60      17
```
```bash 
    === String Hash (m = 10) ===
    Key     Index
    -------------------
    cat     2
    dog     4
    bat     1
    cow     9
    ant     3
    owl     8
    bee     0
    hen     5
    pig     0
    fox     3
```
```bash 
    === String Hash (m = 11) ===
    Key     Index
    -------------------
    cat     10
    dog     6
    bat     6
    cow     7
    ant     9
    owl     6
    bee     5
    hen     5
    pig     0
    fox     9
```
```bash 
    === String Hash (m = 37) ===
    Key     Index
    -------------------
    cat     27
    dog     3
    bat     28
    cow     20
    ant     25
    owl     23
    bee     26
    hen     29
    pig     27
    fox     18
```

# **碰撞分析**
- 整數 Hash（% m）
    1. m = 10（非質數）
    明顯出現規律性碰撞，例如 21、31、41… 都會落在相同的 bucket。
    原因：10的因數太多（2×5），容易與鍵值規律產生週期性。
    2. m = 11（質數）
    分佈比 m=10 更均勻
    3. m = 37（質數）
    分佈最均勻
    幾乎沒有碰撞（若 key 較少） 

- 字串 Hash（Polynomial Hash）
    1. m = 10（非質數）
    碰撞機率高
    10 過小，容易造成 hash % 10 的值集中
    2. m = 11（質數）
    分佈更佳、明顯平均
    3. m = 37（質數、較大）
    分佈最均勻
    字串差異能更充分反映在 hash 值上

- 表格分析
    m	Total Keys	Collisions	Max bucket load	平均每個 bucket load  
    -----------------------------------------------------------------  
    10	20	        10	        3	            2.0  
    11	20	        2	        2	            1.8  
    37	20	        0	        1	            0.54   
    （可以直觀看出 m 越大越均勻）


# 均勻性分析（Uniformity）
- m 為質數（11, 37）時分布較均勻、碰撞較少，m為非質數（10）時常見較多碰撞
- 數值越大 -> mod m 前的 hash 值變化更明顯 -> % m 的結果較分散 -> 建議使用質數表長或更複雜的 hash 設計降低碰撞率
- Polynomial Hash 在字串部分表現相當穩定

# 改進方向

# 程式碼解釋
## C
- 執行程式：不可以直接按run，會只編譯 main.cpp 檔   
-> linker 找不到 myhashInt、myhashString   
-> error，要先切換至正確的資料夾  
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
    * int myhashInt(int key, int m) {}  
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

