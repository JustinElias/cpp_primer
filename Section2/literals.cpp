//2.1.3 Literals

//A value, such as 42, is known as a literal because its value is self-evident
//Every literaly has a type. The form and value of a literal determines its type

#include <iostream>

using namespace std;

int main(){
//----------------------------Integer and Floating-Point Liteals -----------------------
/*
* We can write an integer literal using deciaml, octal or hexadecimal notation.
* Integer literals that begin with 0 (zero) are interpreted as octal. Those that
* begin with either 0x as 0X are interpreted as hexadecimal. FOr examples, let's 
* show the number 20:
* 
* Decimal: 20
* Octal: 024
* Hexadecimal: 0x14
*/

//--------------------------Character and Character String Literals----------------------
/*
* 'a' is a character literaly
* "Hello World" is a string literal. THe compiler appends a \0 to every string literal, so 
* the size of a string literal is always the entire length of the string + 1
* 
* 'A' represents a single character A, "A" represents the string literal A...an array of 
* two characters, the Letter A and the null character.
* 
* Two string literals that appear adjacent to one another and that are seperated by spaces,
* tabs, or newlines are concatenated into a single literal. For example:
*/

cout << "a really, really long string literal"
        "that spans two lines" << endl;
        
//----------------------------Escape Sequences--------------------------------------------
/*
 * \ has no visible image, so we can use it for escape sequences
 * 
 * \n = newline
 * \t = horizontal tab
 * \v = vertical tab
 */
 
 cout << '\n'; //prints a new line
 cout << "\tHi! \n"; //prints a tab followed by "Hi!" and a newline
 
 /*
  * We can also write a generalized escape sequence, which is \x followed by one or more 
  * hexadecimal digits or a \ followed by one, two, or three octal digits. The value 
  * represents the numberical value of the character. Some examples (assuming the Latin-1
  * character set):
  * 
  * \7 (bell)   \12 (newline)   \40(blank)
  * \0 (null)   \115('M')   \x4d ('M')
  * 
  * As with an escape equence defined by the language, we use these escape sequences as we 
  * would any other character:
  */
  
  cout << "Hi \xdO\115!\n"; //prints Hi  MOM) followed by a new line
  cout << '\115' << '\n' //prints M followed by a new line
  
  /*
   * \ followed by more than three octal digits, only the first three are associated with 
   * the \. FOr example, "\1234" represents two characters, the character represented by the new 
   * value 123 and the character 4. \xuses up all the hex digits following it. "\x1234" represents
   * a single, 16 bit character composed from the bits corresponding to these four hexademinal digits
   */

//----------------------------Specifying the Type of a Literal-------------------------------
/*
 * L'a' - wide character literaly, type is wchar_t
 * u8"hi!" - utf-8 string literal (utf-8 encodes a Unicode character in 8 bits)
 * 42ULL - unsigned integer literal, type is unsigned long long
 * 1E-3F - single-precision floating-point literal, type is flow
 * 3.1459L - extended-precision floating-point literal, type is long double
 * 
 * 
 * 
 * ------------Character and Character String Literals------------
 * Prefix Meaning               Type
 * u      Unicode 16 Character   char16_t
 * U        Unicode 32 Character  char32_t
 * L        wide character          wchar_t
 * u8       utf-8(string literals only) char
 * 
 * 
 * ---------Integer Literals-------------------
 * Prefix   Minimum Type
 * u or U   unsigned
 * l or L   long
 * ll or LL long long
 * 
 * 
 * ----------Floating-Point Literals ----------
 * Suffix   Type
 * f or F   float
 * l or L   long double
 * 
 * If the suffix contains a U, then the literal has an unsigned type, so a decimal,
 * octal, or hexadecimal with a U suffix has the smallest type of unsigned int, 
 * unsigned long, or unsigned long long in which the literal's value fits. 
 * 
 * If the suffix conatains an L, then the literal's type will be at least long
 * 
 * If the suffix contains LL, then the literal's type will be either long long or 
 * unsigned long long.
 * 
 * We can combine U with either L or LL. For example, a literal with a suffix of UL
 * will be either unsigned long or unsigned long long, depending on whether its 
 * value fits in unsigned long.
 * 
 * 
 * -------------------------Boolean and Pointer Literals--------------------------
 * 
 * The words true and false are literals of type bool:
 */
 bool test = false;
 
 //the word nullptr is a pointer literal.
 
 
   
  
  
}