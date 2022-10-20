class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod = nums[0];
        int minprod = nums[0];
        int result = nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] < 0){
                int temp = minprod;
                minprod = maxprod;
                maxprod = temp;
            }
            
            maxprod = max(maxprod*nums[i] , nums[i]);
            minprod = min(minprod*nums[i] , nums[i]);
            result = max(maxprod,result);
        }
        return result;
    }
};