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
