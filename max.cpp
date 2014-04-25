// Max - Given two integer numbers 'a' and 'b'. Your task is to write a function
// that prints to the standard output (stdout) the maximum value between the two.
// Note that your function will receive the following arguments: 'a' which is the
// integer number a described above 'b' which is the integer number b described above.


#include <iostream>

using namespace std;

void get_max(int a, int b) {
    if(a > b)
        cout << a;
    else 
        cout << b;
}
