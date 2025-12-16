**<h2>Programming with C++</h2>**

###

Welcome to my `C++` repository, where I show you the concept of the language, codes, and some other things about it.

---

**<h2>Introduction:</h2>**

###

This repository was developed with the goal of improving knowledge about C++ and sharing it. The codes were used in a circuit project using *Arduino* and were created on the `AUTOCAD` `TinkerCad` platform. At the end of this repository, I will be leaving the images of the 3 projects!

###

**<h2>What is it for?</h2>**

###

✅ Learn `C++` from scratch;<br>
✅ Test simple codes in a practical way;<br>
✅ Practice problem solving.

###

**<h2>Requirements:</h2>**

###

- Create an account on `TinkerCad`;
- Create a circuit project;
- Operating System: `Windows`, `Linux` or `MacOS`.

###

**<h2>Basic Codes</h2>**

###

Below are some simple and super cool codes for you to use! Take a look:

###
```cpp
#include <iostream>

int main() {

    std::string name;
    std::cout << "Hey, dev! What's your name? ";
    std::cin >> name;
    std::cout << "Welcome to C++, " << name << "!!" << std::endl;

    return 0;

}
```

###

✅ This command aims to request your name and display a welcome message with your name.

###

**<h2>After all, what was written in the code?</h2>**

###
```cpp
#include <iostream>
```

###

- **Function:** Includes the `iostream` library, which allows the use of 'input' and 'output', such as: `std::cin` and `std::cout`;
- **Reason for importance:** Without it, the language will not print a message and/or read data;

###
```cpp
int main() {
}
```

###

- **Function:** Defines the main function of the code;
- *Reason for importance:* Every C++ program starts execution from `main()`;
- **Meaning of `int`:** Returns an *integer* at the end of execution;
- **Meaning of `Return 0`:** Means it ran without errors.

###
```cpp
std::string name;
```

###

- **Function:** Creates a variable `name` of type `string`;
- **Reason for importance:** Stores the entered name.

###
```cpp
std::cout << "Hey, dev! What's your name? ";
```

###

- **Function:** Displays: `"Hey! What's your name? "`.

###
```cpp
std::cin >> name;
```

###

- **Function:** Stores the entered name in the `name` variable.

###
```cpp
std::cout << "Welcome to C++, " << name << "!!" << std::endl;
```

###

- **Function:** Displays a Welcome message, including your name.
- `std::endl`: Jumps 1 line at the end of the message.

###
```cpp
return 0;
```

###

- **Function:** Shows that your code ended without errors;
- Returning `0` is a convention that means the code was well developed.

---



https://www.tinkercad.com/things/fulBNiYRZMg-potenciometro-em-arduino
