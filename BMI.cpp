#include <iostream>
#include <string>

using namespace std;

class BMI {

	public:

	  void setHeight(float h) {
	  	height = h;
	  }

	  void setWeight(int w) {
	  	weight = w;
	  }

	  float calculateBMI() {
	  	return weight/( (height/100)*(height/100) );
	  }

	  string categoryForBMI(float BMI) {
	  	if (BMI < 15.0)		  	 return "Very severely underweight";
		if (BMI >= 15.0 && BMI < 16.0)   return "Severely underweight";
		if (BMI >= 16.0 && BMI < 18.5)   return "Underweight";
		if (BMI >= 18.5 && BMI < 25.0)   return "Normal";
		if (BMI >= 25.0 && BMI < 30.0)   return "Overweight";
		if (BMI >= 30.0 && BMI < 35.0)   return "Obese Class I (Moderately obese)";
		if (BMI >= 35.0 && BMI < 40.0)   return "Obese Class II (Severely obese)";
		if (BMI >= 40)			 return "Obese Class III (Very severely obese)";
	  }


	private:

	  float height;
	  int weight;

};
