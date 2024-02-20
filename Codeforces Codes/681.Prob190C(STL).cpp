#include <bits/stdc++.h>

#define SS      " "
#define endl    "\n"
#define noice	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long	ll;

vector<string> v;
vector<vector<int> > tree;

void dfs(int node, int num = 1)
{
    cout<<v[node];

    if(v[node]=="pair")
    {
        cout<<'<';

        for(int i=0; i<tree[node].size(); i++)
            dfs(tree[node][i], i);

        cout<<'>';
    }

    if(num==0)
        cout<<',';
}

void solve()
{
    int n, pcnt=0, icnt=0;
    cin>>n;
    string cur;

    while(cin>>cur)
    {
        v.push_back(cur);

        if(cur=="int")
        {
            icnt++;
            n--;
        }
        else
            pcnt++;
    }

    if(icnt!=(pcnt+1))
    {
        cout<<"Error occurred"<<endl;
        return;
    }

    int sz = v.size();

    if(v[0]=="int")
    {
        if(sz==1)
            cout<<"int"<<endl;
        else
            cout<<"Error occurred"<<endl;

        return;
    }

    stack<int> stk;
    stk.push(0);
    tree.resize(sz+2);

    for(int i=1; i<sz; i++)
    {
        while(!stk.empty() && tree[stk.top()].size()>=2)
            stk.pop();

        if(stk.empty())
        {
            cout<<"Error occurred"<<endl;
            return;
        }

        tree[stk.top()].push_back(i);

        if(v[i]=="pair")
            stk.push(i);

    }

    dfs(0);
    cout<<endl;
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
