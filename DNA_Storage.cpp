#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,a="";
        cin>>s;
        for(int i=0;i<n;i+=2){
        if(s[i]=='0'&&s[i+1]=='0'){
            a += "A";
        }
        else if(s[i]=='0'&&s[i+1]=='1'){
            a += "T";
        }
        else if(s[i]=='1'&&s[i+1]=='0'){
            a += "C";
        }else{
            a+="G";
        }
        }
        cout<<a<<endl;
    }
}