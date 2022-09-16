class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,r;
        int element = n;
        while(element>0){
            r = element%10; 
            product = product*r;
            element = element/10;
        }
        
        int sum=0;
        while(n>0){
            r = n%10; 
            sum = sum+r;
             n = n/10; 
        }
        
        
        return product-sum;
        
        
        
    }
};