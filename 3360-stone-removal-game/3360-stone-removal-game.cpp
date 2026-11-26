class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){return false;}

        int l = 10;
        bool alice = true;
        while(l>0){
            if(n<l){
                return !alice;
            }
            n-=l;
            l--;
            alice = !alice;
        }
        return !alice;
    }
};