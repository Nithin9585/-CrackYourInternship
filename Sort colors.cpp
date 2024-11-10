#include<bits/stdc++.h>

using namespace std;

class Color{
    public:

    void colorSort(vector<int>& v){

        for(int i = 0;i< v.size(); i++){
            int minidx = i;

            for(int j = i+1;j<v.size();j++){
                if(v[minidx]>v[j]){
                    minidx = j;
                }
            }


            if(minidx != i){
                swap(v[minidx],v[i]);
            }
        }



    }





};

int main(){
    int T;
    cin>>T;
    while(T--){
        int size;
        cin>>size;
        vector<int> v(size);
          vector<int> x(size);

        for(int i =0;i<size;i++){
            cin>>v[i];
            cin>>x[i];
        }
        Color c;

        c.colorSort(v);

        sort(x.begin(),x.end());
        cout<<" Expected : "<<endl;
        for(int i:x){
            cout<<i<<" ";
        }
        cout<<" Output : "<<endl;
        for(int i:v){
            cout<<i<<" ";
        }
    }



return 0;

}
