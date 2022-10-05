#include <iostream>
using namespace std;

void main(){
	double weight;
	double distance;
	double shipping_rate;
	double price;

	int max_weight = 20;
	int min_weight = 0;
	int max_distance = 3000;
	int min_distance = 10;

	int x = 0;

	do{
		cout << "Please enter the weight(kgs) of the package:";
		cin >> weight;

		if (weight <= min_weight) {
			cout << "Please enter a valid weight" << endl;
			cout << endl;
		}
		else if(weight > max_weight){
			cout << "Sorry, but that weight exceeds the maximum weight of shipping..." << endl;
			x++;
		}
		else
			x++;
	}while(x == 0);

	if(weight > min_weight && weight <= max_weight){
			cout << "Please enter the distance(miles) the package is traveling:";
			cin >> distance;

			if(distance < min_distance)
				cout << "Sorry, but that is below the minimum shipping distance..." << endl;

			else if(distance > max_distance)
				cout << "Sorry, but that exceeds the maximum shipping distance..." << endl;

			else{
				if (distance < 500 || distance >= 500 && distance < 1000)
					shipping_rate = 1;
				else if (distance >= 1000 && distance < 1500)
					shipping_rate = 2;
				else if (distance >= 1500 && distance < 2000)
					shipping_rate = 3;
				else if (distance >= 2000 && distance < 2500)
					shipping_rate = 4;
				else if (distance >= 2500 && distance < 3000)
					shipping_rate = 5;
				else if (distance == 3000)
					shipping_rate = 6;
			}
	}

	if(weight > min_weight && weight <= max_weight && distance >= min_distance && distance <= max_distance){
			if(weight <= 2){
				price = 1.10 * shipping_rate;
			}
			else if(weight > 2 && weight <= 6){
				price = 2.20 * shipping_rate;
			}
			else if(weight > 6 && weight <= 10){
				price = 3.70 * shipping_rate;
			}
			else if(weight > 10 && weight <= 20){
				price = 4.80 * shipping_rate;
			}
			cout << "Price of charge = $" << price << endl;
	}
}