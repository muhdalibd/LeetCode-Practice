#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  921. Minimum Add to Make Parentheses Valid
 *  https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
 *
 *  Difficulty : Medium
 *  Topics     : String, Stack, Greedy
 *  Input      : "(()))"      Output: 1
 *  Input      : "((((("      Output: 5
 *  Input      : ")))))"      Output: 5
 ******************************************************************************/

int minAddToMakeValid(string s);
int bestSolution(string s);

int main(){
    string str = "(()))";
    cout << minAddToMakeValid(str) << endl;

    cout << minAddToMakeValid("(((((") << endl;
    cout << minAddToMakeValid(")))))") << endl;
    return 0;
}


int minAddToMakeValid(string s){
    stack<char> st;             //  Space --> O(N)
    int n = s.size();
    int count = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){

            }
            else{
                st.pop();
                count ++;
            }
        }
    }

    return n-2*count;
}



int bestSolution(string s) {
    int open = 0;
    int add = 0;                   //  Space --> O(1)

    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            open++;
        }
        else{
            if(open > 0){
                open--;
            }
            else{
                add++;
            }
        }
    }

    return add + open;
}
