#include <iostream>
using namespace std;

int main() {
    // Part 1: Star Pattern
    cout << "=== Star Pattern ===" << endl;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; // spacing between parts

    // Part 2: Multiplication Table (1~9)
    cout << "=== Multiplication Table ===" << endl;
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
