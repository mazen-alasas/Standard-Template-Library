## **Vector** is a class that creates a dynamic array allowing insertions and deletions at the back.

#### First import Vector Library
```cpp
#include <vector>
```

#### Syntax 
  - 1D Vector
  ```cpp
  // vector <DataType> VectorName(VectorSize);
  take vector <int> v(6);
  v = {7,1,9,5,2,4};
  ```
  - 2D Vector
  ```cpp
  vector <vector <int>> vec;
  vec = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
  ```
  
#### Vector Functions
  - Iterators :
    - [begin()](https://www.geeksforgeeks.org/vectorbegin-vectorend-c-stl/)   Returns an iterator to the first element in the vector
    - [end()](https://www.geeksforgeeks.org/vectorbegin-vectorend-c-stl/)   Returns an iterator to the last element in the vector
  - Capacity :
    - [size()](https://cplusplus.com/reference/vector/vector/size/)   Returns the number of elements in the vector
    - [max_size()](https://www.geeksforgeeks.org/vector-max_size-function-in-c-stl/)   Returns the maximum number of elements that the vector can hold
    - [empty()](https://cplusplus.com/reference/vector/vector/empty/)   return 1 if vector is empty else return 0
  - Element access :
    - [at()](https://www.javatpoint.com/cpp-vector-at-function)  Access element
    - [front()](https://www.javatpoint.com/cpp-vector-front-function)   Access first element
    - [back()](https://www.javatpoint.com/cpp-vector-back-function)   Access last element
  - Modifiers :
    - [assign()](https://www.geeksforgeeks.org/vector-assign-in-c-stl/)   Assign vector content
    - [push_back()](https://cplusplus.com/reference/vector/vector/push_back/)   Add element at the end
    - [pop_back()](https://www.javatpoint.com/cpp-vector-pop-back-function)   Delete last element
    - [insert()](https://www.javatpoint.com/cpp-vector-insert-function)   Insert elements
    - [erase()](https://cplusplus.com/reference/vector/vector/erase/)   Erase elements
    - [swap()](https://www.geeksforgeeks.org/vectorat-vectorswap-c-stl/)   Swap content
    - [clear()](https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/)   Clear content
    - [emplase()](https://cplusplus.com/reference/vector/vector/emplace/)   Construct and insert element  

#### Initialize A Vector With User Input
  ```cpp
  vector <int> v(5);
  for(int i = 0; i < 5; i++)
      cin >> v[i];
  // or
  vector <int> v2;
  int a;
  for(int i = 0; i < 5; i++){
      cin >> a;
      v1.push_back(a);
  }
  // or
  int b;
  vector <int> v;
  while(cin >> b)
     v.push_back(b);
  ```
  
  
  
  
  
  
  



