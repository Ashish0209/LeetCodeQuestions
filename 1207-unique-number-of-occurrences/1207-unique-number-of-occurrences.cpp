class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<int>v;
        
        for(int i = 0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        
        for(auto i : freq){
            v.push_back(i.second);
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                return false;
            }
        }
        
        return true;
        
        
    }
};