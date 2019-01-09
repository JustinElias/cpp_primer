//Exercies Section 1.4.2

#include <iostream>

using namespace std;

int main(){
    /*
     * what does the following for loop do? what is the final sum?
     * 
     * int sum = 0;
     * for (int i = -100; i <= 100, ++i)
     * sum += i;
     * 
     * This for loop starts at -100. As long as i is less than or 
     * equal to 100, the sum will equal the sum of -100 to 100. 
     * This should end up summing to 0.
     * */
     
     //Write a for loop that sums the numbers from 50 to 100
     int num1 = 0;
     
     for (int i = 50; i<=100; ++i){
         num1 +=i;
     }
     
    cout<< num1 <<endl;
     
}

