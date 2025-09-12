//Harshil Nagori
//24070123048
//Code:

#include <iostream>
using namespace std;

int main() {
    int a, b, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }
        result = a / b;
        cout << "Result: " << result << endl;
    } 
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}

//Output:
//Enter two numbers: 4 0
//Exception caught: Division by zero is not allowed!
//Program continues after exception handling.
