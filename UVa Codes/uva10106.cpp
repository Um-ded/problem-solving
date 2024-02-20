///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    string a, b;

    while(cin>>a>>b)
    {
        if(a=="0" || b=="0")
        {
            cout<<0<<endl;
            continue;
        }

        string c;
        int sza = a.size();
        int szb = b.size();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if(sza<szb)
        {
            swap(a, b);
            swap(sza, szb);
        }

        for(int i=0; i<(sza+szb); i++)
            c.pb('0');

        for(int i=0; i<szb; i++)
        {
            int k=i, carry = 0;

            for(int j=0; j<sza; j++)
            {
                int prod = ((b[i]-'0')*(a[j]-'0'))+carry;
                carry = prod/10;
                prod %= 10;
                prod += (c[k]-'0');

                if(prod>9)
                {
                    carry += prod/10;
                    prod %= 10;
                }

                c[k++] = prod+'0';
            }

            while(carry)
            {
                int addend = (carry%10)+(c[k]-'0');
                carry /=10;

                if(addend>9)
                {
                    carry += addend/10;
                    addend %= 10;
                }

                c[k++] = addend+'0';
            }
        }

        while(c.back()=='0')
            c.ppb();

        reverse(c.begin(), c.end());
        cout<<c<<endl;
    }
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
