#include <bits/stdc++.h>
using namespace std;

int main() {

int T;
    cout << "Enter the no of test cases : " ;
    cin >> T;
    while (T--) {
        cout << "Enter the String : " ;
        string S;
        cin >> S;
        stack<char> stk;
        bool isValid = true;
        for (char c : S) {
            if (c == '(') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    isValid = false;
                    break;
                }
                stk.pop();
            }
        }
        if (!stk.empty()) {
            isValid = false;
        }
        cout << (isValid ? 1 : 0) << endl;
    }
    return 0;

}
