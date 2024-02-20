#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<string> fib;

void fibo_pre_calc()
{
    fib = {"0", "1", "1"};

    for(int n=3; n<=5005; n++)
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
    }

    for(int i=0; i<fib.size(); i++)
        reverse(fib[i].begin(), fib[i].end());
}

int main()
{
    noice

    fibo_pre_calc();
    int n;

    while(cin>>n)
        cout<<"The Fibonacci number for "<<n<< " is "<<fib[n]<<endl;

    return 0;
}
