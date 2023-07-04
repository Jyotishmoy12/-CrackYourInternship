class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Case 1: If there are only three numbers in the array, return their product
        if (n == 3) {
            return nums[0] * nums[1] * nums[2];
        }
        
        // Case 2: If all numbers are positive or all numbers are negative, return the product of the three largest numbers
        if (nums[0] >= 0 || nums[n - 1] <= 0) {
            return nums[n - 1] * nums[n - 2] * nums[n - 3];
        }
        
        // Case 3: Return the maximum product of two smallest numbers and the largest number
        return max(nums[0] * nums[1] * nums[n - 1], nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};
