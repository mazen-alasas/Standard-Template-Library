# **Vector** is a class that creates a dynamic array allowing insertions and deletions at the back.

### First import Vector Library
```cpp
#include <vector>
```

### Syntax 
  - #### 1d Vector
    ```cpp
    // vector <DataType> VectorName(VectorSize);
    vector <int> v(6);
    v = {7,1,9,5,2,4};
    ```
  - ### 2d Vector
    ```cpp
    vector <vector <int>> vec;
    vec = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    ```
  
### Vector Functions
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

### Initialize a vector with user input
  ```cpp
  vector <int> v1(5);
  for(int i = 0; i < 5; i++)
      cin >> v1[i];
  // or
  int a;
  vector <int> v2;
  for(int i = 0; i < 5; i++){
      cin >> a;
      v2.push_back(a);
  }
  // or
  int b;
  vector <int> v3;
  while(cin >> b)
     v3.push_back(b);
  ```
### Print elements of Vector
  - #### 1d Vector
    ```cpp
    vector <int> v4 = { 10, 20, 30, 40, 50, 60 };
    for(int i = 0; i < 5; i++)
        cout << v4[i] << ' ';
    // or
    for(auto element : v4)
        cout << element << ' ';
    ```
    output : 
    ```
    10 20 30 40 50 60 
    10 20 30 40 50 60 
    ```
  - #### 2d Vector
    ```cpp
    vector <vector<int>> v { {1, 2},{4, 5, 6},{7, 8, 9, 10} };
    for(int i = 0; i < v.size(); i++) {
      for(int j = 0; j < v[i].size(); j++)
        cout << v[i][j] << " ";
      cout << endl;
    }
     ```
    output : 
    ```
    1 2
    4 5 6
    7 8 9 10
    ```
### Vector Algorithms
  - #### Swap two vector
    ```cpp
    vector <int> v1(4,3), v2(7,2); /// v1 = {3,3,3,3}
                                   /// v2 = {2,2,2,2,2,2,2}
    swap(v1,v2);
    cout << "vector 1 : ";
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << ' ';
    cout << "vector 2 : ";
    for(int i = 0; i < v2.size(); i++)
        cout << v2[i] << ' ';
    ```
    output : 
    ```
    vector 1 : 2 2 2 2 2 2 2
    vector 2 : 3 3 3 3
    ```
  - #### Sort
    ```cpp
    vector <int> v{1, 5, 8, 9, 6, 7, 3, 0};
    sort(v.begin(),v.end());
    for(auto element : v)
        cout << element << ' ';
    ```
    output : 
    ```
    0 1 3 5 6 7 8 9
    ```    
  - #### Reverse
    ```cpp
    reverse(v.begin(), v.end());
    for(auto element : v)
        cout << element << ' ';
    ```
    output : 
    ```
    9 8 7 6 5 3 1 0
    ```
  - #### Max & Min element
    ```cpp
    cout << *min_element(v.begin(),v.end());
    cout << *max_element(v.begin(),v.end()); 
    ```
    output : 
    ```
    1
    9
    ```
### The time complexity for doing various operations on vectors is :
  - Random access – constant $O(1)$
  - Insertion or removal of elements at the end – constant $O(1)$
  - Insertion or removal of elements – linear in the distance to the end of the vector $O(N)$
  - Knowing the size – constant $O(1)$
  - Resizing the vector- Linear $O(N)$

