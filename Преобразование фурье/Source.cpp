#include <iostream>

using namespace std;

const int n = 100;
double w[n];
int a = 6, b = 15;



void wt() {

	for (int i = 0; i < n; i++)
	{
		w[i] = exp(-a * i) * sin(b * i);
	}


}




int main() {

	wt();

	for (int i = 0; i < n; i++)
	{
		cout << w[i] << endl;
	}
	





	return 0;
}