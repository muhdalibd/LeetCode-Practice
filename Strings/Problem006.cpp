#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  125. Valid Palindrome
 *  https://leetcode.com/problems/valid-palindrome/
 *
 *  Difficulty : Easy
 *  Topics     : Two Pointers, String
 *  Input      : "race a car"                          Output: false
 *  Input      : "A man, a plan, a canal: Panama"      Output: true
 *  Input      : " "                                   Output: true
 ******************************************************************************/

bool isPalindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i < j) {
        while(!isalnum(s[i])){
            i++;
        }
        while(!isalnum(s[j])){
            j--;
        }
        char first = tolower(s[i]);
        char last = tolower(s[j]);
        if(first != last){
            return false;
        }
        i ++;
        j --;
    }
    return true;
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    cout << isPalindrome(str) << endl;

    cout << isPalindrome(" ") << endl;
    cout << isPalindrome("race a car") << endl;
    return 0;
}
