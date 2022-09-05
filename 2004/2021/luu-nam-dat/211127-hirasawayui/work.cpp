#include <iostream>
using namespace std;
const int N=1e6+7;
int n, a[N], b=1, res=1;
int main(){
    cin>>n;
    for(int i=0; i<n; i++)
    cin>> a[i];

    for (int i=1; i<n; i++){
        if (a[i]>=a[i-1]){
        b++;
        res=max(res, b);
        }else{
            b=1;
        }
    }
    cout<<res;
    return 0;

}
