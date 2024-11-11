#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> TwoSum(vector<int>& v,int target){
      unordered_map<int,int> u;

      for(int i =0;i<v.size();i++){
        u[v[i]] = i;
      }


      for(int i = 0;i<v.size();i++){
        int s = target - v[i];

        if(u.find(s)!=u.end()){
            return {i , u[s]};
        }
      }

      return {-1,-1};
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
       cout<<" Enter the target : " <<endl;
       int target;
       cin>>target;
       Solution sol;
       vector<int> u= sol.TwoSum(v,target);

       cout<<"result : "<<u[0]<<","<<u[1]<<endl;

    }
    return 0;
};
