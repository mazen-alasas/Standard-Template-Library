# **Dueue** is a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front

### First import Queue Library
```cpp
#include <queue>
```

### Syntax 
  ```cpp
  // queue <DataType> queueName;
  queue <int> q = {7, 1, 9, 5, 2, 4};
  ```
  
### Queue Functions : fix it
| Function Name | Time Complexity | what does it do?! |
|--------------|:-----------------:|----------------------|
|[front()](https://cplusplus.com/reference/queue/queue/front/) | `O(1)` | Access the first element|
|[back()](https://www.geeksforgeeks.org/queuefront-queueback-c-stl/) | `O(1)` | Access the last element|
|[size()](https://en.cppreference.com/w/cpp/container/queue/size) | `O(1)` | Returns the number of elements|
|[empty()](https://cplusplus.com/reference/queue/queue/empty/) | `O(1)` | Return 1 if set is empty else return 0|
|[push()](https://www.javatpoint.com/cpp-queue-push-function) | `O(1)` | Inserts element at the end|
|[pop()](https://cplusplus.com/reference/queue/queue/pop/) | `O(1)` | Removes the first element|
|[swap()](https://www.geeksforgeeks.org/queue-swap-cpp-stl/) | `O(1)` | Swap content   |
|[emplase()](https://www.javatpoint.com/cpp-queue-emplace-function) | `O(1)` | Construct and insert element|

### Initialize a Queue
  ```cpp
  queue <int> q1;    >>> FIFO
  q1.push(5);
  q1.push(4);
  q1.push(3);
  // or
  int a;
  queue <int> q2;
  for(int i = 0; i < 5; i++){
      cin >> a;
      d2.push(a);
  }
  // or
  int b;
  queue <int> q3;
  while(cin >> b)
      q3.push(b);
  ```
### Print elements of Queue
  ```cpp
  while (!q1.empty()) {
      cout << q1.front() << ' ';
      q1.pop();
  }
  ```
output :
  ```
  5 4 3
  ```
### Properties :
  - Insertion or removal of elements $O(1)$
  
### Related Articles :
  - [Priority Queue](https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/)
