class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0,end =n-1,mid,index;
        while(start<=end){
            mid =start +(end-start)/2;
            if(nums[mid]==target){
                index =mid;
                break;
            }
            else if(nums[mid]<target){
                start = mid +1;
            }
            else{
                index =mid;
                end = mid -1;
            }
        }
        return index;
    }
};