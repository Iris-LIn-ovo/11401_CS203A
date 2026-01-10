# Hash Table（雜湊表）

## 1. Definition（定義）
Hash Table 是一種用來儲存 **key–value pairs** 的資料結構。  
它透過 **hash function** 將 key 轉換成陣列索引（index），使得資料的插入、刪除與查找在平均情況下可達 **O(1)**。

---

## 2. Core Concept（核心概念）

Key ──hash function──▶ Index ──▶ Bucket ──▶ Value  

- **Key**：用來定位資料的識別值
- **Value**：實際儲存的資料
- **Hash Function**：將 key 映射成 index
- **Bucket**：陣列中的一個位置

---

## 3. Visualization（視覺化）

### Separate Chaining Hash Table

plaintext
Index
0  →  NULL
1  →  (k1,v1) → (k5,v5) → NULL
2  →  (k2,v2) → NULL
3  →  NULL
4  →  (k3,v3) → (k7,v7) → NULL

底層使用 Array
每個 bucket 內使用 Linked List
用來處理 collision


## 4. Characteristics（特性）

- Index-based structure  
- Key 必須唯一（unique）  
- Value 可重複  
- 無排序（unordered）  
- 平均查找時間為 O(1)  
- Hybrid 結構：Array + Linked List  

## 5. Hash Function（雜湊函數）
特性要求
Deterministic：同一 key → 同一 index
Uniform：key 均勻分布
Efficient：計算快速
常見方法
Method	Description
Division	h(k) = k mod m
Multiplication	floor(m * (k*A mod 1))
Folding	將 key 分段相加
String Hashing	Polynomial rolling hash

## 6. Collision（碰撞）
定義
當兩個不同的 key 經過 hash function 得到相同 index 時，稱為 collision。

## 7. Collision Handling Methods
1. Separate Chaining
每個 bucket 存一條 linked list
最常用、最穩定
2. Open Addressing
所有資料存在 array 中
發生 collision 時進行 probing
Linear Probing
Quadratic Probing
Double Hashing

## 8. Clustering  
- Primary Clustering
發生於 Linear Probing
連續填滿的區段越來越長
Secondary Clustering
相同 hash key 會走相同探測路徑
非連續但模式一致

## 9. Load Factor（α）
α = number of elements / table size  
衡量 hash table 擁擠程度  
常見 threshold：0.75  
超過需 resize 並 rehash  

## 10. Time & Space Complexity
Average Case
Operation	Time
Search	O(1)
Insert	O(1)
Delete	O(1)
Worst Case
Operation	Time
Search	O(n)
Insert	O(n)
Delete	O(n)
Space
O(n + m)

## 11. ADT: HashTable (Separate Chaining)
objects:
  A set of <key, value> pairs

functions:
  Create(m)
  IsEmpty(h)
  Insert(h, key, value)
  Retrieve(h, key)
  Delete(h, key)
## 12. Pros & Cons
Pros  
平均 O(1) 查找  
適合 Dictionary / Map  
實作直觀  
Cons 
無排序  
效能依賴 hash function  
Worst case 為 O(n)  
Resize 成本高  

13. Applications（應用）
Dictionary / Map  
Two Sum  
Cache（DNS, Browser） 
Database Index  
Symbol Table  

14. Summary 
Structure	Search	Ordered
Array	O(n)	No
Linked List	O(n)	No
BST (Balanced)	O(log n)	Yes
Hash Table	O(1) avg	No