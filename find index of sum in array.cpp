#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map; // To store numbers and their indices
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Find the complement
        
        // If the complement is found in the map, return the indices
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        
        // Store the current number and its index in the map
        map[nums[i]] = i;
    }
    
    return {}; // Return an empty vector if no solution is found (not expected per the problem statement)
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15}; // Input array
    int target = 9; // Target sum
    
    std::vector<int> result = twoSum(nums, target); // Call the function
    
    // Print the result
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    
    return 0;
}
