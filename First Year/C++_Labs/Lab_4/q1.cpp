#include <iostream>

using namespace std;

int main()
{
    int a = (1 > 0);

    cout << a << endl; // 1

    //--------------------------------------

    int score = 100;
    if (score >= 60);{
        cout << "Yes" << endl;
    }

    // ------------------------------

    if (score = 30)
        cout << "Yes?" << endl;
    
    // -----------------------

    5 + 6 == 3 + 7; // false
    2 * 6 - 4 >= 9 - 1;    // true
    'U' >= 't' ; // false
    'A' <= 'a'; // true
    '#' <= '+'; // true
    6.28 / 3 < 3 - 1.2; // false

    // --------------------------
    !(10 > 10); // true
    10 <= 5 || 15 < 15; // true
    (10 != 5) && (15 != 20); // true

    // ---------------------------
    int x = 3, y = 4, z = 7, w = 1;
    
    cout << "x == y: " << (x == y) << endl; 
    cout << "x != z: " << (x != z) << endl;
    cout << "y == z - 3: " << (y == z - 3) << endl;
    cout << "!(z > w): " << !(z > w) << endl;
    cout << "x + y < z: " << (x + y < z) << endl;

    // ----------------------

    if (score >= 60)
    cout << "You pass." << endl;
    else
    cout << "You fail." << endl;

    //----------------------------

    char gender = 'M';
    // cout << "Enter your gender: ";
    // cin >> gender;

    switch (gender){
        case 'M': {
            cout << "Male" << endl;
        } break;
        
        case 'F': {
            cout << "Female" << endl;
        } break;

        default: {
            cout << "Invalid" << endl;
        } break;
    }


}