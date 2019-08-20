#include <math.h>

/*

You can obtain that result by solving the linear deffierence equation:
We have the following one: 6x[n]x[n+1] - 5x[n]x[n+2] + x[n+1]x[n+2]

1) Find the characteristic equation:
  - x[n] = 1;
  - x[n+1] = k;
  - x[n+2] = k^2
6*1*k - 5*1*k^2 + k*k^2 = 0 => 6k - 5k^2 + k^3 = 0 =>
k^3 - 5k^2 + 6k = 0;
k(k^2 - 5k + 6) = 0;
k0 = 0 (make no sense, it could be avoided);
D = b^2 - 4ac = 25 - 4*6 = 1; (root(D) = 1);
k1 = (5 + 1) / 2 = 3; k2 = (5 - 1) / 2 = 2;

2) General solution seems like that:
xn = A1*3^n + A2*2^n;

We have the following system:
(A1, A2 - unknown constants, u0 = 1, u1 = 2)

A1 + A2 = 1;
3A1 + 2A2 = 2;

A1 = 1 - A2;
3*(1 - A2) + 2A2 = 2;
3 - 3A2 + 2A2 = 2 => -A2 = -1 |*(-1) => A2 = 1;
A1 = 1 - A2 = 1 - 1 = 0;

The ended function is:
f(n) = 0 * 3^n + 1 * 2^n => 2^n;
f(n) = 2^n

*/

unsigned long long fcn(int n) {
    // your code
    if(n <= 0) return 0;
    
    return pow(2, n);
}
