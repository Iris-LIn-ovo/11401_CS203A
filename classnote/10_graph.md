# Graph & Traversal (DFS / BFS)

## 1. Definition of Graph
A **graph** is a collection of **vertices (nodes)** and **edges (connections)** that represent relationships between entities.  

- **Vertices (V)**: the points or nodes  
- **Edges (E)**: connections between vertices  
- Graph can be **directed** or **undirected**, **weighted** or **unweighted**, **cyclic** or **acyclic**.  

**Notation:**  
# Graph & Traversal (DFS / BFS)

## 1. Definition of Graph
A **graph** is a collection of **vertices (nodes)** and **edges (connections)** that represent relationships between entities.  

- **Vertices (V)**: the points or nodes  
- **Edges (E)**: connections between vertices  
- Graph can be **directed** or **undirected**, **weighted** or **unweighted**, **cyclic** or **acyclic**.  

**Notation:**  
# Graph & Traversal (DFS / BFS)

## 1. Definition of Graph
A **graph** is a collection of **vertices (nodes)** and **edges (connections)** that represent relationships between entities.  

- **Vertices (V)**: the points or nodes  
- **Edges (E)**: connections between vertices  
- Graph can be **directed** or **undirected**, **weighted** or **unweighted**, **cyclic** or **acyclic**.  

**Notation:**  
G = (V, E)  

---

## 2. Graph Types

| Type | Description | Example |  
|------|------------|--------|  
| Undirected | Edges have no direction | Friendship network |  
| Directed (Digraph) | Edges have direction | Instagram following |  
| Weighted | Edges have a cost/value | Google Maps distances |  
| Unweighted | All edges equal | Board game map |  
| Cyclic | Contains loops | City ring road |  
| Acyclic | No loops | Family tree |  
| Connected | Every node reachable | Road network |  
| Disconnected | Some nodes isolated | Islands without bridges |  

---  

## 3. Graph Representations

### 3.1 Adjacency Matrix
- **V × V** matrix  
- `matrix[u][v] = 1` if edge exists from `u → v`  
- Works well for **dense graphs**  

**Pros**
- O(1) edge lookup
- Easy to implement
- Can store weights naturally

**Cons**
- O(V²) space
- Slow to iterate neighbors (O(V))
- Hard to dynamically resize

---

### 3.2 Adjacency List
- Each vertex stores **list of neighbors**  
- Works well for **sparse graphs**  

**Pros**
- O(V + E) space
- Efficient neighbor traversal: O(deg(v))
- BFS/DFS O(V + E)
- Easy to insert/delete edges: O(1)

**Cons**
- Edge existence check: O(deg(v))
- Slightly more complex than matrix

---

## 4. Graph Traversal
Traversal = systematically visiting all nodes

### 4.1 DFS (Depth-First Search)
- Explores as far as possible along a branch before backtracking
- Implement using **stack** (or recursion)
- Useful for: connected components, cycle detection, topological sort

**Algorithm (pseudo)**
DFS(node v):
mark v as visited
for each neighbor u of v:
if u not visited:
DFS(u)

**Time Complexity:** O(V + E)  
**Space Complexity:** O(V) (for visited + recursion stack)

---

### 4.2 BFS (Breadth-First Search)
- Explores all neighbors at current depth before moving to next level
- Implement using **queue**
- Useful for: shortest path in unweighted graph, level-order traversal

**Algorithm (pseudo)**
