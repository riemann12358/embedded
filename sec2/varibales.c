#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<stdint.h>
#include<stdbool.h>
int main()
{
	// integers
	int basic_int = 34; // machine machine dependent 32bit / 16bit
	long int basic_long = 343434l; // fixed 32 bit
	long long int basic_long_long = 343433434343443344ll; // fixed 64 bit
	short int basic_short = 34; // fixed 16bit 
	unsigned int basic_uint;
	unsigned long int basic_ulong;
	unsigned long long int basic_ulonglong;
	unsigned short int basic_ushortint;
	// there is no boolean varibales is just 0 or (anything), stdbool
	
	// floating point types
	float basic_float = 34.34f; // 3.434e10 scientific form
	double basic_double = 34.34343;
	long double basic_long_double = 34.3434l; 

	printf("%d %d %d\n", sizeof basic_float, sizeof basic_double, sizeof basic_long_double);

	// arrays
	int arr[3434];
	int n; scanf("%d", &n);
	int arr_var[n]; // c99 // illegal , pass compiler // atmel studio
	printf("%d\n", sizeof(arr_var)/sizeof(arr_var[0]));
	printf("%d\n", arr_var[100]);// illegal access 


	// chars and strings 
	char a = 23; // 1 byte - 8 bit
	unsigned char ua; // machine dependent
	// string = char[]
	char basic_string[] = "hello\n"; // there a zero char/ terminator char at string[string size]
	
	for(int i= 0; basic_string[i] != '\0'; i++);
	strlen(basic_string); // string.h

	struct point {
		int x, y;
	};
	struct point ins = {34, 34};
	ins.x = 1;
	ins.y = 9234;
	printf("%d %d\n", ins.x, ins.y);

	
	typedef struct rectangle { 
		int length;
		int width;
	} rec_t;

	rec_t df;

	
}
