class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int prefix = 1;
        int suffix = 1;
        int product = 1;
        
        for(int i = 0; i < nums.size(); i++){
            product = prefix;
            result.push_back(product);
            prefix *= nums[i];
        }
        for(int j = nums.size() - 1; j > 0; j--){
            suffix *= nums[j];
            result[j-1] *= suffix;
            // suffix = 1;
        }

        return result;
    }
};
