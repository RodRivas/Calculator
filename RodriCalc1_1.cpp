// RODRICALC 1.1 by Rodrigo Rivas

#include <iostream>
#include <windows.h>

using namespace std;

class calculadora{

	double x;
	double y;

public:

	calculadora (double i,double j)  {x = i ; y = j; }
	double soma() { return x + y; }
	double subtr() { return x - y; }
	double divid() { return x / y; }
	double multip() { return x * y; }
};              

int main()

{

	SetConsoleTitle("RodriCalc 1.1");

	double k;
	double a;
	double result;
	double newresult;
	double newvalu;
	char oper;
	char oper2;

	cout.setf(ios::left);
	cout.precision(20);
	cout.width(20);

	for (; ;0 ){

		cin >> k;
		cin >> oper; 
		cin >> a;

		calculadora instanc(k, a) ; // cria uma instancia da classe calculadora.

		if(oper=='+') result=instanc.soma();
		else if(oper=='-') result=instanc.subtr();
		else if(oper=='/') result=instanc.divid();
		else if(oper=='*') result=instanc.multip();

		cout << result;
		cout << "\n";

		for (;;) {    
			do {
				cin >> oper2;

				switch(oper2) {
				case'+':
					cin >>newresult;
					newvalu=result+newresult;
					cout <<newvalu << "\n";
					result=newvalu;
					break;
				case'-':
					cin >>newresult;
					newvalu=result-newresult;
					cout <<newvalu << "\n" ;
					result=newvalu;
					break;
				case'*':
					cin >>newresult;
					newvalu=result*newresult;
					cout <<newvalu << "\n" ;
					result=newvalu;
					break;
				case'/':
					cin >>newresult;
					newvalu=result/newresult;
					cout <<newvalu << "\n";
					result=newvalu;
					break;

				} //switch
			} while (oper2=='+'||oper2=='-'|oper2=='*'|oper2=='/');
			if(oper2=='c') break;
			else if(oper2=='q') goto stop;
			else cout << " OPERACAO INVALIDA !! <Tecle ENTER> " << "\a";

		} //2nd for
	} //1st for

stop:
	; } // main


