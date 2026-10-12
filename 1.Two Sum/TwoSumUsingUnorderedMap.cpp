class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        // Store each number we have already visited and its index.
        // unordered_map gives average O(1) time for searching and inserting.
        unordered_map<int, int> seen;

        // Visit every element once. The index is 0-based.
        for (int i = 0; i < arr.size(); i++) {

            // Find the value that would complete the current number to target.
            int needed = target - arr[i];

            // If the needed value was seen earlier, we found the pair.
            if (seen.find(needed) != seen.end()) {
                // Return the earlier index first, then the current index.
                return {seen[needed], i};
            }

            // Save the current number and its index for future elements.
            seen[arr[i]] = i;
        }

        // No two values add up to target, so return an empty vector.
        return {};
    }
};