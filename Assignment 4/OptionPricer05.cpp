#include <iostream>
#include <iomanip>
#include "BinomialTreeModel02.h"
#include "Option05.h"
#include "BullSpread.h"
#include "BearSpread.h"
using namespace std;
using namespace fre;


int main(){ 
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K = 100.00;
    BinomialTreeModel Model(S0, U, D, R);
    
    //Euro call
    Call call(N, K);
    OptionCalculation Calc_call(&call);
    cout << "European call option price = " << fixed << setprecision(2) << Calc_call.PriceByCRR(Model) << endl;
    
    //Euro put
    Put put(N, K);
    OptionCalculation Calc_put(&put);
    cout << "European put option price = "<< fixed << setprecision(2) << Calc_put.PriceByCRR(Model) << endl;
    
    
    double K1 = 100, K2 = 110;
    
    
    //Calculating Bull Spread option price
    BullSpread bullSpread(N, K1, K2);
    OptionCalculation Calc_Bullspread(&bullSpread);
    cout << "European bull spread option price = "<< fixed << setprecision(2) << Calc_Bullspread.PriceByCRR(Model) << endl;
    
    //Calclating Bear Spread option price
    BearSpread bearSpread(N, K1, K2);
    OptionCalculation Calc_Bearspread(&bearSpread);
    cout << "European bear spread option price = "<< fixed << setprecision(2) << Calc_Bearspread.PriceByCRR(Model) << endl;
    
    return 0;
}
/*
    European call option price = 21.68
    European put option price = 11.43
    European bull spread option price = 4.72
    European bear spread option price = 4.86
    */