#include "std_lib_facilities.h"

int main (){
    cout << "Enter three strings,\n";
    string val1 {" "};
    string val2 {" "};
    string val3 {" "};
    cin >> val1 >> val2 >> val3;

    if (val1 >= val2) {
        if (val2 >= val3) {
            cout << val3 << ", " << val2 << ", " << val1 << "\n";
        } else {
            if (val1 >= val3) {
                cout << val2 << ", " << val3 << ", " << val1 << "\n";
            } else {
                cout << val2 << ", " << val1 << ", " << val3 << "\n";
            }
        }
    } else {
        if (val2 >= val3) {
            if (val1 >= val3){
                cout << val3 << ", " << val1 << ", " << val2 << "\n";
            } else {
                cout << val1 << ", " << val3 << ", " << val2 << "\n";
            }
        } else {
            cout << val1 << ", " << val2 << ", " << val3 << "\n";
        }
    }

    return 0;
}