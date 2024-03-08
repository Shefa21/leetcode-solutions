#include <vector>

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Initialize the result with the first element
        vector<int> result = {1};
        
        // Generate the Pascal's triangle up to rowIndex
        for (int i = 1; i <= rowIndex; ++i) {
            // Use the result from the previous iteration to generate the current row
            vector<int> currentRow;
            
            // The first element of each row is always 1
            currentRow.push_back(1);
            
            // Generate the middle elements by summing the adjacent elements from the previous row
            for (int j = 1; j < i; ++j) {
                currentRow.push_back(result[j - 1] + result[j]);
            }
            
            // The last element of each row is always 1
            currentRow.push_back(1);
            
            // Update the result with the current row
            result = currentRow;
        }
        
        return result;
    }
};
