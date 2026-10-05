#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  856. Score of Parentheses
 *  https://leetcode.com/problems/score-of-parentheses/
 * 
 *  Difficulty : Medium
 *  Topics     : String, Stack
 *  Input      : "(()(()))"        Output: 4
 *  Input      : "((()()()))"      Output: 5
 ******************************************************************************/

int scoreOfParentheses(string s){
    stack<int> st;
    int score = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(score);
            score = 0;
        }
        else {
            if(s[i-1] == '('){
                score = st.top() + 1;
            }
            else {
                score = st.top() + 2*score;
            }
            st.pop();
        }
    }
    return score;
}

int main(){
    string str = "((()()()))";
    cout << scoreOfParentheses(str) << endl;
    
    cout << scoreOfParentheses("((((((()))((()))))))") << endl;
    return 0;
}
