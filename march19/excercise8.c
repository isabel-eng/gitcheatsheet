#include <stdio.h>

int main(int argc, char *argv[])
{   int areas[]={10, 12, 13, 14, 20}; //create an array of 5 ints
    char name[]= "Zed"; //[] indicates that there is no lenght given
    char full_name[]={
        'Z','e','d',' ','A','.',' ','S','h','a','w','\0' //another method to create an array
                    };
    printf("the size of an int: %ld\n", sizeof(int)); //sizeof is to ask how big things are in bytes
    printf("the size of areas (int[]): %ld\n", sizeof(areas));
    printf("the number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
    printf("the first area is %d, the 2nd %d.\n", areas[0], areas[1]);
    printf("the size of a char: %ld\n", sizeof(char));
    printf("the size of name (char[]): %ld\n", sizeof(name));
    printf("the number of chars:%ld\n", sizeof(name)/sizeof(char));
    printf("the size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("the number of chars: %ld\n", sizeof(full_name)/sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);


    return 0;
}

/*
Extra credit
1)
area[0]=100;
area[1]=610;
area[2]=235;
area[3]=161;

output:
the size of an int: 4
the size of areas (int[]): 20
the number of ints in areas: 5
the first area is 100, the 2nd610.
the size of a char: 1
the size of name (char[]): 4
the number of chars:4
the size of full_name (char[]): 12
the number of chars: 12
name="Zed" and full_name="Zed A. Shaw"

2)
name[0]='I';
name[1]='s';
name[2]='a';
full_name[0]='I'
full_name[1]='s'
full_name[2]='a'
full_name[3]=' '
full_name[4]='M'
full_name[5]='.'

output:
the size of an int: 4
the size of areas (int[]): 20
the number of ints in areas: 5
the first area is 100, the 2nd610.
the size of a char: 1
the size of name (char[]): 4
the number of chars:4
the size of full_name (char[]): 7
the number of chars: 7
name="Isa" and full_name="Isa M."

3)
areas[0]=100;
name[0]= areas[0];
output:
the size of an int: 4
the size of areas (int[]): 20
the number of ints in areas: 5
the first area is 100, the 2nd610.
the size of a char: 1
the size of name (char[]): 4
the number of chars:4
the size of full_name (char[]): 7
the number of chars: 7
name="dsa" and full_name="Isa M."

4)
If a processor has 16 bit, an int is 2 bytes.
If a processor has 32 or 64 bbit, an int is 4 bytes.

*/