#include <bits/stdc++.h>
using namespace std;
class Duplicate{
    public:

int FindDuplicate(vector<int>& v){
    unordered_map<int,int> u;

    for(int i:v){
        u[i]++;
        if(u[i]>1){
            return i;

        }
    }

    return -1;



}
};


int main(){
    int T;
    cout<<" Enter Number of test cases :" <<endl;
    cin>>T;
    while(T--){
        int size;
        cout<< " Enter the size of the arrey : "<<endl;
        cin>>size;
        vector<int> v(size);
        cout<<"Enter the arrey elements: "<<endl;
        for(int i =0;i<size;i++){
            cin>>v[i];
        }
        Duplicate d;
        int r = d.FindDuplicate(v);
        cout<<r<<endl;

    }



return 0;

}
