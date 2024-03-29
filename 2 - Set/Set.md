# **Set** is a container that store unique elements following a specific order

### First import Set Library
```cpp
#include <set>
```

### Syntax 
  ```cpp
  // set <DataType> setName;
  set <int> s = {7, 1, 9, 5, 2, 4};
  ```
  
### Set Functions :
| Function Name | Time Complexity | what does it do?! |
|--------------|:-----------------:|----------------------|
|[begin()](https://www.javatpoint.com/cpp-set-begin-function) | `O(1)` | Returns an iterator to the first element in the set |
|[end()](https://www.javatpoint.com/cpp-set-end-function) | `O(1)` | Returns an iterator to the last element in the set |
|[size()](https://www.geeksforgeeks.org/setsize-c-stl/) | `O(1)` | Returns the number of elements in the set |
|[max_size()](https://www.geeksforgeeks.org/set-max_size-function-in-c-stl/) | `O(1)` | Returns the maximum number of elements that the set can hold |
|[empty()](https://www.geeksforgeeks.org/setempty-c-stl/) | `O(1)` | Return 1 if set is empty else return 0 |
|[insert()](https://cplusplus.com/reference/set/set/insert/) | `O(log(n))` | Insert elements |
|[erase()](https://cplusplus.com/reference/set/set/erase/) | `O(n)` | Erase elements |
|[swap()](https://www.javatpoint.com/cpp-set-swap-function) | `O(1)` |  Swap content |
|[clear()](https://www.geeksforgeeks.org/setclear-c-stl/) | `O(n)` | Clear content |
|[emplase()](https://www.geeksforgeeks.org/setemplace-c-stl/) | `O(log(n))` |  Construct and insert element |
|[find()](https://www.geeksforgeeks.org/multiset-count-function-in-c-stl/) | `O(log(n))` | Search for an element with given element |
|[count()](https://cplusplus.com/reference/set/set/count/) | `O(log(n))` | Gets the number of elements matching with given element |

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
  - **Storing order** The set stores the elements in sorted order.
  - **Values Characteristics** All the elements in a set have unique values.
  - **Search Technique** Sets follow the Binary search tree implementation.
  - **Arranging order** The values in a set are **unindexed**.

### Use for
  - Removing duplicates
  - Ordered dynamic storage

### Do not use for
  - Simple storage
  - Direct access by index
  
### Notes
  - Sets are often implemented with binary search trees
----
### Related Articles :
  - [Multiset](https://www.geeksforgeeks.org/multiset-in-cpp-stl/)

### Cheat Sheet
![SetCheatSheet](../Images/set.png)

