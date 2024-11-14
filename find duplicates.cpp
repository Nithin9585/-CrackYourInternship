#include <bits/stdc++.h>

using namespace std;
class Solution{


    vector<int> FindDuplicates(vector<int> &v){
        vector<int> r;
        if(v.size()<2)return r;

        for(int i =1;i<v.size();i++){
            if(v[i]==v[i-1]){
                r.push_back(v[i]);
            }
        }
        return r;

    }

};

int main()
{
    int t;
    cin>>t;
    while(t--){#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int> r;
        if (v.size() < 2) return r;

        // Sort the vector to bring duplicates together
        sort(v.begin(), v.end());

        // Find duplicates
        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                // Add duplicate to result only if it's not already added
                if (r.empty() || r.back() != v[i]) {
                    r.push_back(v[i]);
                }
            }
        }
        return r;
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
        vector<int> r = sol.findDuplicates(v);

        if (r.empty()) {
            cout << "No duplicates found" << endl;
        } else {
            for (int i : r) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

        int s;
        cin>>s;

        vector<int> v(s);
        for(int i =0;i<s;i++){
            cin>>v[i];
        }

        Solution sol;
      vector<int> r= sol.FindDuplicates(v);

      for(int i:r){
        cout<<i<< " ";
      }


    }
    return 0;
}
