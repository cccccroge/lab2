#include <fstream>
#include "BMI.h"
#include "BMI.cpp"

using namespace std;

int main() {
	
	int w;
	float h, n;

	BMI bmi;

	ifstream read("file.in", ios::in);
	ofstream write("file.out", ios::out);

	while (read >> h >> w){

	  if (h == 0 && w == 0) break;

	  bmi.setHeight(h);
	  bmi.setWeight(w);
	  n = bmi.calculateBMI();  
	  write << n << " " << bmi.categoryForBMI(n) << endl;
	}

	read.close();
	write.close();
	
	return 0;
}

