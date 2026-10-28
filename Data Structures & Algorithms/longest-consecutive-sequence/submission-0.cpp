class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (int num : s) {

            if (!s.contains(num - 1)) {

                int length = 1;
                int current = num;
                while (s.contains(current + 1)) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};