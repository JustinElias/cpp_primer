//Primitive Built-in Types

/*
now we are learning void. 
Void type has no associated values and 
can be used in only a few circumstances, most commonly 
as the return type for FUNCTIONS THAT DO NOT RETURN A VALUE
*/

//primitive types are in two categores: integral (character/bool)
//and floating-point types

/*
 * signed or unsigned?
 * A signed type represents negative or positive numbers 
 * (including zero)
 * Unsigned type represents only values greater than or equal to zero
 * Int, short, long, and long log are all signed. We obtain the 
 * corresponding unsigned type by adding unsigned to the type, such 
 * as unsigned long. The type unsigned int may be abbreviated as 
 * unsigned.
*/

/*
 *Deciding what type to use
 * 
 * Use an unsigned type when you know the values cannot be negative
 * Use int for integer arithmetics
 * Use short for too small and, in practice, long often has the 
 * same size as int. If you data values are larger than the minimum
 * guaranteed size of int, then use long long
 * 
 * Do not use plain char or bool in arithmetic expressions. Use them
 * only to hold chracters or truth values.
 * 
 * Use double for floating-point computations
*/