#include <iostream>
#include <string>
#include "Washer.h"
using namespace std;

int main() 
{
	Washer<int> wahserOne;
	Washer<double> wahserTwo;
	Washer<float> wahserThree;

	wahserOne.setWeight(10);
	wahserOne.setConsumption(20.0);
	wahserOne.setColor("White");
	wahserOne.setFinalPrice(10);
	wahserOne.setCharge(7);

	wahserOne.print();

	wahserTwo.setWeight(50);
	wahserTwo.setConsumption(40.5);
	wahserTwo.setColor("Black");
	wahserTwo.setFinalPrice(60.3);
	wahserTwo.setCharge(25.3);

	wahserTwo.print();

	wahserThree.setWeight(90.23);
	wahserThree.setConsumption(70.0);
	wahserThree.setColor("Gray");
	wahserThree.setFinalPrice(90.32);
	wahserThree.setCharge(50.5);

	wahserThree.print();

	return 1;

}