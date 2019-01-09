//section 1.4.3

#include <iostream>

using namespace std;

int main(){
        int sum = 0, value = 0; //define 2 integers and initialized to 0, value holds each number as we read it from the input
        //read until end-of file, calculating a rnning total of all values read
        while (std::cin >>value) //this experssion read the next number from the standard input and stores the number in value
            sum += value; // sum = sum + value
        std::cout << "Sum is: " << sum << std:: endl;
        return 0;
        
        //if we gave this program the input: 3 4 5 6
        //the output would be: Sum is: 18
}