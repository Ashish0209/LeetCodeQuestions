class Solution {
public:
    int findLucky(vector<int>& arr) {
      unordered_map<int,int>freq;
        for(int i = 0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int ans = -1;
        for(int i = 1;i<=arr.size();i++){
            if(freq[i] == i){
                ans = i;
            }
        }
        return ans;
        }
};