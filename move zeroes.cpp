#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void sortZeros(vector<int>& v){
      int minidx =0;
      for(int i =0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[minidx]);
            minidx++;
        }
      }
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
    for(int i =0;i<s;i++){
        cin>>v[i];
    }
Solution sol;
    sol.sortZeros(v);

    for(int i:v){
        cout<<i<<" ";
    }

    }
    return 0;
}
