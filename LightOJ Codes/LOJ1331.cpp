///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    static int cs = 0;
    double radiusOne, radiusTwo, radiusThree;
    cin>>radiusOne>>radiusTwo>>radiusThree;
    double s = radiusOne+radiusTwo+radiusThree;
    double triangleArea = sqrt(s*radiusOne*radiusTwo*radiusThree);
    double sideOne = radiusTwo+radiusThree;
    double sideTwo = radiusThree+radiusOne;
    double sideThree = radiusOne+radiusTwo;
    double angleOne = acos((sideTwo*sideTwo+sideThree*sideThree-sideOne*sideOne)/(2*sideTwo*sideThree));
    double angleTwo = acos((sideThree*sideThree+sideOne*sideOne-sideTwo*sideTwo)/(2*sideThree*sideOne));
    double angleThree = acos((sideOne*sideOne+sideTwo*sideTwo-sideThree*sideThree)/(2*sideOne*sideTwo));
    double sectorOneArea = (angleOne*radiusOne*radiusOne)/2;
    double sectorTwoArea = (angleTwo*radiusTwo*radiusTwo)/2;
    double sectorThreeArea = (angleThree*radiusThree*radiusThree)/2;
    double ans = triangleArea-sectorOneArea-sectorTwoArea-sectorThreeArea;
    cout<<"Case "<<++cs<<": "<<fixed<<setprecision(12)<<ans<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
