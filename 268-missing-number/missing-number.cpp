class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        //sum through size of array 
        int n = nums.size();
        int ans = n *(n+1)/2;
        return ans-sum;
    }
};