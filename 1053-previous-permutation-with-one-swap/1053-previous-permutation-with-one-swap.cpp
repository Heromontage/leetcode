class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        int peak = -1;
        for(int i = n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                peak = i;
                break;
            }
        }
        if(peak!=-1){
            int second = -1;
            for(int i = n-1;i>peak;i--){
                if(arr[i]<arr[peak]){
                    if(second == -1 || arr[second]<=arr[i]){
                        second = i;
                    }
                }
            }
            swap(arr[peak],arr[second]);
        }
        return arr;

    }
};