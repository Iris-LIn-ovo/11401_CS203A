# Stack (堆疊)

## 1. Definition
A **Stack** is a **linear data structure** that follows the  
**LIFO principle (Last In, First Out)**.

- The last element pushed into the stack is the first one popped out.
- Access is restricted to **one end only**, called the **top**.

---

## 2. Basic Operations
| Operation | Description |
|---------|------------|
| push(x) | Insert element `x` onto the top |
| pop() | Remove and return the top element |
| peek() / top() | Return the top element without removing |
| isEmpty() | Check if stack is empty |
| isFull() | Check if stack is full (array-based) |

All basic operations run in **O(1)** time.  

---

## 3. Visualization

### Stack (LIFO)
Top  
┌───┐  
│ C │ ← pop()  
├───┤  
│ B │  
├───┤  
│ A │  
└───┘  
Bottom  

Push order: A → B → C    
Pop order: C → B → A  

---

## 4. Characteristics
- Linear data structure
- LIFO access order
- No random access (cannot access middle elements directly)
- Only top element is accessible

---

## 5. Abstract Data Type (ADT): Stack

ADT Stack is
objects:  
A finite ordered list of elements
functions:  
Create() → Stack  
IsEmpty(s) → Boolean  
IsFull(s) → Boolean  
Push(s, item)  
Pop(s) → element  
Top(s) → element  
end Stack  

---  

## 6. Implementation

### 6.1 Array-based Stack
- Use an array and an integer `top`
- `top = -1` means empty stack

**Pros**
- Simple
- Fast access

**Cons**
- Fixed size
- Stack overflow possible

---

### 6.2 Linked List-based Stack
- Each node contains `data` and `next`
- Top = head of the linked list

**Pros**
- Dynamic size
- No overflow (until memory exhausted)

**Cons**
- Extra memory for pointers

---

## 7. Time & Space Complexity
| Operation | Time |
|--------|------|
| push | O(1) |
| pop | O(1) |
| peek | O(1) |

| Implementation | Space |
|--------------|-------|
| Array | O(n) |
| Linked List | O(n) |

---

## 8. Common Applications

### 8.1 Function Call Stack
- Stores function calls, parameters, local variables
- Supports recursion

### 8.2 Expression Evaluation
- Infix → Postfix conversion
- Postfix expression evaluation

### 8.3 Parentheses Matching
- Checking balanced parentheses: `()`, `{}`, `[]`

### 8.4 Undo / Redo
- Text editors
- Browsers (back/forward)

### 8.5 DFS (Depth-First Search)
- Uses **stack** (explicit or recursion)
- Records path and backtracking information

---

## 9. Stack vs Queue

| Feature | Stack | Queue |
|------|------|------|
| Order | LIFO | FIFO |
| Insert | push (top) | enqueue (rear) |
| Remove | pop (top) | dequeue (front) |
| Used for | DFS, recursion | BFS, scheduling |

---

## 10. Advantages & Limitations

### Advantages
- Simple implementation
- Efficient O(1) operations
- Natural for recursive algorithms

### Limitations
- Limited access (top only)
- Not suitable for searching
- Overflow risk (array implementation)

---

## 11. Summary

| Property | Stack |
|-------|------|
| Type | Linear data structure |
| Access | Restricted (top only) |
| Order | LIFO |
| Core operations | push, pop |
| Typical use | DFS, recursion, expression evaluation |

