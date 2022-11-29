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
