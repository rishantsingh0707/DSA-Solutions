
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Step 1: Sort the array in ascending order
        sort(nums.begin(), nums.end());

        // Step 2: Store all valid triplets
        vector<vector<int>> res;

        // Store the size of the array
        int n = nums.size();

        // Step 3: Select the first number
        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first numbers
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Step 4: Initialize two pointers
            int left = i + 1;
            int right = n - 1;

            // Search for the other two numbers
            while (left < right) {

                // Calculate the sum of three numbers
                int sum = nums[i] + nums[left] + nums[right];

                // If the sum is too small
                if (sum < 0) {
                    left++;
                }

                // If the sum is too large
                else if (sum > 0) {
                    right--;
                }

                // If the sum equals zero
                else {
                    res.push_back({
                        nums[i], nums[left], nums[right]
                    });

                    // Move both pointers
                    left++;
                    right--;

                    // Skip duplicate left values
                    while (left < right &&
                           nums[left] == nums[left - 1]) {
                        left++;
                    }

                    // Skip duplicate right values
                    while (left < right &&
                           nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }

        // Step 5: Return all valid triplets
        return res;
    }
};
