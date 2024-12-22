#include "std_lib_facilities.h"

int main() {
    cout << "Enter an operation followed by two floating point values, \n";
    string operation;
    double val1, val2;
    cin >> operation >> val1 >> val2;

    if (operation == "+" || operation == "plus")
        cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
    else if (operation == "-" || operation == "minus")
        cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
    else if (operation == "*" || operation == "mul")
        cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
    else if (operation == "/" || operation == "div")
        cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";

    return 0;
}