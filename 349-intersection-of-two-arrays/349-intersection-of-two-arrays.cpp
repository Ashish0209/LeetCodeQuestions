class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        set<int> s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<m && j<n){
         if(nums1[i]>nums2[j]){
              j++;
         }
         else if(nums1[i]==nums2[j]){
             s.insert(nums1[i]);
             i++;
             j++;
         }
         else{
            i++;
         }
        
    }
        for(auto i : s){
            ans.push_back(i);
        }
        
        
        
        // ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
         return ans;
    }
};

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//      vector<int>ans;
//         set<int>s;
//         sort(nums1.begin(),nums1.end());
//          sort(nums2.begin(),nums2.end());
//         int i=0,j=0;
      
//         while(i<nums1.size() && j<nums2.size()){
//                 if(nums1[i]<nums2[j])
//                     i++;
//                 else if(nums1[i]==nums2[j]){
//                     s.insert(nums1[i]);
//                     i++;
//                     j++;
//                 }
//                 else
//                     j++;         
//             }
//         for(auto i:s){
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };