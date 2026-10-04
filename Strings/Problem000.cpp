#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  678. Valid Parenthesis String
 *  https://leetcode.com/problems/valid-parenthesis-string/
 *
 *  Difficulty : Medium
 *  Topics     : String, DP, Greedy
 *  Input      : "()*)*()"      Output: true
 *  Input      : "(**("         Output: false
 ******************************************************************************/

bool checkValidString(string s){
    int min = 0, max = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            min += 1;
            max += 1;
        }
        else if(s[i] == ')'){
            min -= 1;
            max -= 1;
        }
        else{
            min -= 1;
            max += 1;
        }
        if(min < 0) min = 0;
        if(max < 0) return false;
    }
    return min == 0;
}


int main(){
    string str = "()*)*()";
    cout << checkValidString(str) << endl;

    cout << checkValidString("(**(") << endl;
    return 0;
}
