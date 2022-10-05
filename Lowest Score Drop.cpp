#include <iostream>
#include <iomanip>
using namespace std;

void getScore(double &, int &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);

void main(){
	double score1, score2, score3, score4, score5;
	int count = 0;

	cout << setprecision(2) << fixed;

	getScore(score1, count);
	getScore(score2, count);
	getScore(score3, count);
	getScore(score4, count);
	getScore(score5, count);

	calcAverage(score1, score2, score3, score4, score5);
}

void getScore(double &score, int &count) {
	count++;

	cout << "Please enter the score for test #" << count << ":";
	cin >> score;

	while(score < 0 || score > 100) {
		cout << "Please enter the VALID score for test #" << count << ":";
		cin >> score;
	}
}

double findLowest(double score1, double score2, double score3, double score4, double score5){
	double min = score1;

	if(score2 < min)
		min = score2;
	if(score3 < min)
		min = score3;
	if(score4 < min)
		min = score4;
	if(score5 < min)
		min = score5;

	return min;
}

void calcAverage(double score1, double score2, double score3, double score4, double score5){
	double min = findLowest(score1, score2, score3, score4, score5);

	double total = (score1 + score2 + score3 + score4 + score5) - min;
	double average = total / 4.0;

	cout << "Average of " << score1 << ", " << score2 << ", " << score3 << ", " << score4 << ", " << score5 << " with " << min << " dropped = " << average << endl;
}