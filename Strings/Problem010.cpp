#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  647. Palindromic Substrings
 *  https://leetcode.com/problems/palindromic-substrings/
 *
 *  Difficulty : Medium
 *  Topics     : String, Two Pointer, DP
 *  Input      : "aaa"      Output: 6
 ******************************************************************************/

int palindromicExpand(string& s, int l, int r){
    int count = 0;
    while(l>=0 && r<s.size() && s[l]==s[r]){
        count++;
        l--; r++;
    }
    return count;
}

int countSubstrings(string s){
    int count = 0;
    int n = s.size();
    for(int i=0; i<n; i++){
        count += palindromicExpand(s, i, i);
        count += palindromicExpand(s, i, i+1);
    }
    return count;
}

int main(){
    string str = "aaa";
    cout << countSubstrings(str) << endl;

    cout << countSubstrings("ababc") << endl;
    return 0;
}
