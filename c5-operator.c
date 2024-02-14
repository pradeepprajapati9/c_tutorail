#include <stdio.h>

int main(){
// a operator is a symbol that perform on mathmatical and logical condition

// 1. Arithmetic operators
// +	Addition	 
// -	Subtraction	 	
// *	Multiplication	  
// /	Division	 
// %	Modulus	 	
// ++	Increment	 
// --	Decrement

int a=10;
int b=20;
printf("addtion %d\n",a+b);
a=50;
b=60;
printf("multiplication %d\n",a*b);
a=35;
b=24;
printf("subtract %d\n",a-b);
a=10;
b=5;
printf("modula %d\n",a%b);
a++;
printf("increment %d\n",a);
a--;
printf("decrement %d\n",a);




// 2. Assignment operators
// =	     x = 5	 	
// +=	     x += 3	 
// -=	     x -= 3	 
// *=	     x *= 3	 
// /=	     x /= 3	 
// %=	     x %= 3	 
// &=	     x &= 3	 
// |=	     x |= 3	 
// ^=	     x ^= 3	 
// >>=	     x >>= 3	 	
// <<=	     x <<= 3	 	

printf(" Assignment operators\n");
int x=10;
int y=20;
x+=y;
printf("additon %d",x);
x-=y;
printf("subtract %d",x);
x*=y;
printf("multiplicaiton %d",x);
x%=y;
printf("modula %d",x);
x/=y;
printf("division %d\n",x);


// 3. Comparison operators
// ==	Equal to	 
// !=	Not equal	 	
// >	Greater than	 
// <	Less than	  
// >=	Greater than or equal to	  
// <=	Less than or equal to	 




// Logical operators
// && 	Logical and	x < 5 &&  x < 10	 	
// || 	Logical or	x < 5 || x < 4	 
// !	Logical not	!(x < 5 && x < 10)

// Bitwise operators



// ternary operators;
 int age=10;
(age>=18)?  printf("your are eliglble for vote \n"):printf("your are not elible for vote\n");
 

    return 0;
}