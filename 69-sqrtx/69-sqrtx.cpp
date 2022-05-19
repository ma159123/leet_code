class Solution {
public:
    int mySqrt(int x) {
        
        if(x==1){
            return 1;
        }
        long long low=0,high=x,mid,ans;
        
        while(low<=high){
            mid=(low+high)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x){
                high=mid-1;
            }else if(mid*mid<x){
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};