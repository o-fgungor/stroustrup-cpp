#include "std_lib_facilities.h"

int main(){
    cout << "For odd-even test, please enter an integer,\n";
    int val;
    cin >> val;

    if (val % 2 == 0)
        cout << "The value " << val << " is an even number.\n";
    else
        cout << "The value " << val << " is an odd number.\n";

    return 0;
}