# 🖨️ Custom `_printf` Function in C

Welcome to my custom implementation of the standard C `printf` function — built from scratch, following strict coding and style guidelines. This project recreates the behavior of `printf`, handling formatted output with precision, memory safety, and performance in mind.

> 🔧 Developed for the ALX Software Engineering Program under low-level programming module.


## 📖 About the Project

The goal of this project is to understand the inner workings of one of C’s most powerful functions — `printf`. By implementing `_printf`, I dive deep into:

- Variadic functions (`va_list`)
- Memory management (`malloc`, `free`)
- File descriptors and low-level output (`write`)
- String manipulation and formatting logic

This custom function mirrors the behavior of the original `printf`, with support for many format specifiers and extensions.

---

## ✨ Features

- Prints characters, strings, integers, and more — just like `printf`
- Handles multiple format specifiers in a single call
- No use of global variables
- Strict adherence to the **Betty coding style**
- Fully modular: no more than 5 functions per file
- Header file protected with include guards
- Tested on **Ubuntu 20.04 LTS** using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

---

## 🧪 Usage

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("I am %d years old.\n", 25);
    return (0);
}


## 🚀 Additional  Features

- Handles standard format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, and `%%`
- Custom format specifiers: `%b` (binary), `%r` (reversed string), `%R` (ROT13)
- Optional: `%p` (pointer address)
- Uses variadic functions (`stdarg.h`)
- Outputs characters using `write` syscall only

## 📦 Supported Format Specifiers

| Specifier | Description                  |
|-----------|------------------------------|
| `%c`      | Character                    |
| `%s`      | String                       |
| `%%`      | Literal `%`                  |
| `%d` / `%i`| Signed decimal integer      |
| `%u`      | Unsigned decimal integer     |
| `%o`      | Unsigned octal               |
| `%x` / `%X`| Unsigned hexadecimal        |
| `%b`      | Binary (custom)              |
| `%p`      | Pointer address (optional)   |
| `%r`      | Reversed string (custom)     |
| `%R`      | ROT13 string (custom)        |

## 🧪 Coding Standards

- All files follow the **Betty style guide**
- No global variables
- Maximum of **5 functions per `.c` file**
- Header file `main.h` uses **include guards**
- Only allowed functions/macros:
  - `write`
  - `malloc`, `free`
  - `va_start`, `va_end`, `va_copy`, `va_arg`

## 👥 Authors

- **Lawal Hammed Tunde** – 

## 📃 License

This project is for **educational purposes** as part of the **ALX Software Engineering Program**.

## 🙌 Acknowledgements

- ALX Software Engineering Program
- [Betty Style Guide](https://github.com/holbertonschool/Betty)
- GNU/Linux and the Open Source Community
- *You*, for checking out this project! 😊
