# **Deque (Deck)** is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.

### First import Deque Library
```cpp
#include <deque>
```

### Syntax 
    ```cpp
    // deque <DataType> dequeName;
    deque <int> d = {1,2,3,4,5};
    ```
  
### Deque Functions :
  - Iterators :
    - [begin()](https://www.javatpoint.com/post/cpp-deque-begin-function) Returns an iterator to the first element in the vector
    - [end()](https://www.javatpoint.com/post/cpp-deque-end-function) Returns an iterator to the last element in the vector
  - Capacity :
    - [size()](https://cplusplus.com/reference/deque/deque/size/) Returns the number of elements in the vector
    - [max_size()](https://www.geeksforgeeks.org/deque-max_size-function-in-c-stl/) Returns the maximum number of elements that the vector can hold
    - [resize()](https://cplusplus.com/reference/deque/deque/resize/) Change size
    - [empty()](https://cplusplus.com/reference/deque/deque/empty/) return 1 if vector is empty else return 0
  - Element access :
    - [at()](https://www.javatpoint.com/post/cpp-deque-at-function) Access element
    - [front()](https://en.cppreference.com/w/cpp/container/deque/front) Access first element
    - [back()](https://www.javatpoint.com/post/cpp-deque-back-function) Access last element
  - Modifiers :
    - [assign()](https://www.javatpoint.com/post/cpp-deque-assign-function) Assign vector content
    - [push_back()](https://cplusplus.com/reference/deque/deque/push_back/) Add element at the end
    - [pop_back()](https://www.geeksforgeeks.org/dequepop_front-dequepop_back-c-stl/) Delete last element
    - [push_front()](https://www.javatpoint.com/post/cpp-deque-push_front-function) Add element at the end
    - [pop_front()](https://cplusplus.com/reference/deque/deque/pop_front/) Delete last element
    - [insert()](https://cplusplus.com/reference/deque/deque/insert/) Insert elements
    - [erase()](https://www.javatpoint.com/post/cpp-deque-erase-function) Erase elements
    - [swap()](https://www.javatpoint.com/post/cpp-deque-swap-function) Swap content
    - [clear()](https://www.geeksforgeeks.org/dequeclear-dequeerase-c-stl/) Clear content
    - [emplase()](https://www.javatpoint.com/post/cpp-deque-emplace-function) Construct and insert element  

### Initialize a Deque
  ```cpp
  deque <int> d1 = {1,2,3,4,5};
  d1.push_back(6); 
  d1.push_front(0); 
  // or
  int a;
  deque <int> d2;
  for(int i = 0; i < 5; i++){
      cin >> a;
      d2.push_back(a);
  }
  // or
  int b;
  deque <int> d3;
  while(cin >> b)
      d3.push_back(b);
  ```
### Print elements of Deque
  ```cpp
  deque <int> d = {1,2,3,4,5};
  for(auto t = d.begin(); t != d.end(); t++)
      cout << *t << ' '; 
  // or
  for(auto element : d)
      cout << element << ' '; 
  ```
  output : 
  ```
  10 20 30 40 50 60 
  10 20 30 40 50 60 
  ```
### Vector uses :
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
### Properties :
  - Accessing Elements $O(1)$
  - Insertion or removal of elements $O(N)$
  - Insertion or removal of elements at start or end $O(1)$

