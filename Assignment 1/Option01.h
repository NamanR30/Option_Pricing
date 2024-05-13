#pragma once

namespace fre {
	//pricing European option
	double PriceByCRR(double S0, double U, double D, double R, unsigned int N, double K);

	//computing call payoff
	double CallPayoff(double z, double K);
	
	//homework version2
	double HW1Factorial(int n);
	double HW1V2PricebyCRR(double S0, double U, double D, double R, int N, double K);
	
	
}