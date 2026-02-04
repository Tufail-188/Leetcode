class Solution {
public:
    int mySqrt(int x) {
        //using Binary Search algo to solve 
        int start =0,end =x,sqrt;
        double mid;
        while(start<=end){
            mid = start + (end-start)/2;
            if((long long )mid * mid == x){
                return mid;
            }
            else if((long long )mid * mid < x){
                // go right side to find sqrt 
                sqrt = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return sqrt;
    }
};