///https://leetcode.com/problems/3sum/submissions/1261620592/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>final;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        
        for(int i = 0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            
            int left = i+1; 
            int right = len-1;
            
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum==0){
                        final.push_back({nums[i],nums[left],nums[right]});
                        while(left<right && nums[left]==nums[left+1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(sum<0){
                    
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        
     
     
     return final;
    }
    
    
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution s;
    vector<int>v = {0,0,0,0};
    
    s.threeSum(v);
    
    return 0;
}
