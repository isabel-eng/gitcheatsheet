#include <stdio.h>
int main(int argc, char*argv[])
{
    int bugs=100;
    double bug_rate=1.2; //double the precision of a float variable 

    printf("you have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects =1L * 1024L * 1024L * 1024L; //long is an integer with more digits
    printf("the entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("you are expected to have %f bugs.\n", expected_bugs);
    
    double part_of_universe= expected_bugs / universe_of_defects;
    printf("tant is only a %e portion of the universe.\n", part_of_universe);

    char nul_byte= '\0';
    int care_percentage = bugs * nul_byte;
    printf("which means you should care %d%%.\n", care_percentage);

    return 0;
}

/*
Extra credit

1- gcc Exercise7.c 
Exercise7.c:7:83: warning: overflow in expression; result is 0 with type
      'long' [-Winteger-overflow]
  ...1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * ...
X>8070450532247928832
1 warning generated.

2- they print the massive space of the universe of defects, which means that everything else will be extra small in comparison.

3- The entire universe has 8070450532247928832 bugs, because X>8070450532247928832


4- it transforms a number with a negative sign into one without sign

5- a char follows a character rule made by numbers and that is why you can do opperations with those numbers.

*/