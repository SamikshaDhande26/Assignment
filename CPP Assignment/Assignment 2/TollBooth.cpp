//============================================================================
// Name        : TollBooth.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class TollBooth{
private:

	int totalVehicle;
	double totalRevenue;

public:


	int getTotalVehicle() const{
		return totalVehicle;
	}

	double getTotalRevenue()const{
		return totalRevenue;
	}

	void reset(){
		totalVehicle=0;
		totalRevenue=0.0;
		cout << "Data reset successfully" << endl;
	}

	void vehiclePayingToll(int vehicleType,double tollAmount){
		totalVehicle++;
		totalRevenue+=tollAmount;
	}

	/*int displayMenu(){
		cout << "1.Add a standard car and collect toll " << endl;
		cout << "2.Add a truck and collect toll " << endl;
		cout << "3.Add a bus car and collect toll " << endl;
		cout << "4.Display total cars passed " << endl;
		cout << "5. Display total revenue collected " << endl;
		cout << "6.Reset booth statistics  " << endl;
		cout << "7.Exit " << endl;
		return 0;
	}*/
};
int main() {
	TollBooth toll;
	int choice;

	do{
		cout << "1.Add a standard car and collect toll " << endl;
		cout << "2.Add a truck and collect toll " << endl;
		cout << "3.Add a bus car and collect toll " << endl;
		cout << "4.Display total cars passed " << endl;
		cout << "5. Display total revenue collected " << endl;
		cout << "6.Reset booth statistics  " << endl;
		cout << "7.Exit " << endl;

		cout << "Enter your choice:" << endl;
		cin >> choice;



		switch(choice){
		case 1:
			toll.vehiclePayingToll(1, 180.0);
			break;

		case 2:
			toll.vehiclePayingToll(2, 300.0);
			break;

		case 3:
			toll.vehiclePayingToll(3, 350.0);
			break;

		case 4:
			cout << "Total cars passed:" << toll.getTotalVehicle() << endl;
			break;

		case 5:
			cout << "Total revenue collected:" << toll.getTotalRevenue() << endl;
			break;

		case 6:
			toll.reset();
			break;

		case 7:
			cout << "Exit the program" << endl;
			break;

		default:
			cout << "Invalid choice..." << endl;
		}
	}while(choice!=7);
	return 0;
}
