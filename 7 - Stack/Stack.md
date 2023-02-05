# **Stack** is a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.

### First import Stack Library
```cpp
#include <stack> s;
```

### Syntax 
  ```cpp
  // stack <DataType> StackName;
  stack <int> s;
  ```
  
### Stack Functions :
| Function Name | Time Complexity | what does it do?! |
|--------------|:-----------------:|----------------------|
| [push( )](https://en.cppreference.com/w/cpp/container/stack/push) |`O(1)` | Insert element at the top of stack |
| [pop( )](https://www.javatpoint.com/cpp-stack-pop-function) | `O(1)` | Removes element from top of stack|
| [top( )](https://www.geeksforgeeks.org/stack-top-c-stl/) |  `O(1)` | Access the top element of stack|
| [empty( )](https://www.javatpoint.com/cpp-stack-empty-function) |`O(1)`| Checks if the stack is empty or not|
| [size( )](https://en.cppreference.com/w/cpp/container/stack/size) |`O(1)`| Returns the size of stack|
| [emplace( )](https://www.geeksforgeeks.org/stack-emplace-in-c-stl/) | `O(1)` | Construct and insert element |
| [swap( )](https://en.cppreference.com/w/cpp/container/stack/swap) | `O(1)` | Swap contents |
### Initialize a Stack
  ```cpp
  stack <int> s1;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  // or
  int a;
  stack <int> s2;;
  for(int i = 0; i < 5; i++){
      cin >> a;
      s2.push(a);
  }
  ```
### Print elements of Stack
  ```cpp
  while (!s1.empty()) {
      cout << s1.top() << ' ';
      s1.pop();
  }
  ```
  output : 
  ```
  4 3 2 1
  ```
### Stack uses :
  - #### BLABLABLAA
    ```cpp
    
    ```
    output : 
    ```
    
    ```
    ```
