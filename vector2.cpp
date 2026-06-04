#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// //pair sum[brute force approach]
// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
    
//     vector<int> ans = pairSum(nums, target); //pair sum[brute force approach]
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }

//BRUTE FORCE APPROACH
int majorityBruteForce(vector<int>& nums) {
    int n = nums.size();

    for (int val : nums) {
        int freq = 0;

        for (int el : nums) {
            if (el == val) {
                freq++;
            }
        }

        if (freq > n / 2) {
            return val;
        }
    }

    return -1;
}

//OPTIMIZED APPROACH USING HASHING
int majorityHashing(vector<int>& nums) {
    int n = nums.size();

    //sort
    sort(nums.begin(), nums.end());

    //freq count
    int freq =1 , ans= nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans= nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return -1;
}

//MOORE'S VOTING ALGORITHM
int majorityMoore(vector<int>& nums) {
    int freq=0, ans=0;
    
    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    int count =0;
    int n = nums.size();
    
    for (int val: nums){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2){
        return ans;
    }else {
        return -1;
    }
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};
    int n = nums.size();

    cout << "Brute Force Answer      : "
         << majorityBruteForce(nums) << endl;

    cout << "Optimized Approach Answer : "
         << majorityHashing(nums) << endl;

    cout << "Moore Voting Answer     : "
         << majorityMoore(nums) << endl;

    return 0;
}