#include <vector>

class Solution {
public:
    int triangularSum(std::vector<int>& nums) {
        while (nums.size() > 1) {
            std::vector<int> newNums;
            
            for (int i = 0; i < nums.size() - 1; ++i) {
                newNums.push_back((nums[i] + nums[i + 1]) % 10);
            }
            
            nums = newNums;
        }
        
        return nums[0];
    }
};
