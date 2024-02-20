#include <stdio.h>

int main()
 {
     int time;
     scanf("%d", &time);
     printf("%d:", time/3600);
     time %= 3600;
     printf("%d:", time/60);
     time %= 60;
     printf("%d\n", time);
     return 0;
 }


///alternative code
///#include<stdio.h>
///
///int main()
///{
///   int h, m, s, n;
///   scanf("%d", &n);
///
///   h = n / 3600;
///   m = n % 3600 / 60;
///   s = n % 60;
///
///   printf("%d:%d:%d\n", h, m, s);
///   return 0;
///}


