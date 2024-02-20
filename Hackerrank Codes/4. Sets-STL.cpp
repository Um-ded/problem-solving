#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    set<int> s;

    while(q--)
    {
        int typ, x;
        cin>>typ>>x;

        if(typ==1)
            s.insert(x);
        else if(typ==2)
            s.erase(x);
        else
        {
            if (s.find(x)!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
