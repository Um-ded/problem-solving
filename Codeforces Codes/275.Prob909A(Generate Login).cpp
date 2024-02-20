#include <bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wow

    string a, b, c;
    cin>>a>>b;
    c += a[0];

    for(int i=1; i<a.size(); i++)
    {
        if(a[i]>=b[0])
            break;

        c += a[i];
    }

    c += b[0];
    cout<<c<<endl;
    return 0;
}



//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl   "\n"
//#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//int main()
//{
//    wow
//
//    string a, b;
//    vector<string> prefix_a, prefix_b, prefixes;
//    cin>>a>>b;
//    string tmp;
//
//    for(int i=0; i<a.size(); i++)
//    {
//        tmp += a[i];
//        prefix_a.push_back(tmp);
//    }
//
//    tmp.clear();
//
//    for(int i=0; i<b.size(); i++)
//    {
//        tmp += b[i];
//        prefix_b.push_back(tmp);
//    }
//
//    for (int i=0; i<prefix_a.size(); i++)
//    {
//        for(int j=0; j<prefix_b.size(); j++)
//        {
//            string s = prefix_a[i]+prefix_b[j];
//            prefixes.push_back(s);
//        }
//    }
//
//    sort(prefixes.begin(), prefixes.end());
//    cout<<prefixes[0]<<endl;
//    return 0;
//}
