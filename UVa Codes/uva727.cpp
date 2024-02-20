#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long    ll;

map<char, int> precedence;

void init()
{
    precedence['('] = precedence[')'] = 0;
    precedence['+'] = precedence['-'] = 1;
    precedence['*'] = precedence['/'] = 2;
}

void solve(int& cs)
{
    string s, ans;
    stack<char> st;

    while(getline(cin, s))
    {
        if(s.size()==0)
            break;

        if(s[0]=='(')
            st.push(s[0]);
        else if(s[0]==')')
        {
            while(st.top()!='(')
            {
                ans.push_back(st.top());
                st.pop();
            }

            st.pop();
        }
        else if(s[0]>='0' && s[0]<='9')
            ans.push_back(s[0]);
        else
        {
            while(!st.empty() && precedence[st.top()]>=precedence[s[0]])
            {
                ans.push_back(st.top());
                st.pop();
            }

            st.push(s[0]);
        }
    }

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    cout<<ans<<endl;

    if(cs)
        cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    init();
    int t = 1;
    cin>>t;
    cin.ignore();
    cin.ignore();

    while(t--)
        solve(t);

    return 0;
}

/**

2

(
3
+
2
)
*
5

5
*
(
7
+
2
)
/
8
*
9

*/
