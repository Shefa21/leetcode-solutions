#include <vector>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Iterate through the digits from right to left
        for (int i = n - 1; i >= 0; --i) {
            // Increment the current digit
            digits[i]++;
            
            // Check if it becomes 10, set to 0 and continue with the next digit
            if (digits[i] == 10) {
                digits[i] = 0;
            } else {
                // If the digit is less than 10, no need to continue
                return digits;
            }
        }
        
        // If we reach here, it means the leftmost digit became 10, add a new digit to the left
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
