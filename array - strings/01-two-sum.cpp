#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

 
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen; // value -> index
    for (int i = 0; i < (int)nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.count(complement))
            return {seen[complement], i};
        seen[nums[i]] = i;
    }
    return {};
}

// Test Helper 
void printResult(const string& label, vector<int> result) {
    cout << label << ": [" << result[0] << ", " << result[1] << "]" << endl;
}

// Test Cases
int main() {
    // Test 1 — Typical case
    // Input: nums = [2, 7, 11, 15], target = 9
    // Expected output: [0, 1]  (because nums[0] + nums[1] = 2 + 7 = 9)
    vector<int> nums1 = {2, 7, 11, 15};
    printResult("Test 1 (expected [0,1])", twoSum(nums1, 9));

    // Test 2 — Edge case: answer is not at index 0
    // Input: nums = [3, 2, 4], target = 6
    // Expected output: [1, 2]  (because nums[1] + nums[2] = 2 + 4 = 6)
    vector<int> nums2 = {3, 2, 4};
    printResult("Test 2 (expected [1,2])", twoSum(nums2, 6));

    return 0;
}
