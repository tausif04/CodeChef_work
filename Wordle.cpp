#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
        string S,T,M="";
        cin>>S>>T;
        for(int i=0;i<S.size();i++){
         if(S[i]==T[i]){
            M.push_back('G');
         }else{
             M.push_back('B');
         }
        }
        cout<<M<<endl;
    }

}
