#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {         // Outer loop for rows
        for (int j = 1; j <= i; j++) {        // Inner loop for numbers
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
