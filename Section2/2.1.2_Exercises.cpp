//2.1.2 Exercises

//What output will the following code produce?

#include <iostream>

using namespace std;

int main(){
    unsigned u = 10, u2 =42;
    cout << u2 - u <<endl;
    cout << u - u2 <<endl;
    
    /*
     * u2-u outputs 32
     * u - u2 outputs weird number because it is a negative number
     */
    
    int i = 10, i2 = 42;
    cout << i2 - i <<endl;
    cout << i - i2 <<endl;
    
    /*
     * i2 - i outputs 32
     * i-i2 outputs -32
     */
    
    cout << i -u <<endl;
    cout << u - i <<endl;
    
    /*
     * i-u outputs 0
     * u - i outputs 0...maybe
     */
}