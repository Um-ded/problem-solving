#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define size         6
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    wow

    int n, p, cnt=0;
    cin >> n;
    int game[n+2]={0}, lx[n+2]={0}, ly[n+2]={0};

    cin >> p;
    for(int i=0; i<p; i++)
    {
        cin >> lx[i];
        game[lx[i]] = 1;
        cnt++;
    }

    cin >> p;
    for(int i=0; i<p; i++)
    {
        cin >> ly[i];
        if(game[ly[i]] == 0)
        {
            game[ly[i]] = 1;
            cnt++;
        }
    }

    if(cnt == n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";

    return 0;
}
