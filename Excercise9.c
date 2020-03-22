#include <stdio.h>

int main(int argc, char *argv[]){
	int numbers[4] = {0}; //Declare the array with int value
	char name[4] = {'a'}; //Declaere the array with capacity of 4 index with the value 'a')

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]); // print each each content of the index
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]); //It just has 'a'
	printf("name: %s\n", name); //Print name, that is 'a'

	// setup the numbers
	numbers[0] = 1; //Assigning a new value
	numbers[1] = 2; 
	numbers[2] = 3; 
	numbers[3] = 4; 

	// setup the name (ZED)
	name[0] = 'Z'; //Assigning a new value
	name[1] = 'e'; 
	name[2] = 'd'; 
	name[3] = '\0'; //the value is null

	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]); //Print the new values
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]); 

	// print the name like a string
	printf("name: %s\n", name); //print all the string

	// another way to use name
	char *another = "Zed"; //Is the string in a general way, but represents the same.
	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",another[0], another[1], another[2], another[3]);

    return 0;
}

/*
 EXTRACREDIT

 1)

	 warning: more '%' conversions than data arguments [-Wformat]
printf( " %s name[0]" );
          ~^
	 warning: more '%' conversions than data arguments [-Wformat]
printf( " %s name[1]" );
          ~^
	 warning: more '%' conversions than data arguments [-Wformat]
printf( " %s name[2]" );
          ~^
	 warning: more '%' conversions than data arguments [-Wformat]
printf( " %s name[3]" );
          ~^
	 warning: more '%' conversions than data arguments
      [-Wformat]
printf( " %s name[4]" );

output:
 (null) name[0] (null) name[1] (null) name[2] (null) name[3] (null) name[4]numbers: 0 0 0 0
name each: 1
name: 1
numbers: 1 2 3 4
name each: Z e d
name: Zed
another: Zed
another each: Z e d


 2)
Output:

numbers: 0 0 0 0
name each: a
name: a
numbers: 1 2 3 4
name each:

name:

another: Zed
another each: Z e d

3)
You can change the format of the array or print it using pointers

4)
I think is possible, but I don´t really understand how

5)
char name[6] = {'a'};
name[0] = 'I';
name[1] = 's';
name[2] = 'a';
name[3] = 'b';
name[4] = 'e';
name[5] = 'l';

numbers: 0 0 0 0
name each: I s a b
name: Isabel
numbers: 1 2 3 4
name each: Z e d
name: Zed
another: Zed
another each: Z e d
*/