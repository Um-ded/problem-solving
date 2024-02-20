/// Approach 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, F1, F2, temp, gcd_stack;
    cin >> N;

    while(N--)
    {
        cin >> F1 >> F2;

        if(F1<F2)
        {
            temp = F1;
            F1 = F2;
            F2 = temp;
        }

        while(F2 != 0)
        {
            temp = F2;
            F2 = F1%F2;
            F1 = temp;
        }

        gcd_stack = F1;

        cout << gcd_stack << endl;
    }

    return 0;
}



/// Approach 2

//#include <stdio.h>
//
//int main()
//{
//    int N, F1, F2, temp, gcd_stack;
//    scanf("%d", &N);
//
//    while(N--)
//    {
//        scanf("%d %d", &F1, &F2);
//
//        if(F1<F2)
//        {
//            temp = F1;
//            F1 = F2;
//            F2 = temp;
//        }
//
//        while(F2 != 0)
//        {
//            temp = F2;
//            F2 = F1%F2;
//            F1 = temp;
//        }
//
//        gcd_stack = F1;
//
//        printf("%d\n", gcd_stack);
//    }
//
//    return 0;
//}
