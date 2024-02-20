///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    string s;
    cin>>s;
    int num[10]={0};

    if(s.size()==1 && s=="8")
    {
        cout<<"Yes"<<endl;
        return;
    }

    if(s.size()==2)
    {
        if((((s[0]-48)*10)+s[1]-48)%8==0 || (((s[1]-48)*10)+s[0]-48)%8==0)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }

    for(int i=0; i<s.size(); i++)
        num[s[i]-48]++;

    for(int i=1; i<10; i++)
    {
        if(num[i]<1)
            continue;

        num[i]--;

        for(int j=1; j<10; j++)
        {
            if(num[j]<1)
                continue;

            num[j]--;

            for(int k=1; k<10; k++)
            {
                if(num[k]<1)
                    continue;

                if(((i*100)+(j*10)+k)%8==0)
                {
                    cout<<"Yes"<<endl;
                    return;
                }
            }

            num[j]++;
        }

        num[i]++;
    }

    cout<<"No"<<endl;
}

int main()
{
    wow

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
