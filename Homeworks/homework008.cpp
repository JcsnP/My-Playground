#include <iostream>
using namespace std;

struct Car{
	char brand[50];
	char gen[50];
	char color[50];
	int price;
} myCar;

int main(){
	//input
	cout << "Please input car brand: ";
	cin >> myCar.brand;
	cout << "Please input car generation: ";
	cin >> myCar.gen;
	cout << "Please input car color: ";
	cin >> myCar.color;
	cout << "Please input car price: ";
	cin >> myCar.price;
	
	cout << "------------------------------------------------" << endl; 
	
	cout << "Car brand: " << myCar.brand << endl;
	cout << "Car generation: " << myCar.gen << endl;
	cout << "Car color: " << myCar.color << endl;
	cout << "Car price: " << myCar.price << endl;
}
