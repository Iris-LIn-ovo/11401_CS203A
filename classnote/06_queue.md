# Queue (佇列)

## 1. Definition
A **Queue** is a **linear data structure** that follows the  
**FIFO principle (First In, First Out)**.

- The first element added is the first element removed.
- Elements are added at the **rear** and removed from the **front**.

---

## 2. Basic Operations
| Operation | Description |
|-----------|------------|
| enqueue(x) | Insert element `x` at the rear |
| dequeue() | Remove and return element from the front |
| front() / peek() | Return the front element without removing |
| isEmpty() | Check if queue is empty |
| isFull() | Check if queue is full (array-based) |

All basic operations run in **O(1)** time.

---

## 3. Visualization

### Queue (FIFO)
Front Rear
┌───┐ ┌───┐ ┌───┐
│ A │ │ B │ │ C │ ← enqueue(D)
├───┤ ├───┤ ├───┤
└───┘ └───┘ └───┘

Enqueue order: A → B → C → D  
Dequeue order: A → B → C → D

---

## 4. Characteristics
- Linear data structure
- FIFO access order
- Access restricted to **front** (remove) and **rear** (insert)
- No random access
- Can be **dynamic** or **fixed size**

---

## 5. Abstract Data Type (ADT): Queue

ADT Queue is
objects:
A finite ordered list of elements
functions:
Create(max_size) → Queue
IsEmpty(q) → Boolean
IsFull(q) → Boolean
Enqueue(q, item)
Dequeue(q) → element
Front(q) → element
end Queue

---

## 6. Implementation

### 6.1 Array-based Queue
- Use an array, front and rear indices
- **Circular array** often used to avoid shifting elements

**Pros**
- Simple
- Fast O(1) access

**Cons**
- Fixed size
- Needs circular indexing to avoid wasted space

---

### 6.2 Linked List-based Queue
- Each node contains `data` and `next`
- Front = head, Rear = tail

**Pros**
- Dynamic size
- No overflow until memory exhausted

**Cons**
- Extra memory for pointers
- Slightly more complex than array

---

## 7. Time & Space Complexity
| Operation | Array | Linked List |
|-----------|-------|------------|
| enqueue | O(1) | O(1) |
| dequeue | O(1) | O(1) |
| peek/front | O(1) | O(1) |

| Implementation | Space |
|----------------|-------|
| Array | O(n) |
| Linked List | O(n) |

---

## 8. Common Applications

### 8.1 Scheduling
- CPU process scheduling (FCFS)
- Printer job queues

### 8.2 BFS (Breadth-First Search)
- Queue stores nodes at each level
- Ensures level-order traversal

### 8.3 Buffering
- I/O buffers, network packet queues

### 8.4 Real-world lines
- Supermarket checkout, call centers

---

## 9. Queue vs Stack

| Feature | Queue | Stack |
|---------|-------|-------|
| Order | FIFO | LIFO |
| Insert | enqueue (rear) | push (top) |
| Remove | dequeue (front) | pop (top) |
| Use cases | BFS, scheduling, buffering | DFS, recursion, undo |

---

## 10. Advantages & Limitations

### Advantages
- Efficient O(1) operations
- Natural for sequential processing
- Works for level-order traversal and scheduling

### Limitations
- Access restricted (cannot access middle elements)
- Fixed-size arrays can overflow
- Slightly more complex with linked lists

---

## 11. Summary

| Property | Queue |
|---------|-------|
| Type | Linear data structure |
| Access | Restricted (front/rear) |
| Order | FIFO |
| Core operations | enqueue, dequeue |
| Typical use | BFS, scheduling, buffering |
