# **List** is a container that supports constant time insertion and removal of elements from anywhere in the container

### First import Set Library
```cpp
#include <list>
```

### Syntax 
  ```cpp
  // list <DataType> listName(listSize);
  list <int> l(4);
  ```
  
### List Functions :
  - Iterators :
    - [begin()](https://en.cppreference.com/w/cpp/container/list/begin) Returns an iterator to the beginning
    - [end()](https://en.cppreference.com/w/cpp/container/list/end) Returns an iterator to the end
  - Capacity :
    - [size()](https://www.javatpoint.com/post/cpp-list-max_size-function) Returns the number of elements
    - [max_size()](https://www.geeksforgeeks.org/set-max_size-function-in-c-stl/) Returns the maximum possible number of elements that the list can hold
    - [empty()](https://www.javatpoint.com/post/cpp-list-empty-function) return 1 if list is empty else return 0
  - Modifiers :
    - [insert()](https://en.cppreference.com/w/cpp/container/list/insert) Insert elements
    - [emplase()](https://www.geeksforgeeks.org/list-emplace-function-in-c-stl/) Construct and insert element  
    - [push_back()](https://www.geeksforgeeks.org/list-push_back-function-in-c-stl/) Add a new element at the end
    - [pop_back()](https://www.geeksforgeeks.org/list-pop_back-function-in-c-stl/) Delete the last element
    - [push_front()](https://www.geeksforgeeks.org/list-push_front-function-in-c-stl/) Add a new element to the front
    - [pop_front()](https://www.geeksforgeeks.org/list-pop_front-function-in-c-stl/) Delete the first element
    - [resize()](https://www.javatpoint.com/post/cpp-list-resize-function) It changes the size of the list
    - [swap()](https://www.geeksforgeeks.org/listswap-c-stl/) Swap contents
    - [erase()](https://en.cppreference.com/w/cpp/container/list/erase) Erase single element by given iterator
    - [remove()](https://www.geeksforgeeks.org/list-remove-function-in-c-stl/) Removes all the elements from the list, which are equal to given element
    - [clear()](https://www.geeksforgeeks.org/listclear-c-stl/) Clears the contents



  - Operations :
    - [find()](https://www.geeksforgeeks.org/multiset-count-function-in-c-stl/) Search for an element with given element
    - [count()](https://cplusplus.com/reference/set/set/count/) Gets the number of elements matching with given element

### Initialize a List
  ```cpp
  list <int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // or
  list <int> l2(4);
  l.push_back(4);
  l.push_front(1);
  // or
  list<int>l3;
  l3.assign({5,4,8,7});
  // or
  int a;
  list <int> l4;;
  for(int i = 0; i < 5; i++){
      cin >> a;
      l4.push_back(a);
  }
  ```
### Print elements of List
  ```cpp
  list <int> l = {4, 5, 8, 6, 3, 1};
  for(auto element : l)
      cout << element << ' ';
  // or
  for(auto it = l.begin(); it != l.end(); it++)
        cout << *it << ' ';
  ```
  output : 
  ```
  4 5 8 6 3 1
  4 5 8 6 3 1
  ```
### Set uses :
  - #### Merging (Sorted)
    ```cpp
    list <int> l1 = {0, 2, 4}, l2 = {1, 3, 5};
    l1.merge(l2);
    for(auto element : l1)
        cout << element << ' ';
    ```
    output : 
    ```
    0 1 2 3 4 5
    ```
  - #### Merging two lists as they are
    ```cpp
    list <int> l3 = {0, 2, 4}, l4 = {1, 3, 5};
    l3.splice(l3.begin(), l4);
    for(auto element : l3)
        cout << element << ' ';

    list <int> l5 = {0, 2, 4}, l6 = {1, 3, 5};
    l5.splice(l5.end(), l6);
    for(auto element : l5)
        cout << element << ' ';
    ```
    output : 
    ```
    1 3 5 0 2 4
    0 2 4 1 3 5
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
  - [forward_list](https://cplusplus.com/reference/forward_list/forward_list/)
