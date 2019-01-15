//2.2 Variables

#include <iostream>

using namespace std;

int main(){

//-----------------------------------------Type Specifier--------------------------------------------------------
/*
A type specifier followed by a list of one of more variable names seperated by commas, and ends with a semicolon.
*/

int sum = 0, value, //sum, value, and units_sold have type int
	units_sold = 0; //sum and units_sold have initial value 0

Sales_item item; //item has type Sales_item 

//string is a library type, representing a variable-length sequence of characters
string book("0-201-78345"); //book initialized from string literal

/*-------------------------------------What is an Object?-------------------------------------------------------
 * An object is a region of memory that can contain data and has a type. Some use the term object only to refer 
 * to variables or values of class types. Others distinguish between named and unnamed objects, using the term
 * variable to refer to named objects. Still, others distinguish between objects and values, using the term 
 * object for data that can be changed by the program and the term value for data that are read-only.
 * 
 * This book follows the more general usage that an object is a region of memory that has a type. We will 
 * freely use the term object regardless of whether the object has built-in or class type, is named or 
 * unnamed, or can be read or written.
 */
 
 /******************************************Initializers**************************************************
  * An object that is initialized gets the specified value at the moment it is created. The values used to 
  * initialize a variable can be artibtrarily complicated expressions. When a definition defines two ore 
  * more variables, the name of each object becomes visible immediately.
  * 
  * Initialization is NOT assignment. Initialization happens when a variable is given a value when it is 
  * created. Assignement obliterates an object's current value and replaces that value with a new one.
  ******************************************************************************************************/
  
  double price = 109.99, discount = price * 0.16; //price is defined and initialized before it is used to initialize discount
  double salePrice = applyDiscount (price, discount); //call applyDiscount and use the rturn value to initialize salePrice
  
/****************************************List Initialization********************************************
 * The language defines several different forms of initialization. For example, we can use any of the following four 
 * different ways to define an int variable named units_sold and initialize it to 0:
 ******************************************************************************************************/
 
 int units_sold2 = 0;
 int units_sold3 = {0};
 int units_sold4{0};
 int units_sold5 (0);
 
 //The compiler will not let us list initialize variables of built-in type if the initializer might lead to the loss of information:
 
 long double id = 3.1451926536;
 //int a {1d}, b = {1d}; error: narrowing conversion required
 int c(id), d = id; //okay, but value will be truncated
 
//The compiler rejects the initializations of a and b because using a long double to initialize an int is likely to lose data.

/*************************************Default Initialization***********************************************
 * When we define a variable without an initializer, the variable is default initialized and given a default 
 * value. 
 * 
 * Variables defined outside any function body are initialized to zero.
 * Variables of built-in type defined inside a function are uninitialized.
 **********************************************************************************************************/
}