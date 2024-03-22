# Small observations from my problem-solving experience

**1.**

When you are using DSU to find the number of sets/connected components/distinct trees, etc. in a given input dataset, always run a loop of the find_sets() function after using DSU. Otherwise, in some corner cases your result will be greater than the actual result.

```cpp
for(int i=1; i<=n; i++)
   find_set(i);
```

For example, for the problem 755C (PolandBall and Forest) on Codeforces, this solution gives **Wrong answer on test 14**:

> https://codeforces.com/contest/755/submission/252473036

But only adding a loop of the find_sets() function gives **accepted** verdict. Here's the solution:

> https://codeforces.com/contest/755/submission/252474700

---

**2.**

In some problems, we see circular formulas/relations. We use mod operations in these scenarios. Doing mod by some value **n** gives values from **0** to **n-1**, but most of the time we need values from **1** to **n**. We can do it in one line. Suppose we are doing **x mod n**. We can write it as:

```cpp
int value = (x+(n-1))%n)+1;
```

In this way, we will always get values from **1** to **n**. An example from codeforces is problem 1941D (Rudolf and the Ball Game). Here's my solution for this problem:

> https://codeforces.com/contest/1941/submission/252220326

---

**3.**

Almost everybody uses this trick to find the ceil value of a floating-point number without built-in function. If you want to get the ceil value of **x/y**, then just add **(y-1)** to **x** and then divide that sum by **y**.

```cpp
int ceilValue = (x+y-1)/y;
```

---
