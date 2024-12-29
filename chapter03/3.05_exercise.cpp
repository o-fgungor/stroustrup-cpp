#include "std_lib_facilities.h"

int main(){
    cout << "Enter two floating point values,\n";
    double val1 {.0};
    double val2 {.0};
    cin >> val1 >> val2;

    if (val1 > val2){
        cout << "val1 is larger then val2.\n";
    } else if (val1 < val2){
        cout << "val2 is larger then val1.\n";
    } else {
        cout << "val1 and val2 is equal.\n";
    }
    
    cout << "val1" << " + " << "val2" << " = " << val1+val2 << "\n";
    cout << "val1" << " - " << "val2" << " = " << val1-val2 << "\n";
    cout << "val1" << " * " << "val2" << " = " << val1*val2 << "\n";
    cout << "val1" << " / " << "val2" << " = " << val1/val2 << "\n";

    return 0;
}