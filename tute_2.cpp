//Tutorial 2

/*
//Q1
#include <iostream>
using  namespace std;

int main ( )

{
	 int cm, inches ;
	 
	 cout << "Enter length in cm" << endl;
	 cin >> cm ;
	 
	 inches = cm /2.54;
	  
	  cout << inches ;
}*/

// Q2
/*
#include <iostream>
using namespace std;

int main ()

{
	double salary , netSalary;
	int etype, otHrs, otRate ;
	
	cout << "Enter Employee Type : "<<endl; 
	cin >> etype ;
	
	cout << "Enter Salary  :" ;
	cin >> salary ;
	
	cout << "Enter OtHrs : ";
	cin >> otHrs;
	
	switch (etype) {
		case 1:
			otRate = 1000;
			break;
		case 2:		    otRate = 1500;
		    break;
		case 3:
		    otRate = 1700;
		    break;
	}
	netSalary = salary + otHrs * otRate ;
	cout << netSalary ; 
}*/

//Q3
/*
#include <iostream > 

using namespace std;

int main ()

{
	int no;
	long fac;
	
	cout << "Enter a NUmber :"<< endl;
	cin >> no;
	
	fac = 1;
	for (int r = no ; r >=1 ; r--){
	fac = fac * r;	
	}
	
	cout << " Factorial of  is : " << fac;
	
	
}
*/

//Q4
#include <iostream>
using  namespace std;

long Factorial (int no);
long nCr (int n, int r);

int main ( )

{
 int n, r;
 
 cout << "Enter a value for n" ;
 cin  >> n;
 
 cout << "Enter a value for r" ;
 cin  >> r;
 
 cout << "nCr =";
 
 cout << nCr(n,r);
 
}
long Factorial (int no)

{
	long fact = 1;
	for (int i=1; i<=no ; i++){
		fact *=1;	
	}
    return fact;
}
long nCr (int n, int r) {
	long numerator = Factorial (n);
	long denomenator = Factorial (r) * Factorial (n-r) ;
	long result = numerator / denomenator ;
	
	return result;
}
