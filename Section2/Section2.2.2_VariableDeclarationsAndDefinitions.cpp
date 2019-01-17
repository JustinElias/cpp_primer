//2.2.2 Variable Declaration and Definitions
#include <iostream>

using namespace std;

int main(){
/*
 * A declaration makes a name known to a program. A file that wants to use a name defined 
 * elsewhere includes a declaration for that name. 
 * A definition creates the associated entity. 
 * 
 * A variable declaration specifies the type and name of a variable. A variable definition 
 * is a declaration. In addition to specifying the name and type, a definition also allocates
 * storage and may provide the variable with an initial value.
 * 
 * To obtain a declaration that that is not also a definition, we add the extern key-word and 
 * may not provide an explicit initializer:
 */
 extern int i; //declares but does not define i;
 int j; //declares and defines j
 
 /*
  * Any declaration that includes an explicit initializer is a definition. We can provide an initializer 
  * on a variable defined as extern, but doing so overrides the extern. An extern that has an initializer 
  * is a definition:
  */
  extern double pi = 3.1416; //definition
  
  //variables must be defined exactly once but can be declared many times
}