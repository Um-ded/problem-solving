#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    wow

    int n, cnt=0;
    cin >> n;
    int h[n+5], a[n+5];

    for(int i=1; i<=n; i++)
        cin >> h[i] >> a[i];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i != j && h[i] == a[j])
                cnt++;

    cout << cnt << endl;
    return 0;
}



///alternative solution
///#include <bits/stdc++.h>
///
///#define ss           " "
///#define endl         "\n"
///#define pb           push_back
///#define vi           vector<int>
///#define vvi          vector<vector<int> >
///#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
///
///using namespace std;
///
///typedef long long       ll;
///typedef double          dbl;
///
///int main()
///{
///    wow
///
///    int n, cnt=0;
///    cin >> n;
///    int h[n+5], a[n+5];
///
///    for(int i=1; i<=n; i++)
///        cin >> h[i] >> a[i];
///
///    for(int i=1; i<=n; i++)
///        for(int j=i+1; j<=n; j++)
///            if(h[i] == a[j])
///                cnt++;
///
///    for(int j=1; j<=n; j++)
///        for(int i=j+1; i<=n; i++)
///            if(a[j] == h[i])
///                cnt++;
///
///    cout << cnt << endl;
///    return 0;
///}
