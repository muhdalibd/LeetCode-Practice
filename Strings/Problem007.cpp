#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  680. Valid Palindrome II
 *  https://leetcode.com/problems/valid-palindrome-ii/
 *
 *  Difficulty : Easy
 *  Topics     : Two Pointers, String
 *  Input      : "efgfhe"      Output: true
 *  Input      : "abcda"       Output: false
 ******************************************************************************/

bool isPalindrome(const string& s, int l, int r){
    while(l < r) {
        if(s[l] != s[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}

bool validPalindrome(const string& s){
    int i=0;
    int j=s.size()-1;
    while(i < j) {
        if(s[i] != s[j]){
            return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
        }
        i ++;
        j --;
    }
    return true;
}
int main(){
    string str = "efgfhe";
    cout << validPalindrome(str) << endl;

    cout << validPalindrome("abcda") << endl;

    cout << validPalindrome("jfjfg") << endl;
    return 0;
}
