#include <iostream>
using namespace std;

/*
    [3110. Score of a String](https://leetcode.com/problems/score-of-a-string/description/?envType=problem-list-v2&envId=0e4v2epd)
*/

int scoreOfString(string s) {
    int sum = 0;
    for(int i=0; i<s.size()-1; i++){
        int curr = s[i];
        int next = s[i+1];
        sum += abs(curr-next);
    }
    return sum;
}

int main(){
    string str = "hello";
    cout << scoreOfString(str) << endl;

    cout << scoreOfString("zaz") << endl;
    return 0;
}