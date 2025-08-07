//SHIFATPREET SINGH 
//24070123098
//ENTC B1


#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a word: ";
    cin.getline(str, 100);

    int length = 0;

    
    while (str[length] != '\0') {
        length++;
    }

    
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;  
        }
    }

    if (isPalindrome) {
        cout << "This word is a palindrome!" << endl;
    } else {
        cout << "This word is NOT a palindrome." << endl;
    }

    return 0;
}
/*
OUTPUT
Enter a word: NAMAN
This word is a palindrome!

Enter a word: SHIFAT
This word is NOT a palindrome.

*/


*/


