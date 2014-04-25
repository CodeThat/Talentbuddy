// Binary - Given an integer number. Your task is to write a function that prints to the 
// standard output (stdout) its binary format. Note that your function will receive the following argument:
// 'n' which is the integer number described above.

#include <iostream>

using namespace std;

void convert_to_binary(int n) {
    int remainder;
 
    if(n <= 1) {
        cout << n;
        return;
    }
    
    remainder = n%2;
    convert_to_binary(n >> 1);
    cout << remainder;
}
