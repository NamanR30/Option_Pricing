#pragma once
namespace fre{
    class DefInt{
        private:
            double a;
            double b;
            double (*Function)(double x);
        
        public:
            DefInt(double aInput, double bInput, double (*functionInput)(double x));
            double Using_Trapezoid(int N);
            double Using_Simpson(int N);
            double get_H(int N);
    };
}