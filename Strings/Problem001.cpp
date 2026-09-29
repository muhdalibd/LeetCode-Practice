#include <iostream>
using namespace std;

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