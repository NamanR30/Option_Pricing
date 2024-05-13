#include <iostream>
#include <iomanip>
#include "BinomialTreeModel02.h"
#include "Option05.h"
#include "DoubDigitOpt.h"
#include "Butterfly.h"
#include "Strangle.h"
using namespace std;
using namespace fre;


int main(){ 
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K1 = 100, K2 = 110;;
    BinomialTreeModel Model(S0, U, D, R);
    
    
    
    //DoubleDigit option
    DoubDigitOpt dDigitOpt(N, K1, K2);
    OptionCalculation dDigitOptCalculation(&dDigitOpt);
    cout << "European double digit option price = "<< fixed << setprecision(2) << dDigitOptCalculation.PriceByCRR(Model) << endl;
    
    Strangle Spread_Strangle(N, K1, K2);
    OptionCalculation Calculation_StrangleSpread(&Spread_Strangle);
    cout << "European strangle option price = "<< fixed << setprecision(2) << Calculation_StrangleSpread.PriceByCRR(Model) << endl;
    
    //Computing Bull Spread option price
    Butterfly Spread_butterfly(N, K1, K2);
    OptionCalculation Calculation_butterflySpread(&Spread_butterfly);
    cout << "European butterfly option price = "<< fixed << setprecision(2) << Calculation_butterflySpread.PriceByCRR(Model) << endl;
    
    return 0;
}

/*
    European double digit option price = 0.26
    European strangle option price = 28.39
    European butterfly option price = 1.04

    */