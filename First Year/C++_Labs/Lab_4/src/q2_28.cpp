#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    bool found;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > a * b && 10 < b)
        found = 2 * a > b;
    else {
        found = 2 * a < b;
        if (found) {
            a = 3;
            c = 15;
        }

        if (b) {
            b = 0;
            a = 1;
        }
    }
}