class Solution {
public:
    int climbStairs(int n) {
        
        int x = 1,y =2,ans;
        if(n==1){
            return x;
        }
        if(n==2){
            return y;
        }
        
        for(int i = 2;i<n;i++){
            ans = x+y;
            x=y;
            y=ans;
        }
        
        return ans;
        
    }
};