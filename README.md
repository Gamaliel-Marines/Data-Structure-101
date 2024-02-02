# Data Structure & Algorithms

## WHAT IS DATA STRUCTURE?

> Data structure is a collection of data, an organized collection. It makes the search and usage of that data much easier and faster.
> 

We can organize the data as following:

- arrays
- lists
- graphs
- stacks
- queues
- hash tables

# ARRAYS IN THE CONTEXT OF DATA STRUCTURES

## Definition:

> An array is a fundamental data structure that stores elements of the same type in contiguous memory locations. It provides a way to represent and organize a collection of data, making it easily accessible and manipulable.
> 

## **Big O Notation**

1. **Accessing an element by index (Read/Write):**
    - Time Complexity: O(1)
    - Accessing an element in an array by its index is a constant-time operation because it takes the same amount of time regardless of the size of the array.
2. **Inserting/Deleting an element at the end of the array:**
    - Time Complexity: O(1) (on average)
    - If there is available space in the array, adding or removing an element at the end is a constant-time operation.
3. **Inserting/Deleting an element at the beginning or in the middle of the array:**
    - Time Complexity: O(n)
    - Inserting or deleting an element at the beginning or in the middle of the array may require shifting all subsequent elements, resulting in a linear time complexity proportional to the number of elements in the array.

## Characteristics:

1. **Continuous Memory:**
    - Array elements are stored in adjacent memory locations.
    - This facilitates efficient and fast access to elements.
2. **Homogeneous Elements:**
    - All elements in an array must be of the same data type.
    - This ensures a consistent and predictable structure.

## Features:

1. **Indexing:**
    - Elements in an array are accessed using an index.
    - Indexing starts at 0 for the first element.
2. **Fixed Size:**
    - The size of an array is fixed at the time of declaration.
    - Once defined, the size cannot be changed during runtime.
3. **Fast Access:**
    - Direct access to any element using its index provides constant time complexity (O(1)).

## Dynamic Arrays:

1. **Definition:**
    - A dynamic array is an array whose size can be changed during runtime.
2. **Advantages:**
    - Overcomes the limitation of fixed-size arrays.
    - Allows flexible allocation of memory as needed.
3. Disadvantages 
    - More time needed for growth.
    - “Creation” of a “new” array in order to change its size.a
4. **Dynamic Array Implementation:**
    - Implemented using pointers and dynamic memory allocation.
    - When the array reaches its capacity, a new, larger array is created, and the elements are copied.

## Operations:

1. **Insertion:**
    - In a standard array, inserting elements requires shifting subsequent elements.
    - Dynamic arrays alleviate this issue by resizing as needed.
2. **Deletion:**
    - Deleting an element may involve shifting subsequent elements to close the gap.
    - Dynamic arrays can shrink in size to optimize memory usage.

## Use Cases:

1. **Efficient Access Patterns:**
    - Arrays are suitable when frequent and direct access to elements is required.
2. **Sequential Data:**
    - Ideal for storing sequential data like time series, sensor readings, etc.
3. **Static Data:**
    - When the size of the data is known and remains constant during program execution.

## Challenges:

1. **Fixed Size Limitation:**
    - Standard arrays have a fixed size, which can be limiting when the number of elements is unknown.
2. **Memory Management:**
    - Dynamic arrays require careful memory management to avoid memory leaks or inefficient resizing.

In summary, arrays offer a simple and efficient way to organize and access data, but the fixed-size limitation can be addressed by using dynamic arrays, which provide more flexibility in managing memory.

---

# LINKED LISTS

## Definition:

> A linked list is a data structure used to store and organize data. Unlike arrays, linked lists use noncontinuous memory to store elements. Each element in a linked list, called a node, contains data and a reference to the next node in the sequence.
> 

## Big O Notation and Time Complexity

1. **Accessing an element by index (Traversal):**
    - Time Complexity: O(n)
    - Unlike arrays where direct access to an element is possible using an index, linked lists require traversing the list from the head (or sometimes the tail) until reaching the desired position. This results in a linear time complexity proportional to the number of elements in the list.
2. **Inserting/Deleting an element at the beginning of the linked list:**
    - Time Complexity: O(1)
    - Adding or removing an element at the beginning of a linked list is a constant-time operation. It involves updating the references of the new first node or the head, and it doesn't depend on the size of the list.
3. **Inserting/Deleting an element at the end of the linked list:**
    - Time Complexity: O(n)
    - To insert or delete an element at the end of a linked list, you need to traverse the entire list to reach the last node. This results in a linear time complexity, as the operation depends on the length of the list.
4. **Inserting/Deleting an element in the middle of the linked list (given a reference to the node):**
    - Time Complexity: O(1)
    - If you already have a reference to the node where the insertion or deletion is to be performed, these operations are constant-time. You update the references of adjacent nodes to include or exclude the desired node.
5. **Searching for a specific element in the linked list:**
    - Time Complexity: O(n)
    - To find a particular element in a linked list, you need to traverse the list until you locate the desired node. This operation has a linear time complexity.

## Components:

1. **Head:**
    - The first element in the linked list.
    - Stores the value of the element and the address of the next element.
2. **Tail:**
    - The last element in the linked list.
    - Stores the value of the element and a NULL reference, indicating the absence of another element.
3. **Pointer:**
    - The address of the next element in the linked list.
    - Connects each node to the next in a sequential manner.

## Operations:

- **Insertion:**
    - Adding a new element involves updating the tail's pointer to the address of the new element and setting the new element as the tail.
- **Advantages:**
    - Dynamic Size: Linked lists can easily change in size, accommodating varying amounts of data.
    - Efficient Insertion: Adding elements is efficient, especially at the end.
- **Disadvantages:**
    - No Random Access: Random access to elements is not allowed; traversal is necessary to reach a specific element.
    - Increased Memory Usage: Linked lists generally use more memory than arrays due to the storage of pointers.

## Choosing Between Arrays and Linked Lists:

- **Considerations:**
    - **Faster Access:** Arrays are preferable when quick access to elements is crucial.
    - **Variable Size:** Linked lists are suitable when the size of the collection may vary.

---

# STACK

A stack is a fundamental data structure that follows the Last In, First Out (LIFO) principle. This means that the last element added to the stack is the first one to be removed. Think of it like a stack of plates – you add a plate to the top and remove the topmost plate when you need one.

### Basic Operations:

1. **Push:**
    - Adds an element to the top of the stack.
2. **Pop:**
    - Removes the top element from the stack.
3. **Peek (or Top):**
    - Returns the top element without removing it.
4. **isEmpty:**
    - Checks if the stack is empty.
5. **size**
    - number uf elements

### Common Usage:

1. **Function Call Management:**
    - The function call stack is a critical part of managing function calls in programming languages. Each function call is pushed onto the stack, and when the function completes, it is popped off.
2. **Undo Mechanism:**
    - Many applications use stacks to implement undo mechanisms. Each action that can be undone is pushed onto the stack, and undoing involves popping the last action.
3. **Expression Evaluation:**
    - Stacks are used to evaluate expressions, especially in converting infix expressions to postfix (or prefix) notation.
4. **Backtracking Algorithms:**
    - In algorithms, stacks are often used to facilitate backtracking. For example, in depth-first search.

---

# QUEUE

In contrast of a stack a queue uses fifo instead of filo.

1. **Stack Methods:**
    - **Push:** Adds an element to the top of the stack.
    - **Pop:** Removes the element from the top of the stack.
    - **Top (or Peek):** Retrieves the element at the top of the stack without removing it.
    - **Empty:** Checks if the stack is empty.
    - **Size:** Returns the number of elements in the stack.
2. **Queue Methods:**
    - **Enqueue (or Push):** Adds an element to the back of the queue.
    - **Dequeue (or Pop):** Removes the element from the front of the queue.
    - **Front (or Peek):** Retrieves the element at the front of the queue without removing it.
    - **Empty:** Checks if the queue is empty.
    - **Size:** Returns the number of elements in the queue.

---

# MAPS

In C++, `map` and `unordered_map` are both associative containers that store key-value pairs, allowing for efficient retrieval of values based on their corresponding keys. However, there are key differences between the two:

1. **Ordering:**
    - **`map`:** Elements in a `map` are ordered based on the keys. The keys are sorted in ascending order by default.
    - **`unordered_map`:** Elements in an `unordered_map` are not ordered. The elements are stored in an unordered manner based on the hash values of the keys.
2. **Performance:**
    - **`map`:** Operations like insertion, deletion, and search have a time complexity of O(log n), where n is the number of elements in the container. This is because the elements are stored in a sorted order using a balanced binary search tree.
    - **`unordered_map`:** Operations in an `unordered_map` have an average time complexity of O(1) for search, insertion, and deletion. However, in the worst case, the complexity can be O(n) due to hash collisions.
3. **Implementation:**
    - **`map`:** Implemented as a red-black tree, which provides ordered storage of elements.
    - **`unordered_map`:** Implemented as a hash table, which allows for fast access but does not maintain any specific order of elements.
4. **Iterators:**
    - **`map`:** Iterators in a `map` traverse elements in ascending order based on keys.
    - **`unordered_map`:** Iterators in an `unordered_map` do not guarantee any specific order.
5. **Memory Overhead:**
    - **`map`:** Typically has a higher memory overhead compared to `unordered_map` due to the need to store additional information for maintaining the order of elements in the tree.
    - **`unordered_map`:** Generally has lower memory overhead.

When choosing between `map` and `unordered_map`, consider the specific requirements of your application. If you need ordered traversal of elements and don't mind a slightly higher time complexity for some operations, a `map` might be appropriate. If you prioritize fast average-case access times and do not require any specific order, an `unordered_map` may be more suitable.
