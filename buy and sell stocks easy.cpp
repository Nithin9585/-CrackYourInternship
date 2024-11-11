#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxprofit(vector<int>& v){
      int mini = INT_MAX;
      int maxi = 0;

      for(int i :v){
        mini = min(i,mini);
        maxi = max(maxi,i-mini);
      }
      return maxi;
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
       Solution sol;
       int profit = sol.maxprofit(v);
       cout<<"profit : "<<profit<<endl;

    }
    return 0;
};
