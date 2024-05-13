#include "definite_integral.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using namespace fre;


double myfunction(double x);

int main(){
    int N;
    double a=1.0,b=2.0;
    
    cout << "enter an even number of steps for computing the approximation > ";
    cin >> N;
    
    DefInt MyInt(a,b,&myfunction);
    
    double answer_trapezoid = MyInt.Using_Trapezoid(N);
    double answer_simpson = MyInt.Using_Simpson(N);
    
    cout << "The answer from Trapezoidal Approximation is: " << answer_trapezoid << endl;
    cout << "The answer from Simpson's 1/3rd Approximation is: " << answer_simpson << endl;
    
    
    return 0;
}

// Output
//enter an even number of steps for computing the approximation > 1000
//The answer from Trapezoidal Approximation is: 2.41667
//The answer from Simpson's 1/3rd Approximation is: 2.41667

double myfunction(double x){
    return pow(x,3) - pow(x,2) + 1;
}