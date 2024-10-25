#include<bits/stdc++.h>
using namespace std;
void test(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(-(2*i-1)<-n){
            cout<<"Sakurako"<<"\n";
            break;

        }
        if(2*i+1-1>n){
            cout<<"Kosuke"<<"\n";
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        test();
    }
}