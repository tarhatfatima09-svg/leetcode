#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int position = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < nums.size()) {
        nums[position] = 0;
        position++;
    }
}

void printArray(vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];

        if (i < nums.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums1 = {0, 1, 0, 3, 12};

    cout << "Before: ";
    printArray(nums1);

    moveZeroes(nums1);

    cout << "After: ";
    printArray(nums1);

    return 0;
}