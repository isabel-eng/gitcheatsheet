#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] =
    {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;

    // second way using pointers
    for (i = 0; i < count; i++) 
    {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    // third way, pointers are just arrays
    for (i = 0; i < count; i++) 
    {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");
    // fourth way with pointers in a stuipd conplex way
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) 
    {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    for (i = 0; i < count; i++) { //answer to extra credit 6
        printf("The address of value %d is: %p, and the address of value %s is: %p\n", ages[i], ages + i, names[i], names + i);
    }


    return 0;

}

/*
Extra credit 
1) 
for (i = 0; i < count; i++) 
{
    printf("%s has %d years alive.\n", *(names + i), *(ages + i));
}

2) 
the code is already in arrays

3)
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc) 
    {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	char *states[] = {"California", "Oregon","Washington", "Texas"};
	char *pointer=  *states[]
	int num_states = 4;
	i = 0; 
	while(i < num_states) 
    {
		printf("state %d: %s\n", i, states[i]);
		 printf("pointer state %d: %s\n", *pointer[i]) //answer
		i++;
	}
return 0;
}

4)
#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) 
    {
        print_letters(*(argv + i)); //answer
    }
} 

5)
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *names[] = { "Brenda","Patricia", "Heidy", "Juli"};

    int i = 0;
    for (i = 0; i < 4; i++) 
    {
        printf("val: %s, address: %p\n", *(names + i), names + i);
    }

    return 0;
} 
Output:
val: Brenda, address: 0x7fffd845b180
val: Patricia, address: 0x7fffd845b188
val: Heidy, address: 0x7fffd845b190
val: Juli, address: 0x7fffd845b198

6) is in the code

8)
int count = sizeof(ages) / sizeof(int);
    int i = 0;
    
    // first way using indexing
    while (i < count) 
    { //while loop
        printf("%s has %d years alive.\n", names[i], ages[i]);
        i++;
    }
    
    printf("---\n");
    
    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    // second way using pointers
    i = 0;
    while (i < count) { //while loop
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
        i++;
    }
    
    printf("---\n");
    
    // third way, pointers are just arrays
    i = 0;
    while (i < count) { //while loop
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
        i++;
    }
    
    printf("---\n");
    
    // fourth way with pointers in a stuipd conplex way
    while (cur_age - ages < count) { //while loop
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
        cur_name++;
        cur_age++;
    }
    
    return 0;
//the output does not change
*/