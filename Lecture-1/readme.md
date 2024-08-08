# Important Points of Lecture-1

## Difference Between `<>` and `""`

In C++, when you include a file using the `#include` directive, the choice between angle brackets `<>` and double quotes `""` determines how the compiler searches for the file. Here's the difference:

### 1. `#include <filename>`

- **Angle Brackets (`<>`)**:
  - This is typically used for including standard library headers or headers provided by the compiler.
  - When you use angle brackets, the compiler searches for the file in the system directories where standard library headers are stored (like `/usr/include` on Linux or the directories specified in the compiler's settings).
  - Example: `#include <iostream>` includes the standard input-output stream library from the C++ standard library.

### 2. `#include "filename"`

- **Double Quotes (`""`)**:
  - This is usually used for including your own header files or files that are not part of the standard library.
  - When you use double quotes, the compiler first looks for the file in the same directory as the source file that is being compiled. If the file is not found there, the compiler then searches in the system directories (just like with angle brackets).
  - Example: `#include "myheader.h"` includes a header file named `myheader.h` located in the same directory as the source file.

### Summary:

- **`<>`**: Searches in the system directories (for standard or compiler-provided headers).
- **`""`**: Searches in the current directory first, then in the system directories (for your own or third-party headers).

Understanding this distinction helps in organizing our project files and ensuring that the correct headers are included during compilation.

## Basics of C++ And Data Types

Below is a basic C++ program that introduces data types, variable names, and other essential concepts:

```cpp
#include <iostream>
#include <string>  // Needed for using the string data type

// This is a single-line comment

/*
 This is a multi-line comment.
 Comments are ignored by the compiler and are used to explain code.
*/

int main() {
    // Variable declarations with different data types

    // Integer data type (int)
    int age = 25;
    std::cout << "Integer (int) - Age: " << age << std::endl;

    // Floating point data type (float, double)
    float height = 5.9f; // 'f' is used to denote a float literal
    double weight = 70.5; // double is more precise than float
    std::cout << "Float (float) - Height: " << height << " feet" << std::endl;
    std::cout << "Double (double) - Weight: " << weight << " kg" << std::endl;

    // Character data type (char)
    char initial = 'A';
    std::cout << "Character (char) - Initial: " << initial << std::endl;

    // Boolean data type (bool)
    bool isStudent = true; // true or false
    std::cout << "Boolean (bool) - Is Student: " << isStudent << std::endl;

    // String data type (std::string)
    std::string name = "John Doe";
    std::cout << "String (std::string) - Name: " << name << std::endl;

    // Constant variable (const)
    const double PI = 3.14159;
    std::cout << "Constant (const) - PI: " << PI << std::endl;

    // Examples of variable names
    int myVariable = 10;
    int another_variable = 20;
    int Variable3 = 30;

    std::cout << "Variable Names - myVariable: " << myVariable << ", another_variable: " << another_variable << ", Variable3: " << Variable3 << std::endl;

    // Arithmetic operations
    int sum = myVariable + another_variable;
    std::cout << "Sum of myVariable and another_variable: " << sum << std::endl;

    // Relational operations
    bool isEqual = (myVariable == another_variable);
    std::cout << "Is myVariable equal to another_variable? " << isEqual << std::endl;

    // Logical operations
    bool logicalAnd = (myVariable > 5) && (another_variable < 25);
    std::cout << "Logical AND operation: " << logicalAnd << std::endl;

    // Type casting
    double doubleValue = static_cast<double>(myVariable) / 3;
    std::cout << "Type casting - Division result as double: " << doubleValue << std::endl;

    return 0; // Program ends successfully
}
```

### Explanation of the Program:

1. **Comments**:

   - Single-line comments use `//`.
   - Multi-line comments are enclosed in `/* */`.

2. **Data Types**:

   - `int`: Stores integers (whole numbers).
   - `float`: Stores floating-point numbers (single precision).
   - `double`: Stores floating-point numbers (double precision).
   - `char`: Stores a single character.
   - `bool`: Stores boolean values (`true` or `false`).
   - `std::string`: Stores a sequence of characters (a string).

3. **Variable Names**:

   - Variable names should start with a letter or underscore, followed by letters, numbers, or underscores.
   - Variable names are case-sensitive.

4. **Constant Variables**:

   - Use `const` to declare a constant variable whose value cannot change after it’s initialized.

5. **Basic Operations**:

   - Arithmetic operations: Addition, subtraction, multiplication, division, etc.
   - Relational operations: Compare values (`==`, `!=`, `>`, `<`, etc.).
   - Logical operations: Logical AND (`&&`), OR (`||`), NOT (`!`).

6. **Type Casting**:
   - Convert one data type to another using `static_cast`.
