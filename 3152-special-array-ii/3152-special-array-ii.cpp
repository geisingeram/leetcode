class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
      int n=nums.size();
        vector<int>prefix(n,0);
        for(int i=1;i<n;++i){
            prefix[i]=prefix[i-1]+((nums[i]%2)!=(nums[i-1]%2));
        }
        vector<bool>ans;
        for(const auto&q:queries){
            ans.push_back((prefix[q[1]]-prefix[q[0]])==(q[1]-q[0]));
        }
        return ans;
    }
};