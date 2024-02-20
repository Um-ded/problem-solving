/// This problem was solved using Java

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int t = cin.nextInt();
        final long MOD = 998244353;

        for(int cs=1; cs<=t; cs++) {
            int n = cin.nextInt();

            if(n%2==1) {
                System.out.println(0);
            }
            else {
                long ans = 1;

                for(int i=1 ; i<=n/2 ; i++) {
                    ans *= i;
                    ans %= MOD;
                }

                ans = (ans*ans)%MOD;
                System.out.println(ans);
            }
        }
    }
}
