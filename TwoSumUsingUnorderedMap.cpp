class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        unordered_map<int, int> seen;

        for (int i = 0; i < arr.size(); i++) {

            int needed = target - arr[i];

            if (seen.find(needed) != seen.end()) {
                return {seen[needed], i};
            }

            seen[arr[i]] = i;
        }
        return {};
    }
};