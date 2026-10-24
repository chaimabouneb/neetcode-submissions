class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int num : nums){
            freq[num]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& pair : freq){
            int num = pair.first;
            int frequency = pair.second;
            buckets[frequency].push_back(num);
        }

vector<int> result;

        for (int i = buckets.size() - 1; i >= 1; i--) {

            for (int num : buckets[i]) {

                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }

};
