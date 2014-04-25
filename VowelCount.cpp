/*
Vowel count - Given a string, your task is to write a function that prints to the standard output(stdout) the
number of vowels it contains.Note that your function will receive the following argument : s
which is the string described above.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void count_vowels(const string &s) {
int vowels = 0;
for (int i = 0; i <= s.size(); i++){
if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
vowels++;
}
}
cout << vowels;
}
