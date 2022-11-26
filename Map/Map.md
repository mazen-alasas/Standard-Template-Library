# **Map** is an associate container for storing unique key-value pairs, each key is associated with only one value(one to one mapping).

### First include Map Library
```cpp
#include <map>
```

### Syntax 
  ```cpp
  // map <KeyType,ValueType> mapName;
  map <int, string> m;
  ```
  
### Map Functions
  - Iterators :
    - [begin()](https://www.javatpoint.com/post/cpp-map-begin-function) Returns an iterator to the first element of the map
    - [end()](https://www.javatpoint.com/post/cpp-map-end-function) Return an iterator which is next to the last entry in the map
  - Capacity :
    - [size()](https://www.javatpoint.com/post/cpp-map-size-function) Returns the number of elements in the map
    - [max_size()](https://www.geeksforgeeks.org/map-max_size-in-c-stl/) Returns the maximum number of elements that the map can hold
    - [empty()](https://www.geeksforgeeks.org/mapempty-c-stl/) Returns 1 if map is empty
  - Element Access :
    - [at()](https://www.javatpoint.com/post/cpp-map-at-function) Retrieve the element with given key
  - Modifiers :
    - [insert()](https://www.javatpoint.com/post/cpp-map-insert-function) Insert element
    - [erase()](https://www.geeksforgeeks.org/map-erase-function-in-c-stl/) Erase element
    - [swap()](https://www.javatpoint.com/post/cpp-map-swap-function) Swap content
    - [clear()](https://www.geeksforgeeks.org/mapclear-c-stl/) Delete all the elements of the map
    - [emplase()](https://www.javatpoint.com/post/cpp-map-emplace-function) Construct and insert the new elements into the map  
  - Operations :
    - [find()](https://www.geeksforgeeks.org/map-find-function-in-c-stl/) Search for an element with given Key
    - [count()](https://www.geeksforgeeks.org/map-count-function-in-c-stl/) Returns 1 if the element with given Key is present in the map






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
  set<int>s;
  for(int i=0;i<5;i++)
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
### Set Algorithms
  - #### Max & Min element
    ```cpp
    // it's already sorted ( ascending order )
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
### Properties:
  - **Storing order** – The set stores the elements in sorted order.
  - **Values Characteristics** – All the elements in a set have unique values.
  - **Search Technique** – Sets follow the Binary search tree implementation.
  - **Arranging order** – The values in a set are **unindexed**.
  - Insertion of Elements $O(log N)$
  - Deletion of Elements $O(log N)$
