//SHIFATPREET SINGH
//24070123098
//ENTC B1 
#include <iostream>
using namespace std;

int main() {
    int num[10] = {30, 40, 50, 60};
    int key;
    cout << "Enter the value to search in the array: ";
    cin >> key;

    bool found = false; 
    for (int j = 0; j < 4; j++) {
        if (key == num[j]) {
            cout << "Key found at Location: " << j << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
/*
OUTPUT:
Enter the value to search in the array: 50
Key found at Location: 2
*/
