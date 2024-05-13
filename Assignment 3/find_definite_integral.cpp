#include "definite_integral.h"
#include <iostream>
#include <cmath>
using namespace std;

namespace fre{
    DefInt::DefInt(double aInput, double bInput, double (*functionInput)(double x)){
        a = aInput;
        b = bInput;
        Function = functionInput;
    }
    
  
    double DefInt::Using_Trapezoid(int N){
        double h = get_H(N);
        double f_of_x [N+1];
        int size = sizeof(f_of_x)/sizeof(double);
        
        for(int i=0; i<size; i++){
            f_of_x[i]=Function(a+h*i);
           
        }
        
        double approx = 0.0;
        
        for(int i=1; i<size; i++){
            approx+=(h/2)*(f_of_x[i]+f_of_x[i-1]);
        }
        
        return approx;
    }
    
 
    double DefInt::Using_Simpson(int N){
        double h = get_H(N);
        double f_of_x [N+1];
        int size = sizeof(f_of_x)/sizeof(double);
        
        for(int i=0; i<size; i++){
            f_of_x[i]=Function(a+h*i);
          
        }
        
        double approx = (h/3)*(f_of_x[0]+f_of_x[N]);
        
        for(int i=1; i<size-1; i++){
            if(i%2!=0){
                approx+=(h/3)*(4*f_of_x[i]);   
            }else{
                approx+=(h/3)*(2*f_of_x[i]);
            }
        }
        
        return approx;
    }
    
    double DefInt::get_H(int N){
        double h = double((b-a))/double(N);
     
        return h;
    }
}