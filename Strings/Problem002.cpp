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
void print(vector<char>& s1);

int main(){
    vector<char> s1 {'h','a','n','n','a','h'};

    reverseString(s1);
    print(s1);

    vector<char> s2 {'r','a','c','e','c','a', 'r'};

    reverseString(s2);
    print(s2);
    return 0;
}


void print(vector<char>& s1){
    for(int i=0; i<s1.size(); i++){
        cout << s1[i] <<" ";
    }
    cout << endl;
}