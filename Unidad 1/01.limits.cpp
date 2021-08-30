/* 	ALUMNO: BRYAN ENGELBERTO CALDERON LOPEZ
	CARNÉ: 	CL100517
	TARÉA: 	TIPOS DE DATOS
*/
#include <iostream>
#include <limits>

using namespace std;

int main(){
	//INT
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	cout <<" ---INT--- " << "\n";
	cout <<" imin = " << imin << endl;
	cout <<" imax = " << imax << "\n";
	cout <<" tamanio de int = " <<sizeof(int) << endl;
	
	//FLOAT
	float fmin = numeric_limits<float>::min();
	float fmax = numeric_limits<float>::max();
	cout << "\n" <<" ---FLOAT--- " << "\n";
	cout <<" fmin = " << fmin << endl;
	cout <<" fmax = " << fmax << endl;
	cout <<" tamanio de float = " <<sizeof(float) << endl;
	
	//CHAR
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	cout << "\n" <<" ---CHAR--- " << "\n";
	cout <<" cmin = " << cmin << endl;
	cout <<" cmax = " << cmax << endl;
	cout <<" tamanio de char = " <<sizeof(char) << endl;
	
	// *** TAREA ***
	
	//LONG
	long lmin = numeric_limits<long>::min();
	long lmax = numeric_limits<long>::max();
	cout << "\n" <<" ---LONG--- " << "\n";
	cout <<" lmin = " << lmin << endl;
	cout <<" lmax = " << lmax << endl;
	cout <<" tamanio de long = " <<sizeof(long) << endl;
	
	//LONG DOUBLE
	long double ldmin = numeric_limits<long double>::min();
	long double ldmax = numeric_limits<long double>::max();
	cout << "\n" <<" ---LONG DOUBLE--- " << "\n";
	cout <<" ldmin = " << ldmin << endl;
	cout <<" ldmax = " << ldmax << endl;
	cout <<" tamanio de long double = " <<sizeof(long double) << endl;
	
	//SHORT
	short smin = numeric_limits<short>::min();
	short smax = numeric_limits<short>::max();
	cout << "\n" <<" ---SHORT--- " << "\n";
	cout <<" smin = " << smin << endl;
	cout <<" smax = " << smax << endl;
	cout <<" tamanio de short = " <<sizeof(short) << endl;
	
	//DOUBLE
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	cout << "\n" <<" ---DOUBLE--- " << "\n";
	cout <<" dmin = " << dmin << endl;
	cout <<" dmax = " << dmax << endl;
	cout <<" tamanio de double = " <<sizeof(double) << endl;
	
	//BOOL
	bool bmin = numeric_limits<bool>::min();
	bool bmax = numeric_limits<bool>::max();
	cout << "\n" <<" ---BOOLEAN--- " << "\n";
	cout <<" bmin = " << bmin << endl;
	cout <<" bmax = " << bmax << endl;
	cout <<" tamanio de bool = " <<sizeof(bool) << endl;
	
	//WCHAR_T
	wchar_t wmin = numeric_limits<wchar_t>::min();
	wchar_t wmax = numeric_limits<wchar_t>::max();
	cout << "\n" <<" ---WCHAR_T--- " << "\n";
	cout <<" wmin = " << wmin << endl;
	cout <<" wmax = " << wmax << endl;
	cout <<" tamanio de wchar_t = " <<sizeof(wchar_t) << endl;
	
	return 0;
}	
