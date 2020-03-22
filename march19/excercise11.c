#include <stdio.h>
int main (int argc, char *argv[]) //go through each string in argv
{
    int i=0;
    while(i<argc) //counts the arguments with argc and prints the argv
    {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }
        char*states[]= //array of strings
        {
            "California", "Oregon", "Washington", "Texas"
        };

        int num_states=4;
        i=0;
        while(i<num_states)
        {
            printf("state %d: %s\n ", i, states[i]);
            i++;
        }

    return 0;
}


/*
Extra credit
1)
int main (int argc, char *argv[]) //go through each string in argv
{
    int i=argc;
    while(i>=0)
    {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }
        char*states[]= //array of strings
        {
            "California", "Oregon", "Washington", "Texas"
        };

        int num_states=4;
        i=0;
        while(i<num_states)
        {
            printf("state %d: %s\n ", i, states[i]);
            i++;
        }

    return 0;
}
Output:
arg 1: (null)
arg 0: ./main
state 0: California
 state 1: Oregon
 state 2: Washington
 state 3: Texas

2)
#include <stdio.h>
int main(int argc, char * argv[]) 
{
    int i = 0;
    char * states[] = //array with states names
    {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) 
    {
        printf("arg %d: %s\n", i, argv[i]);
        states[i+4] = argv[i]; //make the argv into a state
        i++;
        
    }

    int num_states = 4+argc;//add more states to the nummber of states
    i = 0;
    while (i < num_states) {//here we will print all states
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
Output:
arg 0: ./a.out                                                        
arg 1: NY                                                             
arg 2: Florida                                                        
arg 3: Arizona                                                        
state 0: California                                                   
state 1: Oregon                                                       
state 2: Washington                                                   
state 3: Texas                                                        
state 4: ./a.out                                                      
state 5: NY                                                           
state 6: Florida                                                      
state 7: Arizona

3)
#include <stdio.h>
int main(int argc, char * argv[]) 
{
    int i = 0;
    char * states[] = //array with states names
    {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) 
    {
        printf("arg %d: %s\n", i, argv[i]);
        states[i+4] = argv[i]; //make the argv into a state
        i++;
        
    }

    int num_states = 4+argc;//add more states to the nummber of states
    i = 0;
    while (i < num_states && argc<14) {//if they are too many argv, 14 will be the maximum states printed. It can be changed
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
Output:
arg 0: ./a.out                                                        
arg 1: a                                                              
arg 2: b                                                              
arg 3: c                                                              
arg 4: d                                                              
arg 5: e                                                              
arg 6: f                                                              
arg 7: g                                                              
arg 8: h                                                              
arg 9: i                                                              
arg 10: j                                                             
arg 11: k                                                             
arg 12: l                                                             
arg 13: m                                                             
arg 14: n                                                             
arg 15: o                                                             
arg 16: p                                                             
arg 17: q                                                             
arg 18: r                                                             
arg 19: s                                                             
arg 20: t       
state 0: California                                                   
state 1: Oregon                                                       
state 2: Washington                                                   
state 3: Texas                                                        
state 4: ./a.out                                                      
state 5: a                                                            
state 6: b                                                            
state 7: c                                                            
state 8: d                                                            
state 9: e                                                            
state 10: f                                                           
state 11: g                                                           
state 12: h                                                           
state 13: i  

4) Yes, the program makes acopy of my arguments, following a loop that does not stop.



*/