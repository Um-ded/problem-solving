#include <bits/stdc++.h>

using namespace std;

int n;

void rec()
{
    static int x = 0;

    if(x == n)
        return;

    x++;
    rec();
    cout<<"I love Recursion"<<endl;
}

int main()
{
    cin>>n;
    rec();

    return 0;
}
