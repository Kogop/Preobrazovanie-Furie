#include <iostream>
#include <math.h>
#include "IntegraL.h"

using namespace std;

const int n = 100;
double w[n], l[5];
int a = 6, b = 15, alfa = 2*a;



void wt() {

	for (int i = 0; i < n; i++)
	{
		w[i] = (exp(-a * i) / (b - a)) + (sin(-b * i) / (a - b));
	}


}
void L() {
	l[0] = sqrt(2 * alfa) * exp(-alfa * 0);
	l[1] = sqrt(2 * alfa) * exp(-alfa * 1) * (1.0 - 2.0 * alfa * 1);
	l[2] = sqrt(2 * alfa) * exp(-alfa * 2) * (1.0 - 4 * alfa * 2 + 2 * pow(alfa,2) * pow(2,2));
	l[3] = sqrt(2 * alfa) * exp(-alfa * 3) * (1.0 - 6 * alfa * 3 + 6 * pow(alfa, 2) * pow(3, 2) - 4 * pow(alfa, 3) * pow(3, 3) / 3);
	l[4] = sqrt(2 * alfa) * exp(-alfa * 4) * (1.0 - 8 * alfa * 4 + 12 * pow(alfa, 2) * pow(4, 2) - 16 * pow(alfa, 3) * pow(4, 3) / 3 + 2 * pow(alfa, 4) * pow(4, 4) / 3);
}





int main() {

	wt();
	L();
	for (int i = 0; i < n; i++)
	{
		cout << l[i] << endl;
	}
	





	return 0;
}