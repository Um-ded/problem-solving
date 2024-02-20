#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define min(x, y)    (x<y)?x:y
#define max(x, y)    (x>y)?x:y
#define pi           acos(-1.0)

typedef long long       ll;
typedef double          dbl;

char s[10005];

int main()
{
    int l, i, cnt;

    while(gets(s))
    {
        l = strlen(s);
        cnt = 0;

        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]) != 0 && isalpha(s[i+1]) == 0)
            {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}



///another solution
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <ctype.h>
//#include <string.h>
//#include <stdbool.h>
//
//#define min(x, y)    (x<y)?x:y
//#define max(x, y)    (x>y)?x:y
//#define pi           acos(-1.0)
//
//typedef long long       ll;
//typedef double          dbl;
//
//char s[10005];
//
//int main()
//{
//    int l, i, cnt, status;
//
//    while(gets(s))
//    {
//        l = strlen(s);
//        status = cnt = 0;
//
//        for(i=0; i<=l; i++)
//        {
//            if(isalpha(s[i]))
//            {
//                if(status == 0)
//                    status = 1;
//            }
//            else
//            {
//                if(status == 1)
//                {
//                    status = 0;
//                    cnt++;
//                }
//            }
//        }
//
//        printf("%d\n", cnt);
//    }
//
//    return 0;
//}
