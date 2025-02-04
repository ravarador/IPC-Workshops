/*
	==================================================
	Workshop #6 (Part-2):
	==================================================
	Name   : Jexequiel Ravni Arador
	ID     : 127168219
	Email  : jrarador@myseneca.ca
	Section: NBB
*/

// ----------------------------------------------------------------------------
// defines/macros

#define MAX_PRODUCT_NUM 3
#define SUGGESTED_SERVING_SIZE_GRAMS 64
#define CONVERSION_FACTOR_LBSKG 2.20462
#define MAX_INT 2147483647
// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo {
	int SkuNumber;
	double ProductPrice;
	int CalPerServing;
	double ProductWeight;
};

struct ReportData {
	int SkuNumber;
	double ProductPrice;
	int CalPerServing;
	double WeightInLbs;
	double WeightInKg;
	int WeightInG;
	double TotalServings;
	double CostPerServing;
	double CalPerServingCost;
};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* num);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int numberOfProducts);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int id);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int SkuNumber, const double* ProductPrice, const int CalPerServing, const double* ProductWeight);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* lbsToConvert, double* kgResult);

// 9. convert lbs: g
int convertLbsG(const double* lbsToConvert, int* gResult);

// 10. convert lbs: kg / g
void convertLbs(const double* lbsToConvert, double* kgResult, int* gResult);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int productTotalGrams, double* numOfServingsResult);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* productPrice, const double* totalNumOfServings, double* costPerServingResult);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* productPrice, const double* totalNumberOfCalories, double* costPerCalResult);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo catFoodData);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData data, const int isCheapestProduct);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cheapestCatFood);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);
