#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long   ll;

bool balance(char a, char b)
{
    if(a=='(' && b==')')
        return true;
    else if(a=='{' && b=='}')
        return true;
    else if(a=='[' && b==']')
        return true;
    else
        return false;
}

void solve()
{
    string s;
    cin>>s;
    bool balanced = true;
    stack<char> stk;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
        else
        {
            if(stk.empty())
            {
                balanced = false;
                break;
            }
            else
            {
                if(balance(stk.top(), s[i]))
                    stk.pop();
                else
                {
                    balanced = false;
                    break;
                }
            }
        }
    }

    if(balanced && stk.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
