///This is Mitu's code. She solved this problem from our team
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,t,i,j;
    cin>>n;
    ll a[2*n], b[2*n], m = LLONG_MAX;
    for(i=0;i<2*n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    bool ok;
    for(j=1;j<=2*n;j++){
        ok = true;
        for(i=0;i<2*n;i++){
            if(a[i]!=i+1){
                ok = false;
                break;
            }
        }
        if(ok){
            m = min(m,j-1);
            break;
        }
        if(j%2){
            for(i=0;i<2*n-1;i+=2){
                swap(a[i],a[i+1]);
            }
        }
        else{
            for(i=0;i<n;i++){
                swap(a[i],a[n+i]);
            }
        }
    }
    for(j=1;j<=2*n;j++){
        ok = true;
        for(i=0;i<2*n;i++){
            if(b[i]!=i+1){
                ok = false;
                break;
            }
        }
        if(ok){
            m = min(m,j-1);
            break;
        }
        if(j%2==0){
            for(i=0;i<2*n-1;i+=2){
                swap(b[i],b[i+1]);
            }
        }
        else{
            for(i=0;i<n;i++){
                swap(b[i],b[n+i]);
            }
        }
    }
    if(!ok){
        cout<<"-1"<<endl;
    }
    else{
        cout<<m<<endl;
    }
    return 0;
}
