/// Approach 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, j;
    cin >> s;

    for(i=2 ; i<s.size() ; i+=2)
    {
        for(j=0 ; j<i ; j+=2)
        {
            if(s[i]<s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout << s << endl;
    return 0;
}



/// Approach 2

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char sum[105];
//    int one, two, three, i, n, j;
//    scanf("%s", sum);
//    n = strlen(sum);
//
//    for(i=2 ; i<n ; i+=2)
//    {
//        for(j=0 ; j<i ; j+=2)
//        {
//            if(sum[i]<sum[j])
//            {
//                char temp = sum[i];
//                sum[i] = sum[j];
//                sum[j] = temp;
//            }
//        }
//    }
//
//    printf("%s\n", sum);
//    return 0;
//}
