#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int buystock(vector<int>& v, int s) {
        stack<int> st;
        int count = 0;

        for (int i = 0; i < v.size(); i++) {
            if (!st.empty() && st.top() > v[i]) {
                st.pop();
                st.push(v[i]);
            } else if (!st.empty() && st.top() < v[i]) {
                int k = v[i] - st.top();
                count += k;
                st.pop();
                st.push(v[i]);
            } else if (st.empty()) {
                st.push(v[i]);
            }
        }

        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        vector<int> v(s);
        for (int i = 0; i < s; i++) {
            cin >> v[i];
        }

        Solution sol;
        int r = sol.buystock(v, s);

        cout << "Prices: ";
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
        cout << "Profit: " << r << endl;
    }
    return 0;
}
