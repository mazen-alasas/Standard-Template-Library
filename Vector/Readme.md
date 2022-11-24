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
  - begin()  Returns an iterator pointing to the first element in the vector
  - end()  Returns an iterator pointing to the theoretical element that follows the last element in the vector
  - rbegin()  Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
  - rend()  Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
  - cbegin() – Returns a constant iterator pointing to the first element in the vector.
  - cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
  - crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
  - crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
