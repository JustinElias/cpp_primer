#include <iostream>

using namespace std;

int main(){
    /*
     write a program that uses a while to sum the numbers from 50 to 100
     */
     
    int sum = 0, val = 50;
     //keep executing the while as long as val is less than or equal to 100
     while (val <= 100){
         sum += val; //sum = sum + val
         ++val; //add 1 to val
     }
     cout << "The sum of 50 to 100 inclusive is: " << sum << endl;
     
     /* 
      * In addition to the ++ operator that adds 1 to its operand, there is a 
      * decrement operator (--) that subtracts 1. Use the decrement operator to 
      * write a while that prints the numbers from ten down to zero*/
    
      int num1 = 10; //declaring num1 and initializing to 0
      while (num1 >= 1){
          --num1;
      cout << num1 << endl;
      }
}