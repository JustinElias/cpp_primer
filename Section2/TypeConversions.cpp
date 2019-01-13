//2.1.2 Type Conversions

#include <iostream>

using namespace std;

int main(){
    bool b = 42; //b is true
    int i = b; //i has value 1 because b is true
    i = 3.14; //i has value 3
    double pi = i; //pi has value 3.0
    unsigned char c = -1; //assumin 8-bit chars, c has value 255
    signed char c2 = 256; //assuming 8-bit chars, the value of c2 is undefined
    
    //Expressions Involving Unsigned Types
    
    unsigned u = 10;
    int f = -42;
    cout << f + f <<endl; //prints -84
    cout << u + f << endl; //if 32-bit, prints 4294967264
    
    /*
     * In the first expressions, we are adding two negative int numbers
     * 
     * In the second expression, the int value -42 is converted to unsigned 
     * before the addition is done. Converting a negative number to unsigned 
     * behaves exactly as if we had attempted to assign that negative value to an 
     * unsigned object. 
     */
     
     //Regardless of whether one or both operands are unsigned, if we subtract a 
     //value from an unsigned, we must be sure that the result cannot be negative
     
     unsigned u1 = 42, u2 = 10;
     cout << u1 - u2 << endl; //okay, results in 32
     cout << u2 - u1 << endl; //okay, but the result will wrap around
     
     /*
      * The fact that an unsigned cannot be less than zero also affects how 
      * we write loops. For example, you were to write a loop that used the 
      * decrement operator to print th enumbers from 10 down to 0. The loop 
      * would probably look something like this:
      */
      
      for (int i=10; i>=0; --i){
          cout << i <<endl;
      }
      
      //we might thing that we can rewrite the loop using an unsigned :
      
      for (unsigned i = 10; i>=0; --i){ //THIS IS WRONG!!!
          cout << i <<endl;
      }
      
      /*
       * when u is 0, we will print 0 and then exectue the expression in 
       * the for loop. The expression, --i, subtracts 1 from i. This will 
       * result in -1 and it won't fit in an unsigned value. As with any 
       * other out-of-range result of --i, when i is 0, is 4294967295
       *
       * One way to write this loop is to use a while instead of a for. 
       * Using a while lets us decrement before (rather than after)
       * printing our value:
       */
       
       unsigned v = 11; //start the loop one past the first element we want to print
       while (u > 0) {
           --u;
           cout << u << endl;
       }
}