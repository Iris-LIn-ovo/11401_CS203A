# Linklists

## Basic concepts
- A  number of connected items or names written or printed consecutively, typically one below the other.  
- ADT:
    1. LinkedList Create() : 建立一個空的 linked list回傳空串列（head = NULL） 
    2. Boolean IsEmpty(L) : 判斷是否為空若沒有節點，回傳 true  
    3. Integer Length(L) : 回傳長度數節點總數  
    4. Item Retrieve(L, p) :取出第 p 個節點的資料若位置 p 合法，回傳該節點的 item
    5. LinkedList Insert(L, p, x) : 在第 p 個位置插入資料 x新節點插入指定位置
    6. LinkedList Delete(L, p) : 刪除第 p 個節點移除節點、更新連結
    7. LinkedList Update(L, p, x) : 修改第 p 個節點的值替換舊值為新值
    8. Position Search(L, x) : 搜尋資料 x 的位置


## Time Complexity
操作             Linked List                       說明
Traversal        O(n)                              必須從頭或尾巴逐個節點移動，沒有索引（不像陣列）  
Search           O(n)                              需要逐個比較直到找到匹配值  
Insert at Head   O(1)                              直接改指標，不用移動其他節點  
Insert at Tail   O(n)（Singly Linked List若無尾指標） Singly 若沒有 tail pointer，得走訪到尾端  
                 O(1)（Singly Linked List若有尾指標）  
                 O(1)(Doubly Linked List)     
Insert in Middle O(n)                              必須先找到插入位置（遍歷）  
Delete at Head   O(1)                              直接改 head 指標即可  
Delete at Tail   O(n)(Singly Linked List)          Singly 無法往回找，要遍歷到倒數第二個  
                 O(1)(Doubly Linked List)     
Delete in Middle O(n)                              必須先找到該節點  
Insert/Delete    O(1)                              若已經拿到該節點的指標，就可立即操作  
Reverse List     O(n)                              需遍歷所有節點並改指標方向  


Aspect / Operation   Array   Linked List   Explanation  
Access Element       O(1)    O(n)          Array allows direct indexing; linked list needs traversal.  
Find Minimum         O(n)    O(n)          Both must scan all remaining elements/nodes.  
Swap Operation       O(1)    O(1)          In array, swap by indices; in list, swap node values.  
Traversal Between Elements O(1) O(n)       Linked list traversal requires pointer navigation.  
Overall Time Complexity (Selection Sort) O(n²) O(n²) Both involve nested traversals; linked list adds traversal overhead.  
Space Complexity     O(1)    O(1)          Both are in-place if swapping values, not nodes.  
Implementation Overhead Low  Moderate      Linked list requires pointer handling and null checks.  

## Type of Linked List 
1. Singly linked list (basic form)（單向鏈結串列）
    * 無法回頭，只能往下一個走
    * 若要刪除尾端節點，必須從頭走到倒數第二個（O(n)）
2. Doubly linked list (two-way navigation)（雙向鏈結串列）
    * 每個節點加上 prev
    * NULL <- [ prev | data | next ] <-> [ prev | data | next ] <-> [ prev | data | next ] -> NULL
    * 優點：
        - 可以從任意節點往前或往後
        - 可直接用 prev 修改指標（O(1)），singly linked list要找到前一個節點
        - 容易反轉，直接交換每個節點的 prev＆next （O(n)）
        - 如有tail pointer ，可插入或刪除尾端點（O(1)）
    * 缺點：
        - 佔太多memory
        - 操作複雜
3. Circular linked list (wrap-around structure)（環狀鏈結串列）
    * 最後一個不是指向NULL，而是指回開頭，形成一個「環」
    * [1] -> [2] -> [3] -> [4] --+
        ^                        |
        +------------------------+
    * 優點：
        - 可循環走訪，不必從頭
        - 方便實作 Queue / Buffer
        - 任何節點都可作為起點
    * 缺點：
        - 易陷入無限loop
        - 實作複雜，需維持環的完整性
    *   Singly Circular Linked List → 最後節點的 next 指回 head  
	    Doubly Circular Linked List → 同時有 prev 與 next，首尾相接

