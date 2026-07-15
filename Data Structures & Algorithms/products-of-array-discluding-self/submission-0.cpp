class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int prefix = 1;
        int suffix = 1;
        int product = 1;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size() - 1; j > i; j--){
                suffix *= nums[j]; 
            }
            product = prefix*suffix;
            result.push_back(product);
            prefix *= nums[i];
            suffix = 1;
        }

        return result;
    }
};
