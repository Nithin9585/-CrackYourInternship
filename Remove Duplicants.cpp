#include<bits/stdc++.h>

using namespace std;

class D {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s;
        cin >> s;

        vector<int> v(s);
        for(int i = 0; i < s; i++) {
            cin >> v[i];
        }

        D d;
        int r = d.removeDuplicates(v);
        cout << r << endl;
    }
    return 0;
}
