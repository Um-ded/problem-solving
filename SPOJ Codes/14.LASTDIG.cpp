#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, last_digit[22][6]={0};

    for(int i=1; i<=20; i++)
    {
        int res=1;

        for(int j=1; j<=4; j++)
        {
            res *= i;
            last_digit[i][j] = res%10;
        }
    }

    cin>>t;

    while(t--)
    {
        int a;
        long long b;
        cin>>a>>b;

        if(a==0)
            cout<<0<<"\n";
        else if(b==0)
            cout<<1<<"\n";
        else
        {
            int bb = (int)(b%4);

            if(bb==0)
                bb = 4;

            cout<<last_digit[a][bb]<<"\n";
        }
    }

    return 0;
}
