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

## Node Implementation (C++ Example):

```cpp
class Node {
public:
    int Value;
    Node* Next;
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main() {
    Node* head = new Node();
    Node* body = new Node();
    Node* tail = new Node();

    head->Value = 1;
    body->Value = 2;
    tail->Value = 3;

    head->Next = body;
    body->Next = tail;
    tail->Next = NULL;

    printList(head);

    return 0;
}

```

In this example, a simple linked list with three nodes (head, body, tail) is created. The `printList` function traverses the linked list and prints the values of each node.

---

Certainly! Here are a few more examples of code demonstrating various operations on linked lists:

### Example 1: Insertion at the Beginning

```cpp
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = head;
    head = newNode;
}

int main() {
    Node* head = new Node();
    head->Value = 1;
    head->Next = NULL;

    insertAtBeginning(head, 0);
    insertAtBeginning(head, -1);

    printList(head);

    return 0;
}

```

This example inserts nodes at the beginning of the linked list.

### Example 2: Insertion at the End

```cpp
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->Next != NULL) {
        current = current->Next;
    }

    current->Next = newNode;
}

int main() {
    Node* head = new Node();
    head->Value = 1;
    head->Next = NULL;

    insertAtEnd(head, 2);
    insertAtEnd(head, 3);

    printList(head);

    return 0;
}

```

This example inserts nodes at the end of the linked list.

### Example 3: Deletion by Value

```cpp
void deleteNodeByValue(Node*& head, int value) {
    if (head == NULL) {
        return;
    }

    if (head->Value == value) {
        Node* temp = head;
        head = head->Next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->Next != NULL && current->Next->Value != value) {
        current = current->Next;
    }

    if (current->Next == NULL) {
        return; // Value not found
    }

    Node* temp = current->Next;
    current->Next = current->Next->Next;
    delete temp;
}

int main() {
    Node* head = new Node();
    head->Value = 1;
    head->Next = NULL;

    insertAtEnd(head, 2);
    insertAtEnd(head, 3);

    deleteNodeByValue(head, 2);

    printList(head);

    return 0;
}

```

Certainly! In interviews, linked list questions often revolve around operations like insertion, deletion, and traversal. Here are a few examples of interview-style linked list questions:

### Example 1: Detecting a Cycle

**Problem:**
Write a function to determine if a linked list has a cycle.

**Solution:**

```cpp
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->Next != NULL) {
        slow = slow->Next;
        fast = fast->Next->Next;

        if (slow == fast) {
            return true; // Cycle detected
        }
    }

    return false; // No cycle
}

```

This solution uses the Floyd's Tortoise and Hare algorithm to detect a cycle in a linked list.

### Example 2: Reverse a Linked List

**Problem:**
Write a function to reverse a linked list.

**Solution:**

```cpp
void reverseLinkedList(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
    }

    head = prev; // Update the head to the new start of the reversed list
}

```

This solution reverses the direction of the pointers in the linked list.

### Example 3: Merge Two Sorted Linked Lists

**Problem:**
Write a function to merge two sorted linked lists into a single sorted linked list.

**Solution:**

```cpp
Node* mergeSortedLists(Node* l1, Node* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    if (l1->Value < l2->Value) {
        l1->Next = mergeSortedLists(l1->Next, l2);
        return l1;
    } else {
        l2->Next = mergeSortedLists(l1, l2->Next);
        return l2;
    }
}

```

This solution merges two sorted linked lists into a new sorted linked list.

### Example 4: Find the Middle of a Linked List

**Problem:**
Write a function to find the middle element of a linked list.

**Solution:**

```cpp
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->Next != NULL) {
        slow = slow->Next;
        fast = fast->Next->Next;
    }

    return slow;
}

```

This solution uses the slow and fast pointers to find the middle of the linked list.

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

### Implementation:

Stacks can be implemented using arrays or linked lists. Here's a simple example of a stack implemented using an array in Python:

### Example Usage:

```cpp
#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> items;

public:
    void push(int item) {
        items.push_back(item);
    }

    void pop() {
        if (!isEmpty()) {
            items.pop_back();
        } else {
            std::cerr << "Error: pop from an empty stack\n";
        }
    }

    int peek() const {
        if (!isEmpty()) {
            return items.back();
        } else {
            return -1; // Assuming -1 as an indicator of an empty stack
        }
    }

    bool isEmpty() const {
        return items.empty();
    }

    size_t size() const {
        return items.size();
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top of the stack: " << stack.peek() << std::endl; // Output: 3

    stack.pop();

    std::cout << "After popping, top of the stack: " << stack.peek() << std::endl; // Output: 2

    return 0;
}
```

### 1. **Implement a Stack using Arrays:**

**Problem:**
Implement a stack data structure using arrays with push and pop operations.

**Solution:**

```cpp
#include <iostream>
#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = value;
        } else {
            std::cerr << "Error: Stack overflow\\n";
        }
    }

    void pop() {
        if (top >= 0) {
            --top;
        } else {
            std::cerr << "Error: Stack underflow\\n";
        }
    }

    int peek() const {
        return (top >= 0) ? arr[top] : -1;
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top of the stack: " << stack.peek() << std::endl;  // Output: 3

    stack.pop();

    std::cout << "After popping, top of the stack: " << stack.peek() << std::endl;  // Output: 2

    return 0;
}

```

### 2. **Implement a Min Stack:**

**Problem:**
Implement a stack that supports push, pop, top, and retrieving the minimum element in constant time.

**Solution:**

```cpp
#include <iostream>
#include <stack>

class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    void push(int value) {
        mainStack.push(value);
        if (minStack.empty() || value <= minStack.top()) {
            minStack.push(value);
        }
    }

    void pop() {
        if (!mainStack.empty()) {
            if (mainStack.top() == minStack.top()) {
                minStack.pop();
            }
            mainStack.pop();
        } else {
            std::cerr << "Error: Stack underflow\\n";
        }
    }

    int top() const {
        return (!mainStack.empty()) ? mainStack.top() : -1;
    }

    int getMin() const {
        return (!minStack.empty()) ? minStack.top() : -1;
    }
};

int main() {
    MinStack minStack;

    minStack.push(3);
    minStack.push(1);
    minStack.push(5);

    std::cout << "Top of the stack: " << minStack.top() << std::endl;  // Output: 5
    std::cout << "Minimum element: " << minStack.getMin() << std::endl;  // Output: 1

    minStack.pop();

    std::cout << "After popping, top of the stack: " << minStack.top() << std::endl;  // Output: 1
    std::cout << "Minimum element: " << minStack.getMin() << std::endl;  // Output: 1

    return 0;
}

```

### 3. **Valid Parentheses:**

**Problem:**
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

**Solution:**

```cpp
#include <iostream>
#include <stack>
#include <unordered_map>

bool isValid(std::string s) {
    std::stack<char> charStack;
    std::unordered_map<char, char> charMap = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s) {
        if (charMap.find(c) != charMap.end()) {
            char topElement = charStack.empty() ? '#' : charStack.top();
            if (topElement != charMap[c]) {
                return false;
            }
            charStack.pop();
        } else {
            charStack.push(c);
        }
    }

    return charStack.empty();
}

int main() {
    std::string parenthesesStr = "{[]}";
    std::cout << "Is the string valid? " << std::boolalpha << isValid(parenthesesStr) << std::endl;  // Output: true
    return 0;
}

```

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

Certainly! Below are simple examples of using `std::map` and `std::unordered_map` in C++:

**Example using `std::map`:**

```cpp
#include <iostream>
#include <map>

int main() {
    // Declare a map with int keys and string values
    std::map<int, std::string> myMap;

    // Insert key-value pairs into the map
    myMap[1] = "One";
    myMap[3] = "Three";
    myMap[2] = "Two";

    // Access and print elements (automatically ordered by key)
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

```

**Example using `std::unordered_map`:**

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    // Declare an unordered_map with int keys and string values
    std::unordered_map<int, std::string> myUnorderedMap;

    // Insert key-value pairs into the unordered_map
    myUnorderedMap[1] = "One";
    myUnorderedMap[3] = "Three";
    myUnorderedMap[2] = "Two";

    // Access and print elements (order is not guaranteed)
    for (const auto& pair : myUnorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

```

Note that in the case of `std::map`, the elements will be printed in ascending order of keys. However, in the case of `std::unordered_map`, the order is not guaranteed, and the elements may appear in a different order each time the program is run.
