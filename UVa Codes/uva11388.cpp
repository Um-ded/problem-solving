#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
    {
        int g, l;
        cin>>g>>l;

        if(l%g)
            cout<<-1<<endl;
        else
            cout<<g<<SS<<l<<endl;
    }

    return 0;
}
