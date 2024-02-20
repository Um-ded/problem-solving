#include <stdio.h>

int main()
 {
     int time_hour, speed;
     scanf("%d", &time_hour);
     scanf("%d", &speed);
     double fuel = (double)(time_hour*speed)/12;
     printf("%.3lf\n", fuel);
     return 0;
 }

/// alternative code ///
/// #include <stdio.h>
///
/// int main()
/// {
///     double time_hour, speed;
///     scanf("%lf", &time_hour);
///     scanf("%lf", &speed);
///     double fuel = (time_hour*speed)/12;
///     printf("%.3lf\n", fuel);
///     return 0;
/// }

