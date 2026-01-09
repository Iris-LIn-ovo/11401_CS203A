# Tree 資料結構課堂筆記（CS203A）

## 1. What is a Tree?

**Tree** is a hierarchical data structure that consists of nodes connected by edges.

### Properties

* One **root** node
* Each node (except root) has **exactly one parent**
* Nodes may have **zero or more children**
* **No cycles** (acyclic)
* **Connected graph**

👉 A tree is a **connected acyclic graph**.

---

## 2. Basic Terminology

| Term     | Description                                 |
| -------- | ------------------------------------------- |
| Node     | Basic element of a tree                     |
| Root     | Topmost node                                |
| Parent   | Node with children                          |
| Child    | Node directly below a parent                |
| Siblings | Nodes with the same parent                  |
| Leaf     | Node with no children                       |
| Degree   | Number of children a node has               |
| Level    | Distance from root (root = level 0)         |
| Height   | Longest path from node to a leaf            |
| Subtree  | A tree formed by a node and its descendants |

---

## 3. Tree vs Graph

| Property     | Tree             | Graph                   |
| ------------ | ---------------- | ----------------------- |
| Connectivity | Always connected | May be disconnected     |
| Cycles       | No               | May exist               |
| Hierarchy    | Yes (rooted)     | No inherent hierarchy   |
| Parent-child | Defined          | Not defined             |
| Paths        | Exactly one path | Multiple paths possible |

---

## 4. Types of Trees

### 4.1 General Tree

* Each node can have **any number of children**

### 4.2 Binary Tree

* Each node has **at most two children**
* Children are classified as:

  * Left child
  * Right child

### 4.3 Binary Search Tree (BST)

Property:

* Left subtree values < node value
* Right subtree values > node value

Average search time: `O(log n)`
Worst case (unbalanced): `O(n)`

### 4.4 Balanced Trees

| Type            | Rule                   | Application               |
| --------------- | ---------------------- | ------------------------- |
| AVL Tree        | Height difference ≤ 1  | Fast lookup               |
| Red-Black Tree  | Color constraints      | C++ STL map, Linux kernel |
| B-Tree / B+Tree | Multi-key, multi-level | Databases, file systems   |

---

## 5. Tree Traversal

Traversal means **visiting all nodes in a systematic order**.

### 5.1 Depth-First Traversal (DFS)

#### (1) Preorder (Root–Left–Right)

* Visit root first
* Used for **copying trees**

#### (2) Inorder (Left–Root–Right)

* Produces **sorted order in BST**

#### (3) Postorder (Left–Right–Root)

* Used for **deleting/freeing memory**

### 5.2 Breadth-First Traversal (BFS)

#### Level-order Traversal

* Visit nodes **level by level**
* Implemented using a **queue**

---

## 6. Tree Representation

### 6.1 List Representation

* Each node stores a list of its children

### 6.2 Left Child – Right Sibling Representation

Used to convert a **general tree** into a **binary tree**.

Rules:

* First child → left child
* Next sibling → right child

This allows nodes with **degree > 2** to be represented as a binary tree.

### 6.3 Representation as a Degree-Two Tree

* Apply left-child right-sibling transformation
* The resulting structure is a binary tree

---

## 7. Handling Nodes with Degree > 2

When a node has more than two children:

1. Keep the **first child** as the left child
2. Connect remaining children using **right sibling pointers**

This avoids losing any children after rotation.

---

## 8. Tree Traversal vs Graph Traversal

| Traversal      | Tree                       | Graph              |
| -------------- | -------------------------- | ------------------ |
| DFS            | Preorder/Inorder/Postorder | DFS (general)      |
| BFS            | Level-order                | BFS (general)      |
| Need visited[] | No                         | Yes (avoid cycles) |

Graph traversal = Tree traversal + visited[]

---

## 9. Applications of Trees

* File systems (directory structure)
* Databases (B+Tree indexing)
* Expression trees (parsing)
* Compiler design
* Search and sorting
* Artificial Intelligence (game trees)

---

## 10. Key Takeaways

* Tree = connected, acyclic, hierarchical structure
* Binary trees limit nodes to degree ≤ 2
* Traversal order matters and serves different purposes
* General trees can be converted to binary trees
* Balanced trees ensure efficient operations

---

📌 **End of Tree Notes**
