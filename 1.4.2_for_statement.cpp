//the for statement

#include <iostream>

int main(){
    int sum =0;
    //sum values from 1 through 10 inclusive
    for (int val=1; val <= 10; ++val)
        sum += val; //sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;
    
    return 0;
    
    /* 
     * Work flow:
     * 1. Create val and initialize it to 1
     * 2. Test whether val is less than or equal to 10. 
     * If the test succeeds, execute the for body. If the 
     * test fails, exit th eloop and continue execution with 
     * the first statement following the for body.
     * 3. Increment val.
     * Repeat the test in step 2, continuing with the remaining
     * steps as long as the condition is true*/
}