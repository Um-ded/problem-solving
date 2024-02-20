#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt=0;
    string s;
    cin>>n>>s;
    map<char, int> mp;

    for(int i=0; i<n; i++)
    {
        if(mp[s[i]]==0)
            cnt++;

        mp[s[i]]++;
    }

    if(cnt==1)
    {
        if(mp['B'])
            cout<<'B'<<endl;
        else if(mp['G'])
            cout<<'G'<<endl;
        else
            cout<<'R'<<endl;
    }
    else if(cnt==2)
    {
        char a, b, c;

        if(mp['B']==0)
        {
            a = 'B';
            b = 'G';
            c = 'R';
        }
        else if(mp['G']==0)
        {
            a = 'G';
            b = 'R';
            c = 'B';
        }
        else
        {
            a = 'R';
            b = 'B';
            c = 'G';
        }

        if(mp[b]>1 && mp[c]>1)
            cout<<"BGR"<<endl;
        else
        {
            if(mp[b]==1 && mp[c]==1)
            {
                cout<<a<<endl;
            }
            else if(mp[b]==1)
            {
                if(a>b)
                    swap(a, b);

                cout<<a<<b<<endl;
            }
            else
            {
                if(a>c)
                    swap(a, c);

                cout<<a<<c<<endl;
            }
        }
    }
    else
        cout<<"BGR"<<endl;

    return 0;
}
