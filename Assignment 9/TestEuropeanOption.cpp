// TestEuropeanOption.cpp
// Test program for the exact solutions of European options.
// (C) Datasim Component Technology BV 2003-2006
//

#include "EuropeanOption.hpp"
#include <iostream>

int main() {
    // Call option on a stock
    EuropeanOption Option_call;
   
    cout << "Q1: Call option on a stock: " << Option_call.Price() << endl;
    
    char type[] = "P";
    EuropeanOption Option_put(0.10, 0.30, 50.0, 0.25, 50.0, type);
    cout << "Q2: Put option on a stock: " << Option_put.Price() << endl;

    // Put option on a stock index
    EuropeanOption Option2_put(0.10, 0.30, 50.0, 0.25, 50.0, 1.5, 0.1667, type);
    cout << "Q3: Put option with dividend: " << Option2_put.Price() << endl;

    return 0;
}

//Output

/* 
Q1: Call option on a stock: 2.13293
Q2: Put option on a stock: 2.37561
Q3: Put option with dividend: 3.03039
*/