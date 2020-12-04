# C++ Conceptual Implementation of Mobile Money

# Compilation

Use the `g++` compiler to compile this code with following command

```bash
g++ main.cpp -o app
```

The above creates a binary file called `app` on UNIX based systems
and `app.exe` file on Windows machines.

To run it, either double click it, on run it from the terminal, by typing.

```bash
./app
```

or on Windows

```powershell
app.exe
```

# C++ Programming

C++ is a general purpose compiled programming langauge that runs on many platforms. i.e
Windows, MacOS, Linux, Embedded Devices, etc.

## Compilation

The act of changing human readable code to machine readable code is called compiling. And the tool used for compiling code is called a compiler.

## Code explanation

The program starts with adding a header file in the program, as can be seen from

### Header Files

```c++
#include <iostream>
```

The header file contains code declarations, these include, function, variable, constants declarations, among other things.


### Namespaces

The third line in the code, i.e

```c++
using namespace std
```

indicates that we are going to be using attributes from the `C++` standard library. Among these used in this program include.

`cin` used to capture user input

`cout` used to print out program data to screen

`endl` used to indicate the termination of a line to be printed to screen.

### Variables

The program then has variable declarations.

```c++
// Start with an initial balance of K0
float balance = 0.0;
float *accountBalance = &balance;

// User option
int option; 
```

A variable is a placeholder for data, i.e it holds data to used in the program.
Because c++ is a strongly typed programming language, every variable is preceeded 
with a datatype, which indicates the type of data that type can hold.

### Functions

A function is a grouped set of instructions to be executed by a computer, an example of a function is as indicated below:

```c++
void menu() {
    cout << "Welcome to Mobile Money" << endl << endl;
    cout << "1.) Deposit Money " << endl;
    cout << "2.) Withdraw Money " << endl;
    cout << "3.) Send Money " << endl;
    cout << "4.) Check Balance " << endl;
    cin >> option;
    SelectOption(option);
}
```

This function displays the menu of options to be displayed to the end user.

## Main Function

The main function is a mandatory function in any `C++` program has it marks the entry point of a program
It takes a return type value of 0 to indicate to the kernel that a program exited without an error.
But what goes inside of it depends on the functionaly of the program being written. Below is an example.

```c++
int main() {
    menu();
    
    try {
        cin >> option;
        SelectOption(option);
    } catch(...) {
        // Only integers are allowed, display options menu
        menu();
    }

    return 0;
}
```

