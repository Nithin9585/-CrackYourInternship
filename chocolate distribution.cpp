#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int finddiff(vector<int>& v,int m){
      if(v.size()<m)return 0;
      sort(v.begin(),v.end());
 int minDiff = INT_MAX;

        for (int i = 0; i <= v.size() - m; i++) {
            int diff = v[i + m - 1] - v[i];
            minDiff = min(minDiff, diff);
        }

        return minDiff;
  }

};

int main() {
    cout << "Enter the number of test cases: " << endl;
    int t;
    cin >> t;
    while (t--) {
       int s;
       cin>>s;
       vector<int> v(s);
       for(int i=0;i<s;i++){
        cin>>v[i];
       }
       int m =5;
       Solution sol;
       int r = sol.finddiff(v,m);
       cout<<"result : "<<r<<endl;

    }
    return 0;
};
