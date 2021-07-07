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

// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo {
	int SkuNumber;
	double ProductPrice;
	int CalPerServing;
	double ProductWeight;
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
void openingMessage(void);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int id);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int SkuNumber, const double* ProductPrice, const int CalPerServing, const double* ProductWeight);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg


// 9. convert lbs: g


// 10. convert lbs: kg / g


// 11. calculate: servings based on gPerServ


// 12. calculate: cost per serving


// 13. calculate: cost per calorie


// 14. Derive a reporting detail record based on the cat food product data


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table


// 17. Display the findings (cheapest)


// ----------------------------------------------------------------------------

// 7. Logic entry point 

