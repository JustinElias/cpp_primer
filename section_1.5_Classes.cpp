//section 1.5: Introducing Classes

/*
 * how to define a data structure to represent our transaction data.
 * In C++ we define our data structure by defining a class. A class 
 * defines a type along with a collection of operations that are 
 * related to that type. The class mechanism is one of the most 
 * important features in C++. In fact, a primary focus of the design 
 * of C++ is to make it possible to define class types that behave as 
 * naturally as the built-in types.
 * 
 * To use a class we need to know three things:
 * 1. What is its name?
 * 2. Where is it defined?
 * 3. What operations does it support?
 * 
 * Every class defines a type. The type name is the same as the name 
 * of the class. Hence, our Sales_item class defines a type named 
 * Sales_item. When we write Sales_item item; we are saying that 
 * item is an object of type Sales_item.
 * 
 * In addition to being able to define variables of type Sales_item,
 * we can: 
 * - call a function named isbn to fetch the ISBN from a Sales_item object
 * - use the input (>>) and output (<<) operators to read and write objects 
 * of type Sales_item
 * -Use the assignment operator (=) to assign one Sales_item object to another
 * -Use the addition operator (+) to add two Sales_item objects. The two 
 * objects must refer to the same ISBM. The result is a new Sales_item object
 * whose ISBN is that of its operands and whose number sold and revenue are 
 * the sum of the corresponding values in its operands.
 * -Use the compound assignemtn operator (+=) to add one Sales_item object 
 * into another.
 * */
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){

/*
 * Reading and Writing Sales_items
 * The following program reads data from the standard input into a Sales_item 
 * object and write that Sales_item back onto the standard output:
 * */

    Sales_item book;
    //read ISBN, number of copies sold, and sales price
    cin>>book;
    //write ISBN, number of copies sold, total revenue, and average price
    cout << book << endl;
    
    /**If the input of this program is:
     * 0-201-70353-X 4 24.99
     * 
     * The output would be:
     * 0-201-70353-X 4 99.96 24.99
     * 
     * Our output says that we sold four copies of the book at 24.99 each
     * */
     
//Adding two Sales_item objects:

Sales_item item1, item2;
cin>> item1 >> item2; //read a pair of transactions
cin<< item1 + item2 <<endl; //print the sum

/**
 * If we give this program the following input:
 * 0-201-78345-X 3 20.00
 * 0-201-78345-X 2 25.00
 * 
 * our output is:
 * 0-201-78345-X 5 110 22
 * 
 * This program starts by including the Sales_item and iostream headers.
 * We then define two Sales_item objects to hold the transaction. We read 
 * data into these objects from the standard input. The output expression
 * does the addition and prints the results.
 * 
 * In this part, we use the + for Sales_items objects and results in adding 
 * the components of two Sales_items objects.
    
    return 0;
}