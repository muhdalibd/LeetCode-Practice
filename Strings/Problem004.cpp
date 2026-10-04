#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  2011. Final Value of Variable After Performing Operations
 *  https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 *
 *  Difficulty : Easy
 *  Topics     : Array, String
 *  Input      : ["--X","X++","X++"]      Output: 1
 *  Input      : ["++X","++X","X++"]      Output: 3
 ******************************************************************************/

int finalValueAfterOperations(vector<string>& s){
    int X = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == "X++" || s[i] == "++X"){
            X += 1;
        }
        else{
            X -= 1;
        }
        // X += (s[i][1] == '+') ? 1 : -1;
    }
    return X;
}

int main(){
    vector <string> op1{"--X", "X++", "X++"};
    cout << finalValueAfterOperations(op1) << endl;

    vector<string> op2{"++X", "++X", "X++"};
    cout << finalValueAfterOperations(op2) << endl;

    vector<string> op3{"++X", "++X", "X++", "--X", "X--"};
    cout << finalValueAfterOperations(op3) << endl;
    return 0;
}
