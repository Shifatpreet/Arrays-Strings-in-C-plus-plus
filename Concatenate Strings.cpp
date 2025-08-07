//SHIFATPREET SINGH 
//24070123098
//ENTC B1 

#include <iostream>

int main() {
    char str1[50] = "Hello";  
    char str2[] = "World!";

  
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    str1[i] = ' ';  
    i++;

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

   
    str1[i] = '\0';

    std::cout << str1 << std::endl;  

    return 0;
}
 // Output: Hello World!
