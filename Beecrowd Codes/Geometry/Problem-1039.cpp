#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, x1, y1, r2, x2, y2;

    double xy;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        xy = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

        if((r1-xy)>=r2)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }

    return 0;
}
