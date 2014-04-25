/*
Longest palindrome

Given a string S, find the longest substring in S that is the same in reverse and print it to the standard output.

Expected complexity: O(N2)

Example input:
S: "abcdxyzyxabcdaaa"

Example output:
xyzyx
*/


#include <iostream>
#include <string>

using namespace std;

void longest_palind(const string &s) {
    int n = s.length();
    int longestBegin = 0;
    int maxLen = 1;
    bool table[100][100] = {false};
    
    for (int i = 0; i < n; i++) 
    {
        table[i][i] = true;
    }
    for (int i = 0; i < n-1; i++) 
    {
        if (s[i] == s[i+1]) {
        table[i][i+1] = true;
        longestBegin = i;
        maxLen = 2;
    }
  }
  for (int len = 3; len <= n; len++) {
    for (int i = 0; i < n-len+1; i++) {
      int j = i+len-1;
      if (s[i] == s[j] && table[i+1][j-1]) {
        table[i][j] = true;
        longestBegin = i;
        maxLen = len;
      }
    }
  }
  cout << s.substr(longestBegin, maxLen);
}
