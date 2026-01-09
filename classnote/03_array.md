# Array

## basic concepts

### define
A collection of elements stored in contiguous memory locations, where each element can be accessed directly using an index.

- Static array
- Random Access(Time Complexity Terminology is O(1))
- Same data type
- Efficient for storing and retrieving data by position

## Dimension
 1. 1D Array  
    [index  0   1   2   3   4 ]  
    [value  10  20  30  40  50]  
 2. 2D Array (row * column)   
    [   0  1  2  3 ]<--row  
    [0  10 20 30 40]  
    [1  20 30 40 50]  
    [2  30 40 50 60]  
    column/plane  
 3. 3D Array (row * column * block)   

 ## Array ADT
 - Objects
    * a set of pairs <index , value>
    * index's dimensions can be one or more.
    * item
 - Functions
    1. Creat (j , list)
    2. Retrieve (A , i)
    3. Store (A , i , x)
    