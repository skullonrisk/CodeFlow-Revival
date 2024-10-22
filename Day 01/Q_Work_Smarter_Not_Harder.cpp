#include<iostream>
using namespace std;
void test(){
    float l,v1,v2;
    cin>>l>>v1>>v2;
    float T=l/v1;
    float H=l/v2;
    int t=T;
    int h=H;
    if(T-(int)T>0){
        t=t+1;
    }
    if(H-(int)H>0){
        h=h+1;
    }
    if(t>h){
        if(t-h>1){
            cout<<t-h-1<<"\n";
        }
        else
        cout<<0<<"\n";
    }
    else
    cout<<-1<<"\n";
  



}
int main(){
    int t;
    cin>>t;
    while(t--){
        test();
    }
}