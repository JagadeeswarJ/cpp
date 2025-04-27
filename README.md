# Random C++ Concepts
## Container Adapters and Important C++ Concepts
### Container Adapter
A **container adapter** is a wrapper around an existing container (like `vector`, `deque`, etc.) that provides a restricted interface—specialized for a particular usage pattern.

They adapt underlying containers to provide specific functionality like a **stack**, **queue**, or **priority queue**.

> For example, a stack adapter uses a vector or deque to provide **LIFO** (Last In First Out) access, while a queue adapter uses a deque to provide **FIFO** (First In First Out) access. This allows you to use the underlying container's features while enforcing a specific access pattern.

## 📦 Types of Container Adapters

| Adapter         | Behavior                  | Default Underlying Container |
|-----------------|----------------------------|-------------------------------|
| `stack`         | LIFO (Last-In-First-Out)    | `deque`                       |
| `queue`         | FIFO (First-In-First-Out)   | `deque`                       |
| `priority_queue`| Highest priority first     | `vector` (with `make_heap`)    |

---

## 🔍 `binary_search` in C++ (STL)

The `binary_search` function in C++ (from `<algorithm>`) checks whether a given element exists in a sorted range.

### Syntax
```cpp
bool binary_search(start_iterator, end_iterator, value);
// end_iterator: Iterator pointing past the end of the range.
```

---

## ↻ Rotate Example
```cpp
rotate(arr, arr + 3, arr + 5);
```
This rotates the range `[arr, arr+5)` around the point `arr + 3`.

---

## Vector Resize
```cpp
vec.resize(new_size);                 // Resize to new_size elements
vec.resize(new_size, default_value);  // Fill new elements with default_value
```
- `default_value` is the value to fill the new elements with.
- `end_iterator` (e.g., `v.end()`) points just past the last element.

---

## 🖋️ String Append
```cpp
string str = "Hello";
str.append(" World"); // Appends " World" to str
str += " World";      // Another way to append " World" to str
```

Use `insert` to insert a substring at a specific position in the string.

---

## 📊 Overloading Issue
```cpp
double add(int = 0, double d = 0.0);
int add(int = 0, double d = 0.0);
```
These two overloads are **NOT allowed** because they only differ in return type.

---

## 🛠️ `operator new(size_t size)`
- Allocates raw memory (like `malloc` in C).
- **Does not** call any constructor.
- Returns a `void*` pointer.
- Defined in `<new>`.

---

## 🔢 Static Functions
Static functions can be accessed via objects too, although it's not recommended.

---

## 🏰 Constructor and Destructor Call Order
When an object of class `C` is instantiated:
- Constructor of `B` is called,
- Which calls constructor of `A`, printing A then B.
- Data members of `C` are created, again printing A then B.
- Finally, constructor of `C` is executed.

Destruction happens in **reverse** order after `main()` ends.

---

## 🤔 Most Vexing Parse
```cpp
Number n1();
```
- Looks like it's creating an object, but it's **not**!
- It **declares a function** named `n1` returning `Number`.

### Why?
- C++ prefers function declaration if it can be interpreted that way.

### Correct ways to create an object:
```cpp
Number n1;   // Direct
Number n1{}; // Uniform initialization
```

---

## 📂 Initialization List Order
```cpp
MyClass(const char* _s1, const char* _s2, const char* _s3)_*_*_*
