#include<iostream>
using namespace std;

const int N=2e6+7;
int n, a[N], b[N],x,sum1,sum2;

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin >>a[i];
    cin>>x;

    for(int i=0;i<x;i++){
        sum1+=a[i];
    }
    sum1=sum1/x;
    for(int i=1;i<=n;i++){
        sum2+=a[x+i];
    }
    sum2=sum2/n;
    if(sum1>sum2){
        cout<<"L<R";
    }else if(sum1<sum2){
        cout<<"L>R";
    }else{
        cout<<"L=R";
    }
    return 0;



}
