///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

import java.util.Scanner

// Kotlin Input Methods
fun readLn() = readLine()!! // String line
fun readInt() = readLn().toInt() // single Int
fun readLong() = readLn().toLong() // single Long
fun readDouble() = readLn().toDouble() // single Double
fun readStrings() = readLn().split(" ") // list of Strings
fun readInts() = readStrings().map { it.toInt() } // list of Ints
fun readLongs() = readStrings().map { it.toLong() } // list of Longs
fun readDoubles() = readStrings().map { it.toDouble() } // list of Doubles

// Java Input Methods
val Scan = Scanner(System.`in`) // Scanner declaration
fun ScanLn() = Scan.nextLine() // String line
fun ScanInt() = Scan.nextInt() // single Int
fun ScanLong() = Scan.nextLong() // single Long
fun ScanDouble() = Scan.nextDouble() // single Double

fun main()
{
    var t:Int = ScanInt()

    while(t-->0)
    {
        var x:Long = ScanLong()
        var y:Long = ScanLong()
        var ans:Long = 0
        var cnt:Long = 0

        while(x*10 <= y)
        {
            x *= 10
            cnt++
        }

        while(y>0)
        {
            ans += y/x
            y = y%x
            cnt--

            if(cnt >= 0)
                x /= 10
            else
                x = 1
        }

        println(ans)
    }
}



/// Another approach(clever one :D)

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

// Imports
import java.util.Scanner

// Kotlin Input Methods
fun readLn() = readLine()!! // String Line
fun readInt() = readLn().toInt() // Single Int
fun readLong() = readLn().toLong() // Single Long
fun readDouble() = readLn().toDouble() // Single Double
fun readStrings() = readLn().split(" ") // List of Strings
fun readInts() = readStrings().map { it.toInt() } // List of Ints
fun readLongs() = readStrings().map { it.toLong() } // List of Longs
fun readDoubles() = readStrings().map { it.toDouble() } // List of Doubles

// Java Input Methods
val Scan = Scanner(System.`in`) // Scanner Declaration
fun ScanLn() = Scan.nextLine() // String Line
fun ScanInt() = Scan.nextInt() // Single Int
fun ScanLong() = Scan.nextLong() // Single Long
fun ScanDouble() = Scan.nextDouble() // Single Double

fun main()
{
    var t:Int = ScanInt()

    while(t-->0)
    {
        var x:Int = ScanInt()
        var y:Int = ScanInt()
        var s:String = (y/x).toString()
        var ans:Int = y%x

        for(u in s)
            ans += u.toInt()-48

        println(ans)
    }
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
