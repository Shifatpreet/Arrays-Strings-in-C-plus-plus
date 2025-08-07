//SHIFTAREET SINGH
//24070123098
//ENTC B1
#include <iostream>
using namespace std;

int main() {
    int x, sum = 0, avg;  
    cout << "Enter the size of array: ";
    cin >> x;

    int num[x];
    cout << "Enter any " << x << " integer values: ";
    for (int i = 0; i < x; i++) {
        cin >> num[i];
    }

    for (int j = 0; j < x; j++) {
        sum += num[j];
    }

    cout << "The sum of elements is: " << sum;

    avg = sum / x;
    cout << "\nThe average of elements is: " << avg << endl;

    return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter any 5 integer values: 1 2 3 4 5
The sum of elements is: 15
The average of elements is: 3
*/
