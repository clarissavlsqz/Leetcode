class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return getMaxSubArray(nums, 0, nums.size()-1);
    }
    
    int getMaxSubArray(vector<int>& nums, int low, int high) {
        if(low == high){
            return nums[low];
        }
        int mid = (low+high)/2;
        int left = getMaxSubArray(nums, low, mid);
        int right = getMaxSubArray(nums, mid+1, high);
        int middle = getMiddleMaxSubArray(nums, low, mid, high);
        return max(max(left, right), middle);
    }
    
    int getMiddleMaxSubArray(vector<int>& nums, int low, int mid, int high) {
        int leftMax = -100000;
        int leftSum = 0;
        for (int i = mid; i >= low; i--) {
            leftSum += nums[i];
            if (leftSum > leftMax) {
                leftMax = leftSum;
            }
        }
        
        int rightMax = -100000;
        int rightSum = 0;
        for (int i = mid + 1; i <= high; i++) {
            rightSum += nums[i];
            if (rightSum > rightMax) {
                rightMax = rightSum;
            }
        }
        
        return leftMax + rightMax;
    }
};
