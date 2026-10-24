
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {

            // Step 1: Initialize frequency array
            int count[26] = {0};

            // Step 2: Count character occurrences
            for (char c : s) {
                count[c - 'a']++;
            }

            // Step 3: Convert frequency array into a unique key
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            // Step 4: Group original strings using their key
            mp[key].push_back(s);
        }

        // Step 5: Build the result
        vector<vector<string>> result;

        for (auto& pair : mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};
