#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define sz           10001
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool arr[sz];

void sieve()
{
    int i, j;
    arr[0] = 1;

    for(i=4; i<sz; i+=2)
        arr[i] = 1;

    for(i=3; (i*i)<sz; i+=2)
        if(!arr[i])
            for(j=(i*i); j<sz; j+=(i+i))
                arr[j] = 1;
}

int main()
{
    noice

    sieve();
    string s;

    while(cin>>s)
    {
        int cnt = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                cnt += s[i]-38;
            else
                cnt += s[i]-96;
        }

        if(!arr[cnt])
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }

    return 0;
}
