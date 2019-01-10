//1.6 The bookstore problem

/*
We need to read a file of sales transactions and produce a report that shows,
for each book, the total number of copies sold, the total revenue, and the 
average sales price. We'll assume that all the transactions for each ISBN 
are grouped together in the input.
*/

#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item total; //variable to hold data for the next transaction
	//need the first transaction and ensure that there are data to process
	if (std::cin >> total){
		Sales_item trans; //variable to hold the running sum
		//read and process the remaining transactions
		while (std::cin >= trans){
			//if we're still processing the same book
			if (total.isbn() == trans.isbn())
				total += trans; //update the running total
			else{
				//print results for the previous book
				std::cout << total <<std::endl;
				total = trans; //total now refers to the next book
			}
		}
		std::cout << total << std::endl; //print the last transaction
	} else{
		//no input, so you warn the user
		std::cerr << "No Data!" << std::endl;
		return -1; //indicate failure
	}
	return 0;
}

/*
 * We begin by including the headers that we use, iostream from the library
 * and our own Sales_item.h. Inside main we define an object named total, 
 * which we'll use to sum the data for a given ISBN. We start by reading the 
 * first transaction into total and testing whether the read was successful.
 * If the read fails, then there are no records and we fall through to the 
 * outermost else branch, which tells the user that there was no input.
 * 
 * Assuming we have successfully read a record, we execute the block following
 * the outermost if. The block starts by defining the object named trans, which
 * will hold our transactions as we read them. The while statement will read all 
 * the remaining records. As in our earlier programs, the while condition reads 
 * a value from the standard input. In this case, we read a Sales_item object
 * into trans. As long as the read succeeds, we execute the body of the while.
 * 
 * The body of the while is a single if statement. The if checks whether the 
 * ISBNs are equal. If so, we use the compound assignment operator to add trans 
 * to total. If the ISBNs are not equal, we print the value stored in total and 
 * reset total by assigning trans to it. After executing the if, we return to the 
 * condition in the while, reading the next transaction, and so on until we run 
 * out of records.
 * 
 * When the while terminates, total contains the data for the last ISBN in the 
 * file. We write the data for the last ISBN in the last statement of the block 
 * that concludes the outermost if statement.
*/