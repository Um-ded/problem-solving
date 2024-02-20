#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

void solve()
{
    int n;
    cin>>n;
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int> > min_heap;

    for(int i=1; i<=n; i++)
    {
        int x;
        double med;
        cin>>x;

        if(max_heap.empty() || x<=max_heap.top())
            max_heap.push(x);
        else
            min_heap.push(x);

        if((int)max_heap.size()-(int)min_heap.size() > 1)
        {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if((int)min_heap.size()-(int)max_heap.size() > 1)
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }

        if(i&1)
        {
            if((int)max_heap.size() > (int)min_heap.size())
                med = max_heap.top();
            else
                med = min_heap.top();
        }
        else
            med = .5*(max_heap.top()+min_heap.top());

        cout<<fixed<<setprecision(1)<<med<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
