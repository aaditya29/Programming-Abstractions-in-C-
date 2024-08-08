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
