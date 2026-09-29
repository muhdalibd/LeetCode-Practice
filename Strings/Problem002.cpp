#include <bits/stdc++.h>
using namespace std;

/***********************************************************************************
 *  344. Reverse String
 *  https://leetcode.com/problems/reverse-string/
 *
 *  Difficulty : Easy
 *  Topics     : Two Pointers, String
 *  Input      : s = ["h","e","l","l","o"]       Output: ["o","l","l","e","h"]
 *  Input      : s = ["H","a","n","n","a","h"]   Output: ["H","a","n","n","a","h"]
 ***********************************************************************************/

void reverseString(vector<char>& s){
    int i = 0;
    int j = s.size()-1;
    while(i < j) {
        swap(s[i], s[j]);
        i ++;
        j --;
    }
}

int main(){
    vector<char> str {'h','a','n','n','a','h'};

    reverseString(str);
    for(int i=0; i<str.size(); i++){
        cout << str[i] <<" ";
    }
    return 0;
}
