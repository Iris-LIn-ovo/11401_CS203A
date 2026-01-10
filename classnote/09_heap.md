# Heap（堆積）

## 1. Definition（定義）
Heap 是一種 **Complete Binary Tree（二元完全樹）**，  
並且滿足 **Heap-Order Property（堆積順序性）**，常用來實作 **Priority Queue（優先佇列）**。

---

## 2. Structure Properties（結構特性）

- Heap 是 **Complete Binary Tree**
- 除了最後一層以外，每一層都是滿的
- 最後一層的節點 **由左至右填滿**
- 因此 Heap 可以 **有效率地用 Array 儲存**

---

## 3. Heap Order Property（順序性）

### Max Heap
- Parent ≥ Children
- **最大值一定在 root**
- 常用於「最大優先權先處理」

     50  
    /  \  
  30    40  
 /  \  
10  20  

Array 表示：[50, 30, 40, 10, 20]  

---

### Min Heap
- Parent ≤ Children
- **最小值一定在 root**
- 常用於「最小成本 / 最短時間」

     10  
    /  \  
  15    30  
 /  \  
40  50  
 
Array 表示：[10, 15, 30, 40, 50]  

---

## 4. Array Representation（陣列表示法）

- Root 在 index `0`
- 對於 index `i`：
  - Left child → `2i + 1`
  - Right child → `2i + 2`
  - Parent → `(i - 1) / 2`

✅ 不需要 pointer  
✅ 沒有空洞（因為是 complete tree）

---

## 5. Basic Operations（基本操作）

### Insert（插入）
1. 新元素放在 array 最後
2. **Bubble Up / Heapify Up**
3. 與 parent 比較並交換，直到滿足 heap order

⏱ Time Complexity：`O(log n)`

---

### Delete Root（刪除最大或最小值）

1. Root 與最後一個元素交換
2. 刪除最後一個元素
3. **Bubble Down / Heapify Down**
4. 與較大的（或較小的）child 交換

⏱ Time Complexity：`O(log n)`

---

## 6. Time & Space Complexity

| Operation | Time |
|---------|------|
| Insert | O(log n) |
| Delete | O(log n) |
| Peek (root) | O(1) |
| Search (non-root) | O(n) |

- Space：`O(n)`
- 沒有排序性（只能保證 root）

---

## 7. Heap vs BST

| Feature | Heap | BST |
|------|------|-----|
| Tree shape | Complete | Arbitrary |
| Ordering | Partial | Full |
| Root value | Max / Min | Not guaranteed |
| Search | O(n) | O(log n) (balanced) |
| Priority queue | ⭐⭐⭐ | ❌ |

---

## 8. Applications（應用）

- Priority Queue（優先佇列）
- CPU / Process Scheduling
- Dijkstra / Prim Algorithm
- Heapsort（時間複雜度 O(n log n)）
- Event simulation

---

## 9. Limitations（限制）

- 無法快速搜尋任意元素
- 只適合「取最大 / 最小」
- 不適合範圍查詢或排序輸出

---

## 10. Summary（重點整理）

- Heap = Complete Binary Tree + Heap Order
- Root 永遠是最高（或最低）優先權
- Array 儲存最有效率
- 插入 / 刪除都是 `O(log n)`
- 是 **Priority Queue 的最佳實作**


