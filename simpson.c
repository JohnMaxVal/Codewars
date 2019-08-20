#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double f(double);

double simpson(int n) {
    // your code
    if(n == 0) return 0.0;
    
    double a = 0, b = M_PI;
    
    // values of A and B sum
    double sumA = 0, sumB = 0;
    
    // calculate h (deltaX = (b - a) / n;
    double h = (b - a) / n;
    
    // resule values
    double res = 0.0;
    
    // calculate integral
    for(int i = 1; i <= (n/2); i++) {
      sumA += f(a + (2*i - 1) * h);
    }
    for(int i = 1; i <= (n/2) - 1; i++) {
      sumB += f(a + 2*i*h);
    }
    
    res = (b - a) * (f(a) + f(b) + 4 * sumA + 2 * sumB) / (3 * n);
    
    return res;
}

double f(double x) {
  double sinX = 3.0 / 8.0 * (3 * sin(x) - sin(3 * x));
  return sinX;
}
