class Solution {
    int first_occurence(vector<int>& nums,int target){
        int start = 0,end = nums.size()-1,mid;
        int first=-1;
        while(start<=end){
            mid =start +(end-start)/2;
            if(nums[mid]==target){
                //store the value of mid as first and then go left 
                first = mid;
                end = mid -1;
            }
            else if(nums[mid]<target){
                // go right side 
                start = mid + 1;
            }
            else{
                //go left side 
                end = mid -1;
            }
        }
        return first;
    }
    int last_occurence(vector<int>& nums,int target){
        int start = 0,end = nums.size()-1,mid;
        int last=-1;
        while(start<=end){
            mid =start +(end-start)/2;
            if(nums[mid]==target){
                //store the value of mid as lasst and then go right 
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid]>target){
                // go left side 
                end = mid - 1;
            }
            else{
                //go right side 
                start = mid + 1;
            }
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = first_occurence(nums,target);
        int last = last_occurence(nums,target);
        vector<int>a;
        a.push_back(first);
        a.push_back(last);
        return a;
    }
};