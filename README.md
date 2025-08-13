__Array Operations in C++__
This repository contains several C++ programs demonstrating basic array operations such as input/output, finding maximum and minimum values, searching, reversing, and calculating the sum and average of array elements.

Author
Shifatpreet Singh
Student ID: 24070123098
Department: ENTC B1

__Programs Included__
__1. Input and Display Array Elements__

Description: Reads 5 integer values from the user and displays them.

Features: Basic input/output with arrays.

__Algorithm:__

1.Initialize an integer array of size 5.

2.Use a loop to read 5 integers from the user and store them in the array.

3.Use another loop to display the stored integers.

__Conclusion:__
This program demonstrates the basics of array input and output operations.

__2. Find Maximum and Minimum in an Array__

Description: Takes the size of the array from the user, reads integer values, and finds the maximum and minimum elements.

Features: Dynamic array size, max/min element finding.

__Algorithm:__

1.Read the size x of the array.

2.Declare an array of size x.

3.Input x integer values into the array.

4.Initialize max and min variables with the first element of the array.

5.Loop through the array to find the maximum and minimum values by comparing each element.

6.Print the maximum and minimum values.

Conclusion:
This program effectively finds the largest and smallest elements in an array, useful in many practical scenarios like data analysis.

__3. Search for an Element in an Array__
Description: Searches for a user-provided value in a predefined array and reports its position if found.

Features: Linear search in array.

__Algorithm:__

1.Define an array with predefined values.

2.Input the search key from the user.

3.Loop through the array elements to check if the key matches any element.

4.If found, print the index and exit.

5.If not found, print a message indicating the key is not present.

__Conclusion:__
This program demonstrates a simple linear search algorithm to find an element in an array.

__4.Reverse an Array:__
Description: Reads array elements from the user and prints the array in reverse order.

Features: Reversing the elements using a loop.

__Algorithm:__

1.Read the size x of the array.

2.Input x elements into the array.

3.Loop backwards from the last element to the first, printing each element.

__Conclusion:__
This program shows how to reverse the order of elements in an array, a common array manipulation task.

__5. Calculate Sum and Average of Array Elements :__
Description: Reads the size and elements of an array, then computes and displays the sum and average.

Features: Summation and average calculation.

__Algorithm:__

1.Read the size x of the array.

2.Input x elements into the array.

3.Initialize sum to 0.

4.Loop through the array to add all elements to sum.

5.Calculate average by dividing sum by x.

6.Print the sum and average.

__Conclusion:__
This program calculates the total and average of elements in an array, useful in statistics and data processing.


__6.Palindrome Check__

Description

Check whether a given string is a palindrome (reads the same forwards and backwards).

__ALGORITHM__
1.Calculate the length of the string.

2.Compare characters from the start and end moving inward.

3.If any characters differ, it's not a palindrome.

 __7.String Concatenation Without Built-in Functions__

__Algorithm: String__

1.Start with two input strings: str1 and str2.

2.Find the length of str1 by iterating through it until the null terminator ('\0') is found.

3.At the position after the last character of str1, insert a space character ' '.

4.Starting from the position after the space, copy each character from str2 one by one into str1.

5.After copying all characters from str2, add the null terminator ('\0') at the end of the combined string.

6.The concatenated string str1 now contains the original str1, a space, and then str2.

__8.Array Declaration and Initialization__

__Description__

Demonstrates how to declare and initialize arrays in C++.

__ALGORITHM__
1.Declare without initialization (values are garbage).

2.Declare and initialize explicitly.

3.Partial initialization (remaining elements zero).

4.Implicit size with initializer list.



