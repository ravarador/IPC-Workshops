/*
	==================================================
	Workshop #6 (Part-1):
	==================================================
	Name   : 
	ID     : 
	Email  : 
	Section: 
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include<stdio.h>

// User Libraries
#include"w6p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* num) {
	int isValidated = 0, input = 0;

	do {
		isValidated = scanf("%d", &input);

		if (!isValidated || input <= 0) {
			isValidated = 0;
			printf("ERROR: Enter a positive value: ");
		}

	} while (!isValidated);

	if (num != NULL) {
		*num = input;
	}

	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num) {
	int isValidated = 0;
	double input = 0;

	do {
		isValidated = scanf("%lf", &input);

		if (!isValidated || input <= 0) {
			isValidated = 0;
			printf("ERROR: Enter a positive value: ");
		}

	} while (!isValidated);

	if (num != NULL) {
		*num = input;
	}

	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(void)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
}


// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int id)
{
	struct CatFoodInfo catFoodInfo;

	return catFoodInfo;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int SkuNumber, const double* ProductPrice, const int CalPerServing, const double* ProductWeight)
{

}

// 7. Logic entry point
void start() {
	openingMessage();

	displayCatFoodHeader();
}