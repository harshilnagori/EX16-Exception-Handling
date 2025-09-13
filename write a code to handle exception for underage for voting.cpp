//Harshil Nagori
//PRN: 24070123046
//Code:

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; 
        } else {
            cout << "Age: " << age << " → Eligible for voting." << endl;
        }
    }
    catch (int a) {
        cout << "ERROR: Underage! (" << a << " years old, must be 18 or above)" << endl;
    }

    return 0;
}

//OUTPUT:
//Enter age: 89
//Age: 89 → Eligible for voting.
