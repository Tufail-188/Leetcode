class Solution {
public:
    int trailingZeroes(int n) {
        //main logic : divide the number by 5,if quotient is less than 5 return the answer else(5 or greter 5 ): again divide the quotient with 5
        int count = 0;
        while(n>=5){
            count = count + n/5;
            n = n/5;
        }
        return count;
    }
};