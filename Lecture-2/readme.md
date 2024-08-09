# Important Points Of Lecture-2

## Functions in C++

### 1. **What is a Function?**

A function in C++ is a block of code that performs a specific task. It is a way to organize and reuse code. Functions can take inputs, called parameters, and can return a value.

### 2. **Declaring and Defining Functions**

- **Declaration (Prototype)**: A function must be declared before it can be called. This tells the compiler the function's name, return type, and parameters. The declaration is usually done at the beginning of the program or in a header file.

  ```cpp
  int add(int a, int b); // Function declaration
  ```

- **Definition**: This is where the actual body of the function is written. The definition provides the implementation of the function.

  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```

### 3. **Calling a Function**

Once a function is declared and defined, it can be called in the code. The function's name followed by parentheses and arguments (if any) is used to call it.

```cpp
int result = add(3, 4); // Function call
```

### 4. **Types of Functions in C++**

- **Void Functions**: These functions do not return any value.

  ```cpp
  void printMessage() {
      std::cout << "Hello, World!" << std::endl;
  }
  ```

- **Functions with Return Values**: These functions return a value to the caller.

  ```cpp
  int multiply(int x, int y) {
      return x * y;
  }
  ```

- **Inline Functions**: Small functions that are expanded in line when called to reduce the overhead of function calls.

  ```cpp
  inline int square(int x) {
      return x * x;
  }
  ```

- **Recursive Functions**: Functions that call themselves to solve a smaller instance of the same problem.

  ```cpp
  int factorial(int n) {
      if (n <= 1) return 1;
      else return n * factorial(n - 1);
  }
  ```

- **Overloaded Functions**: Multiple functions can have the same name but different parameters.

  ```cpp
  int add(int a, int b) {
      return a + b;
  }

  double add(double a, double b) {
      return a + b;
  }
  ```

- **Default Arguments**: Functions can have default values for some or all of their parameters.
  ```cpp
  int add(int a, int b = 5) {
      return a + b;
  }
  ```

### 5. **Function Prototypes**

A function prototype is simply the declaration of a function that tells the compiler the function's name, return type, and parameters. It is important for the compiler to know about the function before it is used in the code.

```cpp
int add(int, int); // Function prototype (declaration)
```

**Example:**

```cpp
#include <iostream>

// Function prototype
int add(int, int);

int main() {
    int result = add(5, 3); // Function call
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

In this example:

- `int add(int, int);` is the prototype.
- `add(5, 3);` is the function call.
- `int add(int a, int b) { return a + b; }` is the definition.

### 6. **Why Use Function Prototypes?**

- Ensures that the compiler knows about the function before it is used.
- Helps to detect mismatches in the function's return type or parameters.
- Makes code more readable by separating the interface (prototype) from the implementation (definition).

## Value Semantics and Reference Semantics in C++

### 1. **Value Semantics**

Value semantics is when you work with copies of data. When an object or variable is passed to a function or assigned to another variable, a copy of that object or variable is created.

- **Passing by Value**: When you pass an argument to a function by value, a copy of the argument is made. Any changes made to the parameter inside the function do not affect the original argument.

  ```cpp
  void modifyValue(int x) {
      x = 10;  // Modifies the local copy
  }

  int main() {
      int a = 5;
      modifyValue(a);
      std::cout << a;  // Output will still be 5
      return 0;
  }
  ```

  In this example, `modifyValue(a)` creates a copy of `a`. The original variable `a` remains unchanged outside the function.

- **Assignment by Value**: When you assign one object to another, a copy of the data is made.

  ```cpp
  int x = 5;
  int y = x;  // y is a copy of x
  y = 10;     // Changing y does not affect x
  ```

### 2. **Reference Semantics**

Reference semantics is when you work with references or pointers to data rather than the data itself. Changes made to the reference or pointer affect the original data.

- **Passing by Reference**: When you pass an argument by reference, the function receives a reference to the original variable, not a copy. Any modifications made to the reference will directly affect the original variable.

  ```cpp
  void modifyReference(int &x) {
      x = 10;  // Modifies the original variable
  }

  int main() {
      int a = 5;
      modifyReference(a);
      std::cout << a;  // Output will be 10
      return 0;
  }
  ```

  In this example, `modifyReference(a)` passes `a` by reference. Any changes made inside the function affect the original variable `a`.

- **Passing by Pointer**: Similar to passing by reference, but using pointers.

  ```cpp
  void modifyPointer(int *x) {
      *x = 10;  // Dereferences the pointer to modify the original variable
  }

  int main() {
      int a = 5;
      modifyPointer(&a);
      std::cout << a;  // Output will be 10
      return 0;
  }
  ```

  Here, `modifyPointer(&a)` passes the address of `a` to the function. The function dereferences the pointer to modify the original variable.

- **Assignment by Reference**: Instead of making a copy, the reference directly refers to the original data.

  ```cpp
  int x = 5;
  int &y = x;  // y is a reference to x
  y = 10;      // Changing y also changes x
  std::cout << x;  // Output will be 10
  ```

  In this example, `y` is a reference to `x`, so any changes to `y` also affect `x`.

### 3. **Comparison of Value Semantics and Reference Semantics**

- **Memory Usage**:

  - Value semantics involves copying data, which can lead to increased memory usage, especially with large objects or arrays.
  - Reference semantics avoids copying and uses less memory by directly referencing the original data.

- **Performance**:

  - Value semantics can be slower due to the overhead of copying data.
  - Reference semantics can be faster since it works directly with references or pointers without copying data.

- **Safety**:
  - Value semantics is safer in terms of preventing unintended side effects because the function operates on a copy.
  - Reference semantics, while more efficient, requires careful handling to avoid unintended modifications to the original data.

### 4. **When to Use Each**

- **Value Semantics**: Use when you want to work with independent copies of data, ensuring that changes in one part of the code do not affect others.
- **Reference Semantics**: Use when you need to modify the original data, avoid copying large objects, or when working with functions that should affect the caller's variables.

Understanding when to use value versus reference semantics is key to writing efficient and bug-free C++ programs.

## Strings in C++
