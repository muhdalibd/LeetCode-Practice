#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  20. Valid Parentheses
 *  https://leetcode.com/problems/valid-parentheses/
 *
 *  Difficulty : Easy
 *  Topics     : Stack, String
 *  Input      : "()[]{}"            Output: true
 *  Input      : "([])[()]{()}"      Output: true
 *  Input      : "()[{(}]{}"         Output: false
 *  Input      : "()[{(()}]{{{}"     Output: false
 ******************************************************************************/

bool isValid(string str){
    stack<char> st;
    for(char ch : str) {
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if(top == '(' && ch == ')' ||
               top == '{' && ch == '}' ||
               top == '[' && ch == ']'
            ){
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string str = "([])[()]{()}";
    cout << isValid(str) << endl;

    cout << isValid("()[{(()}]{{{}") << endl;

    cout << isValid("([])[()]{()}") << endl;
    return 0;
}
