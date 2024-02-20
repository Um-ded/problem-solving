/// This is one of the most beautiful problems I've ever solved!
#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<string> fib;
int n = 3;

int fibo_pre_calc()
{
    fib = {"Um_ded", "1", "2"};

    while(1)
    {
        string cur;
        int carry = 0;

        for(int i=0; i<fib[n-1].size(); i++)
        {
            int sum;

            if(i<fib[n-2].size())
                sum = (fib[n-2][i]-'0')+(fib[n-1][i]-'0')+carry;
            else
                sum = (fib[n-1][i]-'0')+carry;

            carry = sum/10;
            sum %= 10;
            cur.pb(sum+'0');
        }

        while(carry)
        {
            cur.pb((carry%10)+'0');
            carry /= 10;
        }

        fib.pb(cur);

        if(cur.size()>101)
            break;

        n++;
    }

    int szn = fib[n].size();

    for(int i=1; i<=n; i++)
    {
        int szi = fib[i].size();

        for(int j=1; j<=(szn-szi); j++)
            fib[i].pb('0');

        reverse(fib[i].begin(), fib[i].end());
    }

    return szn;
}

int main()
{
    noice

    int szn = fibo_pre_calc();
    string a, b;

    while(cin>>a>>b)
    {
        if(a=="0" && b=="0")
            break;

        int sza = a.size();
        int szb = b.size();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for(int i=1; i<=(szn-sza); i++)
            a.pb('0');

        for(int i=1; i<=(szn-szb); i++)
            b.pb('0');

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int l = lower_bound(fib.begin()+1, fib.end(), a)-fib.begin();/// Used fib.begin()+1 because I added Um_ded in fib.begin() :p
        int r = upper_bound(fib.begin()+1, fib.end(), b)-fib.begin();/// Used fib.begin()+1 because I added Um_ded in fib.begin() :p
        int ans = r-l;
        cout<<ans<<endl;
    }

    return 0;
}
