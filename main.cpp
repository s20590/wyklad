#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cout<<"Wszytywanie liczb a, b:"<<endl;
	cin>>a>>b;
	
	//Dodawanie 
	cout<<"Wynik dodawania: "<<a+b<<endl;
	
	//Odejmowanie
	cout << "Wynik odejmowania: " << a-b << endl;
	
	//Mnozenie
	cout<<"Wynik mnozenia: "<<a*b<<endl;
	
	//Dzielenie
	cout<<"Wynik dzielenia: "<<float(a)/float(b)<<endl;
	
	return 0;
}
