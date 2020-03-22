#include <stdio.h>

int main (int argc, char *argv[])
{
    int i =0;

    for(i=1; i<argc; i++)
    {
        printf("argc %d: %s\n", i, argv[i]);

    }

    char *states[]=
    {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    int num_states =4;
    for(i=0;i<num_states;i++)
    {
        printf("state %d: %s\n",i,states[i]);
    }

    return 0;
}
/*
1
Any ode that needs to be executed many times as a condition is satisfied
2
Semicolons are not necesary for declarations because we can join them with commas in a single line 

3)

int main (int argc, char *argv[])
{
    int i =0;

    for(i=1; i<argc; i++)
    {
        printf("argc %d: %s\n", i, argv[i]);

    }

    char *states[]=
    {
        NULL,
        "Oregon",
        "Washington",
        "Texas"
    };
    int num_states =4;
    for(i=0;i<num_states;i++)
    {
        printf("state %d: %s\n",i,states[i]);
    }

    return 0;
}
Output
./a.out NewYork
arg 1: NewYork
state 0: (null)
state 1: Oregon
state 2: Washington
state 3: Texas
The null value refers to a variable without any value

4)
int main (int argc, char *argv[])
{
    int i =0;

    char *states[]=
    {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
states[0]= argv[1]; //states array to argv
argv[1]=states[1]; //argv to states array

    for(i=1; i<argc; i++)
    {
        printf("argc %d: %s\n", i, argv[i]);

    }

    int num_states =4;
    for(i=0;i<num_states;i++)
    {
        printf("state %d: %s\n",i,states[i]);
    }

    return 0;
}
Output:
./a.out NewYork
argc 1: Oregon
state 0: NewYork
state 1: Oregon
state 2: Washington
state 3: Texas


*/

