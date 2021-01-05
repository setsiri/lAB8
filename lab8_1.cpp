#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

float mon,rpy,ppy,pain;
int year=1;

int main(){	
	cout << "Enter initial loan: ";
	cin>>mon;
	cout <<"Enter interest rate per year (%): ";
	cin>>rpy;
	cout << "Enter amount you can pay per year: ";
	cin>>ppy;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
if(ppy<mon){

	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	year++; 
	cout << setw(13) << left << mon;
	cout << setw(13) << left << (rpy/100*mon);
	cout << setw(13) << left << (rpy/100*mon)+mon;
	cout << setw(13) << left << ppy;
	pain=((rpy/100*mon)+mon)-ppy;
	cout << setw(13) << left << pain;
	mon=pain;
	cout << "\n";
	}while(pain>ppy);

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	year++; 
	cout << setw(13) << left << mon;
	cout << setw(13) << left << (rpy/100*mon);
	cout << setw(13) << left << (rpy/100*mon)+mon;
	cout << setw(13) << left << (rpy/100*mon)+mon;
	pain=((rpy/100*mon)+mon)-((rpy/100*mon)+mon);
	cout << setw(13) << left << pain;
	mon=pain;
	cout << "\n";


}else{

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year;
	year++; 
	cout << setw(13) << left << mon;
	cout << setw(13) << left << (rpy/100*mon);
	cout << setw(13) << left << (rpy/100*mon)+mon;
	cout << setw(13) << left << (rpy/100*mon)+mon;
	pain=((rpy/100*mon)+mon)-((rpy/100*mon)+mon);
	cout << setw(13) << left << pain;
	mon=pain;
	cout << "\n";

}
	return 0;
}
