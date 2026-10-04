#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  345. Reverse Vowels of a String
 *  https://leetcode.com/problems/reverse-vowels-of-a-string/
 *
 *  Difficulty : Easy
 *  Topics     : Two Pointers, String
 *  Input      : "IceCreAm"      Output: "AceCreIm"
 *  Input      : "leetcode"      Output: "leotcede"
 ******************************************************************************/

bool isVowel(char ch){
    switch(ch){
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
            return true;
        default:
            return false;
    }
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.size()-1;
    while(i < j) {
        while(i < j && !isVowel(s[i])){
            i++;
        }
        while(i < j && !isVowel(s[j])){
            j--;
        }
        if(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main(){
    string str = "IceCreAm";
    cout << reverseVowels(str) << endl;
    
    cout << reverseVowels("leetcode") << endl;
    cout << reverseVowels("muhdalibd") << endl;
    return 0;
}
