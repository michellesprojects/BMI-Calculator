#include <stdio.h>
#include <math.h>

int main(){


	float height = 0.0;
	float weight = 0.0;
	float bmi = 0.0;

	printf("Welcome to the BMI Calculator\n");

	printf("Please enter your height in inches:\n");
	scanf("%f",&height);
	
	printf("Please enter your weight in pounds:\n");
	scanf("%f", &weight);

	//Formula: 703 * weight (lbs) / [height (in)]^2
	bmi = 703 * weight / pow(height,2);

	printf("Your BMI is: %.2f\t.", bmi);

	if(bmi < 18.5){
		printf("You are underweight.\n");
	} else if(bmi <= 24.9){
		printf("You are a healthy weight.\n");
	} else if(bmi <= 29.9){
		printf("You are overweight.\n");
	} else {
		printf("You are obese.\n");
	}


	return 0;
}