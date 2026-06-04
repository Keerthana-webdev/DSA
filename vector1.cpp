#include <iostream>
#include <vector>
using namespace std;

// Function to find single number {leetcode 136 problem}
int singleNumber(vector<int>& nums){
    int ans = 0;

    for (int val : nums){
        ans = ans ^ val;
    }

    return ans;
}

// Function to find maximum subarray sum or Kadane's Algorithm {leetcode 53 problem}
int maxSubArray(vector<int>& nums){
    int currSum = 0, maxSum = INT_MIN;

    for (int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if (currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){
    // Single Number
    vector<int> nums1 = {2, 2, 1};

    cout << "Single Number = "
         << singleNumber(nums1) << endl;

    // Maximum Subarray
    vector<int> nums2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = "
         << maxSubArray(nums2);

    return 0;
}