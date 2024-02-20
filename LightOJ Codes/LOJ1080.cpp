#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

const int MX = (4e5)+5;
int tree[MX];

void update(int node, int b, int e, int i, int j)
{
    if(j<b || e<i)
        return;

    if(i<=b && e<=j)
    {
        tree[node]++;
        return;
    }

    int l = node*2;
    int r = (node*2)+1;
    int m = b+((e-b)/2);
    update(l, b, m, i, j);
    update(r, m+1, e, i, j);
}

int query(int node, int b, int e, int x, int invert=0)
{
    if(x<b || e<x)
        return 0;

    if(b==x && e==x)
        return (tree[node]+invert);

    int l = node*2;
    int r = (node*2)+1;
    int m = b+((e-b)/2);
    int q1 = query(l, b, m, x, (tree[node]+invert));
    int q2 = query(r, m+1, e, x, (tree[node]+invert));
    return q1+q2;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T;
    cin>>T;

    for(int cs=1; cs<=T; cs++)
    {
        string s;
        cin>>s;
        int n = s.size();
        int q;
        cin>>q;
        memset(tree, 0, sizeof(tree));

        cout<<"Case "<<cs<<":\n";

        for(int i=0; i<q; i++)
        {
            char type;
            cin>>type;

            if(type=='I')
            {
                int p, q;
                cin>>p>>q;
                update(1, 1, n, p, q);
            }
            else
            {
                int x;
                cin>>x;
                int cur = query(1, 1, n, x)%2;

                if(cur)
                    cout<<((s[x-1]=='0')?'1':'0')<<endl;
                else
                    cout<<(s[x-1]-'0')<<endl;
            }
        }
    }

    return 0;
}
