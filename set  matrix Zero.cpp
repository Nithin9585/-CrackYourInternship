#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findZeros(vector<vector<int>>& v) {
        int m = v.size();
        if (m == 0) return;
        int n = v[0].size();

        stack<pair<int, int>> st;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == 0) {
                    st.push({i, j});
                }
            }
        }

        while (!st.empty()) {
            int r = st.top().first;
            int c = st.top().second;
            st.pop();

            for (int k = 0; k < m; k++) {
                v[k][c] = 0;
            }
            for (int k = 0; k < n; k++) {
                v[r][k] = 0;
            }
        }
    }
};

int main() {
    cout << "Enter the number of test cases: " << endl;
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cout << "Number of rows and columns in the matrix: " << endl;
        cin >> m >> n;

        vector<vector<int>> v(m, vector<int>(n));

        cout << "Enter the values: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }

        Solution s;
        s.findZeros(v);

        cout << "Resulting matrix: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
