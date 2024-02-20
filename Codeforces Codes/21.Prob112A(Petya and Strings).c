/// in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[105], str2[105];
    scanf("%s %s", str1, str2);

    printf("%d\n", strcasecmp(str1, str2));
    return 0;
}



/// in c++ 17
#include <bits/stdc++.h>

using namespace std;

#define endl  "\n"

int main()
{
    char s[105],t[105];
    cin>>s>>t;
    cout<<stricmp(s, t);
    return 0;
}
