/*
	==================================================
	Workshop #6 (Part-2):
	==================================================
	Name   : Jexequiel Ravni Arador
	ID     : 127168219
	Email  : jrarador@myseneca.ca
	Section: NBB
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include<stdio.h>

// User-Defined Libraries
#include "w6p2.h"

// ----------------------------------------------------------------------------
// PART-1

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
void openingMessage(const int numberOfProducts)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", numberOfProducts);
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



// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* lbsToConvert, double* kgResult) {
	double kg;

	kg = *lbsToConvert / 2.20462;

	if (kgResult != NULL)
		*kgResult = kg;

	return kg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* lbsToConvert, int* gResult) {
	double g;

	g = convertLbsKg(lbsToConvert, NULL) * 1000;

	if (gResult != NULL)
		*gResult = g;

	return g;
}

// 10. convert lbs: kg and g
void convertLbs(const double* lbsToConvert, double* kgResult, int* gResult) {

}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int productTotalGrams, double* numOfServingsResult) {

}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* productPrice, const double* totalNumOfServings, double* costPerServingResult) {

}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* productPrice, const double* totalNumberOfCalories, double* costPerCalResult) {

}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo data) {

}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg\n", SUGGESTED_SERVING_SIZE_GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData data, const int isCheapestProduct) {

}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cheapestCatFood) {

}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo catFoodInfos[MAX_PRODUCT_NUM] = { { 0 } };

	openingMessage(MAX_PRODUCT_NUM);

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
