#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	double TotalIncome;
	double GrossIncome;
	double NetIncome;
	double ClothesandAccessories;
	double SchoolSupplies;
	double SavingsBond;
	double ParentsBond;
	double HoursWorked;
	double RemainingNetIncome;
	const double TaxRate = 0.14;
	const double PerForClothesandAccessories = 0.10;
	const double PerSchoolSupplies = 0.01;
	const double PerSavings = 0.25;
	const double ParBond = 0.50;

cout <<"Hours of Work:"<<endl;
cin>> HoursWorked;

cout <<"Hourly Work Rate" <<" In $"<<endl;
cin>> TotalIncome;

GrossIncome = HoursWorked * TotalIncome;
cout<<"Gross Income: $" << GrossIncome <<endl;

NetIncome =GrossIncome-(GrossIncome * TaxRate);
cout<< "Net Income: $" << NetIncome<<endl;

ClothesandAccessories = (NetIncome * PerForClothesandAccessories);
cout<<"Clothes & Other Accessories: $" <<ClothesandAccessories<<endl;

SchoolSupplies = PerSchoolSupplies * NetIncome;
cout<<"School Supplies: $" <<SchoolSupplies<<endl;

RemainingNetIncome = NetIncome - (SchoolSupplies + ClothesandAccessories) ;

SavingsBond = PerSavings * RemainingNetIncome;
cout<<"Savings Bond: $" <<SavingsBond<<endl;

ParentsBond = floor(SavingsBond) * ParBond;
cout<<"Parents Bond: $"<<ParentsBond<<endl;

getch();
return 0;
}


