/*
Count digits

Given a string s, your task is to print to the standard output (stdout) the number of digits it contains.

Example input:
s: "abc123"

Example output:
3
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_digits(const string &s) {
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
            {
                count+=1;       
            }         
    }
    cout << count;
}
