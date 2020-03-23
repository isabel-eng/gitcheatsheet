#include <stdio.h>
int main(int argc, char*argv[])
{
    int i=0;
    if(argc==1) //first comparison
    {
        printf("you only have one argument. You suck.\n");
    }
    else if(argc>1 && argc <4) //both things have to 
    {
        printf("here's your arguments:\n");
        for(i=0;i<argc;i++)
        {
            printf("%s", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("you have too many arguments. You suck.\n");
    }
    
    return 0;
}

/*
Extra credit
1) 
and &&; or ||; not !

2)
#include <stdio.h>
int main(int argc, char*argv[])
{
    int i=0;
    if(argc==1) //first comparison
    {
        printf("you only have one argument. You suck.\n");
    }
    else if(argc>1 || argc <4) //both things have to 
    {
        printf("here's your arguments:\n");
        for(i=0;i<argc;i++)
        {
            printf("%s", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("you have too many arguments. You suck.\n");
    }
    
    return 0;
}
Output:
./a.out ya tengo sueño
here's your arguments:
./mainyatengosueño

3)
excercise 10:
#include <stdio.h>

int main (int argc, char *argv[])
{
    int i =0;

    if(i<argc)
    {
        printf("argc %d: %s\n", i, argv[i]);
        i++;
    } else {break}

    char *states[]=
    {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    int num_states =4;
    if(i<num_states)
    {
        printf("state %d: %s\n",i,states[i]);
        i++;
    } else {break}

    return 0;
}
excercise 11:
#include <stdio.h>
int main (int argc, char *argv[]) //go through each string in argv
{
    int i=0;
    if(i<argc) //counts the arguments with argc and prints the argv
    {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    } else {break}
        char*states[]= //array of strings
        {
            "California", "Oregon", "Washington", "Texas"
        };

        int num_states=4;
        i=0;
        if(i<num_states)
        {
            printf("state %d: %s\n ", i, states[i]);
            i++;
        } else {break}

    return 0;
}




*/
