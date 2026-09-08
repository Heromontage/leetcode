class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        if(n>=1000 && n<=100000){
            return n-1000+1;
        }
        if(n>100000 && n<=1000000){
            return 2*(n-100000+1);
        }
        return 0;
    }
};