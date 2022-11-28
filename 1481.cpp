class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans; 
        for (int j= 0 ; j<nums.size(); j++){
            int sum = 0;

            for (int i =0 ; i<=j; i++){
                  sum = sum+nums[i]; 
            }   
            ans.push_back(sum); 
        }
        return ans; 
    }
};