#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main(){

char c = 'T', d = 'S';
char *p1 = &c;
char *p2 = &d; 
char *p3;

*p1 = *p2; 
cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;


}
