#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "anagram";
    string t1 = "nagaram";

    if (isAnagram(s1, t1)) {
        cout << "Test 1: true" << endl;
    } else {
        cout << "Test 1: false" << endl;
    }

    string s2 = "rat";
    string t2 = "car";

    if (isAnagram(s2, t2)) {
        cout << "Test 2: true" << endl;
    } else {
        cout << "Test 2: false" << endl;
    }

    return 0;
}