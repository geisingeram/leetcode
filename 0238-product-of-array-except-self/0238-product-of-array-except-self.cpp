class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans(n,1);
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     ans[i] *=nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
        
        int n = nums.size();
        vector<int> answer(n, 1);

        // Prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;   // product of all elements to the left
            prefix *= nums[i];
        }

        // Suffix products
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix; // multiply with product of all elements to the right
            suffix *= nums[i];
        }

        return answer;
    }
    
        
};