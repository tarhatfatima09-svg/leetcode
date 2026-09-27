#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;

        while (j < prefix.length() &&
               j < strs[i].length() &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix = prefix.substr(0, j);

        if (prefix.empty()) {
            return "";
        }
    }

    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};

    cout << "Test 1: " << longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Test 2: " << longestCommonPrefix(strs2) << endl;

    return 0;
}