# **Dueue** is a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
Elements are inserted at the back (end) and are deleted from the front

### First import Queue Library
```cpp
#include <queue>
```

### Syntax 
  ```cpp
  // set <DataType> setName;
  set <int> s = {7, 1, 9, 5, 2, 4};
  ```
  
### Set Functions :
  - Iterators :
    - [begin()](https://www.javatpoint.com/cpp-set-begin-function) Returns an iterator to the first element in the set
    - [end()](https://www.javatpoint.com/cpp-set-end-function) Returns an iterator to the last element in the set
  - Capacity :
    - [size()](https://www.geeksforgeeks.org/setsize-c-stl/) Returns the number of elements in the set
    - [max_size()](https://www.geeksforgeeks.org/set-max_size-function-in-c-stl/) Returns the maximum number of elements that the set can hold
    - [empty()](https://www.geeksforgeeks.org/setempty-c-stl/) return 1 if set is empty else return 0
  - Modifiers :
    - [insert()](https://cplusplus.com/reference/set/set/insert/)   Insert elements
    - [erase()](https://cplusplus.com/reference/set/set/erase/)   Erase elements
    - [swap()](https://www.javatpoint.com/cpp-set-swap-function)   Swap content
    - [clear()](https://www.geeksforgeeks.org/setclear-c-stl/)   Clear content
    - [emplase()](https://www.geeksforgeeks.org/setemplace-c-stl/)   Construct and insert element  
  - Operations :
    - [find()](https://www.geeksforgeeks.org/multiset-count-function-in-c-stl/) Search for an element with given element
    - [count()](https://cplusplus.com/reference/set/set/count/) Gets the number of elements matching with given element

### Initialize a Set
  ```cpp
  set <int> s1;
  s1.insert(5);
  s1.insert(3);
  s1.insert(2);
  s1.insert(1);
  // or
  int a;
  set <int> s2;
  for(int i = 0; i < 5; i++){
      cin >> a;
      s2.insert(a);
  }
  // or
  int b;
  set <int> s3;
  while(cin >> b)
     s3.insert(b);
  ```
### Print elements of Set
  ```cpp
  set <int> s;
  for(int i = 0; i < 5; i++)
      s.insert(i);

  for(auto it = s.begin(); it != s.end(); it++)
      cout << *it << ' ';
  // or
  for(auto element : s)
      cout << element << ' ';
  ```
  output : 
  ```
  0 1 2 3 4 
  0 1 2 3 4 
  ```
### Set uses :
  - #### Max & Min element
    ```cpp
    // it's already sorted ( ascending order )
    set <int> s;
    for(int i = 0; i < 5; i++)
      s.insert(i);
    cout << *s.begin();
    auto it = s.end();
    *it--;
    cout << *it;
    ```
    output : 
    ```
    0
    4
    ```
  - #### Descending order
    ```cpp
    set <int,greater<int>> s1{0, 1, 2, 3, 4};
    for(auto element : s1)
        cout << element << ' ';
    ```
    output : 
    ```
    4 3 2 1 0
    ```
### Properties :
  - **Storing order** – The set stores the elements in sorted order.
  - **Values Characteristics** – All the elements in a set have unique values.
  - **Search Technique** – Sets follow the Binary search tree implementation.
  - **Arranging order** – The values in a set are **unindexed**.
  - Insertion of Elements $O(log N)$
  - Deletion of Elements $O(log N)$
----
### Related Articles :
  - [Multiset](https://www.geeksforgeeks.org/multiset-in-cpp-stl/)



