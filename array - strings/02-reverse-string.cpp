#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

void printString(vector<char> s) {
    cout << "[";
    for (int i = 0; i < s.size(); i++) {
        cout << "\"" << s[i] << "\"";
        if (i < s.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Before: ";
    printString(s);

    reverseString(s);

    cout << "After: ";
    printString(s);

    return 0;
}