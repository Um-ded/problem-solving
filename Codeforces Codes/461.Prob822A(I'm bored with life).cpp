#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    noice

    int a, b;
    cin>>a>>b;
    int mn = min(a, b);
    int ans = 1;

    for(int i=1; i<=mn; i++)
        ans *= i;

    cout<<ans<<endl;
    return 0;
}
