#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main (){
	double N, z, p, q, e;
	int s = 1;
	
	while (s == 1){
	
	
	cout << "Calculador de muestras Finitas e infinitas \n" << endl;
	
	cout << "Introduce el valor de N: " ;
	cin >> N;
	
	cout << "Introduce el valor de z: " ;
	cin >> z;
	
	cout << "Introduce el valor de p: " ;
	cin >> p;
	
	cout << "Introduce el valor de q: " ;
	cin >> q;
	
	cout << "Introduce el valor de e: " ;
	cin >> e;
	
	double res = pow(z, 2) * p * q * N;
	double res2 = pow(e, 2) * (N - 1) + pow(z, 2) * p * q;
	int res3 = res / res2 ;
	
	cout << res3 << endl ;
	
	cout << "Desea hacer un nuevo calculo? \n S (1) /N (2)" << endl;
	cin >> s;
}
	
	return 0;
}

