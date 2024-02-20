#include <stdio.h>

int main()
 {
     int age;
     scanf("%d", &age);
     printf("%d ano(s)\n", age/365);
     age %= 365;
     printf("%d mes(es)\n", age/30);
     age %= 30;
     printf("%d dia(s)\n", age);
     return 0;
 }



/// alternative solve
/// #include<stdio.h>
///
/// int main()
/// {
///    int y, m, d, n;
///    scanf("%d", &n);
///
///    y = n / 365;
///    m = n % 365 / 30;
///    d = n % 365 % 30;
///
///    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
///    return 0;
/// }
