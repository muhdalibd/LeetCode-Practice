#include <bits/stdc++.h>
using namespace std;

/******************************************************************************
 *  2778. Sum of Squares of Special Elements 
 *  https://leetcode.com/problems/sum-of-squares-of-special-elements/
 *
 *  Difficulty : Easy
 *  Topics     : Array
 *  Input      : [2,7,1,19,18,3]      Output: 63
 *  Input      : [1,2,3,4]            Output: 21
 ******************************************************************************/

int sumOfSquare(vector<int>& nums);

int sumOfSquares(vector<int>& nums){
    int sum = 0;
    int n = nums.size();

    for(int i=1; i*i<=n; i++){
        if(n % i == 0) {
            sum += (nums[i-1]*nums[i-1]);
            if (i*i != n){
                int paired_divisor = n/i;
                sum += (nums[paired_divisor-1] * nums[paired_divisor-1]);
            }
        }
    }

    return sum;
}

int main(){
    vector <int> nums = {2,7,1,19,18,3};
    cout << sumOfSquares(nums) << endl;

    vector <int> arr = {1,2,3,4};
    cout << sumOfSquares(arr) << endl;

    return 0;
}


int sumOfSquare(vector<int>& nums){
    int sum = 0;
    int n = nums.size();
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            sum  += (nums[i-1]*nums[i-1]);
        }
    }
    return sum;
}
