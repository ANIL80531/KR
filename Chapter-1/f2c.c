#include<stdio.h>
#define	LOWER	0
#define UPPER	300
#define STEP	20
//symbolic constants are written in uppercase to distinguse them from lowercase variable names. They do not end with semicolon.They are replaced by given value during preprocessing step before compilation.
int main(){
	printf("farenheit-celsius table\n\n");
	float far = 0, celsius;
	while(far<=300){
		celsius = 5 * (far - 32) / 9.0;
		printf("%3.0f\t%6.1f\n", far, celsius);
		far += 20;
	}
	printf("Ten in octa is = %o\n, 255 in hexdecimal is = %x\n", 10, 255);
	for (far = 0; far <= 300; far = far + 20)
	{
		printf("\n%3.0f\t%6.2f", far, (5.0 / 9.0 * (far - 32)));
	}	// for loop is preferred as it is more compact.
	putchar('\n');
	for (far = UPPER; far >= LOWER; far -= STEP)
	{
		printf("%3.0f\t%6.1f\n",far,(5.0/9.0*(far-32)));
	}
	// There are several read and write functions.
	putchar('A');
	putchar('\n');
	char a = getchar();
	if(a=='Y' || a == 'y'){
		printf("Agreed!\n");
	}
	else{
		printf("Not agreed!\n");
	}

	/**
	 * This is a multi-line comment.
	 * Comments are ignored by compiler.
	 * Comments help us to understand program.
	 * Anything between the following symbols is a comments /* and 
	*/

	//	This is a single line comment.

	/**
	 * 	int = integers
	 * 	float = floating point numbers which have fractional/decimal part.
	 *	char = A single character - 1 byte memory
	 *	short int
	 *	long int
	 *	double = double precision floating point number
	 *	= is assignment operator which assign a intial value to the variable.
	 *	while is a loop to repeat computation operations.
	 *	if condition in parenthesis after while is true the body of loop in curly braces is executed.
	 *	It keep executing untill the condition become false.
	 *	Then it skip the body of while loop to execute next instruction after while loop.
	 *	Indentation are used to make program easy to read however compiler don't care about how a program look/indentation.
	 * 	Integer division trucate in C language. The fractional part is discarded.
	 *	printf is general-purpose output formating fucntion. In printf first argument is string of characters.
	 *	After the first string of character argument all other arguments substitute the % character is first argument.
	 *	printf is not part of C language. printf is defined in standard library for input-output.
	 *	scanf is like printf instead it read standard input instead of writing standard output.
	 *	A string is sequence/stream of characters.
	 *	!= means not equal to.
	 * 
	 * 
	 * 	
	*/


}
