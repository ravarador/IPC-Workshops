/*
	==================================================
	Workshop #6 (Part-1):
	==================================================
	Name   : Jexequiel Ravni Arador
	ID     : 127168219
	Email  : jrarador@myseneca.ca
	Section: NBB
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
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCT_NUM);
	printf("NOTE: A 'serving' is %dg\n", SUGGESTED_SERVING_SIZE_GRAMS);
}


// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int productNumber)
{
	struct CatFoodInfo catFoodInfo = { 0 };

	printf("\nCat Food Product #%d\n", productNumber);
	printf("--------------------\n");
	printf("SKU           : "); catFoodInfo.SkuNumber = getIntPositive(&catFoodInfo.SkuNumber);
	printf("PRICE         : $"); catFoodInfo.ProductPrice = getDoublePositive(&catFoodInfo.ProductPrice);
	printf("WEIGHT (LBS)  : "); catFoodInfo.ProductWeight = getDoublePositive(&catFoodInfo.ProductWeight);
	printf("CALORIES/SERV.: "); catFoodInfo.CalPerServing = getIntPositive(&catFoodInfo.CalPerServing);

	return catFoodInfo;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int SkuNumber, const double* ProductPrice, const int CalPerServing, const double* ProductWeight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", SkuNumber, *ProductPrice, *ProductWeight, CalPerServing);
}

// 7. Logic entry point
void start() {
	int i;
	struct CatFoodInfo catFoodInfos[MAX_PRODUCT_NUM] = { { 0 } };

	openingMessage();
	
	for (i = 0; i < MAX_PRODUCT_NUM; i++) {
		struct CatFoodInfo catFoodInfo = getCatFoodInfo(i + 1);

		catFoodInfos[i].SkuNumber = catFoodInfo.SkuNumber;
		catFoodInfos[i].CalPerServing = catFoodInfo.CalPerServing;
		catFoodInfos[i].ProductPrice = catFoodInfo.ProductPrice;
		catFoodInfos[i].ProductWeight = catFoodInfo.ProductWeight;
	}

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCT_NUM; i++) {
		displayCatFoodData(catFoodInfos[i].SkuNumber, &catFoodInfos[i].ProductPrice, catFoodInfos[i].CalPerServing, &catFoodInfos[i].ProductWeight);
	}
}