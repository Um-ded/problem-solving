#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=1, cs=0;
    cin>>t;

    while(t--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3);
        cout<<"Case "<<++cs<<": ";

        if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
