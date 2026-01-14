// https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int length = nums.size();
        int i;
        for (i = 0; i<length-1; i++)
        {
            for (int j = 0; j<length-1; j++)
            {
                if (nums[j]==0 && nums[j+1]!=0)
                {
                    nums[j] = nums[j+1];
                    nums[j+1] = 0;
                }
            }
        }
    }
};