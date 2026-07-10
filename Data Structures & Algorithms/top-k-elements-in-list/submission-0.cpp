class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> minHeap;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        for(auto pair : count){
            minHeap.push({pair.second, pair.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        for(int l = 0; l < k; l++){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
