#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  1678. Goal Parser Interpretation
 *  https://leetcode.com/problems/goal-parser-interpretation/
 *
 *  Difficulty : Easy
 *  Topics     : String
 *  Input      : "G()(al)"            Output: "Goal"
 *  Input      : "G()()()()(al)"      Output: "Gooooal"
 *  Input      : "(al)G(al)()()G"     Output: "alGalooG"
 ******************************************************************************/

string interpret(string s){
    string ans;
    for(int i=0; i<s.size(); ){
        if(s[i]=='G'){
            ans.push_back('G');
            i++;
        }
        else if(s[i]=='(' && s[i+1]==')'){
            ans.push_back('o');
            i+=2;
        }
        else{
            ans.append("al");
            i+=4;
        }
    }
    return ans;
}

int main(){
    string str = "G()()()()(al)";
    cout << interpret(str) << endl;

    cout << interpret("(al)G(al)()()G") << endl;
    return 0;
}
