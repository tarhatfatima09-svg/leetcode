#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s1 = "()";
    cout << "Test 1: "
         << (isValid(s1) ? "true" : "false") << endl;

    string s2 = "()[]{}";
    cout << "Test 2: "
         << (isValid(s2) ? "true" : "false") << endl;

    string s3 = "(]";
    cout << "Test 3: "
         << (isValid(s3) ? "true" : "false") << endl;

    string s4 = "([{}])";
    cout << "Test 4: "
         << (isValid(s4) ? "true" : "false") << endl;

    return 0;
}