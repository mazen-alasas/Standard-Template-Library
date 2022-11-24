## **Vector** is a class that creates a dynamic array allowing insertions and deletions at the back.

First import Vector Library
```cpp
#include <vector>
```

#### Syntax 
  - 1D Vector
  ```cpp
  // vector <DataType> VectorName(VectorSize);
  vector <int> v(6);
  v = {7,1,9,5,2,4};
  ```
  - 2D Vector
  ```cpp
  vector <vector <int>> vec;
  vec = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
  ```
#### Vector Functions
  - Iterators :
    - [begin()]()   Returns an iterator to the first element in the vector
    - [end()]()   Returns an iterator to the last element in the vector
  - Capacity :
    - [size()]()   Returns the number of elements in the vector
    - [max_size()]()   Returns the maximum number of elements that the vector can hold
    - [empty()]()   return 1 if vector is empty else return 0
  - Element access :
    - [at()]()  Access element
    - [front()]()   Access first element
    - [back()]()   Access last element
  - Modifiers :
    - [assign()]()   Assign vector content
    - [push_back()]()   Add element at the end
    - [pop_back()]()   Delete last element
    - [insert()]()   Insert elements
    - [erase()]()   Erase elements
    - [swap()]()   Swap content
    - [clear()]()   Clear content
    - [emplase()]()   Construct and insert element  
