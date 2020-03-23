#include <stdio.h>
#include <ctype.h>
#include <string.h> 

void print_letters(char arg[], int longitude)
{
    //funtion to print letters and determinate if they are alpha or blank spaces
    int i = 0;
    for (i = 0; arg[i]> longitude; i++)
    {
        char ch = arg[i];
        if (isalpha(ch) || isblank(ch))
        {
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}

void print_arguments(int argc, char *argv[]){//to call the function to print each letter
    int i = 0;
    for(i = 0; i < argc; i++)
    {
        int ong = strlen(argv[1]);
        print_letters(argv[i],ong);
    }
}

int main(int argc, char*argv[])
{//main function for 2 things
    print_arguments(argc, argv);
    return 0;
}


/*
Extra credit
#include <stdio.h>
#include <ctype.h>
void print_letters(char arg[])
{
    int i = 0;
    for (i = 0; arg[i]!= '\0'; i++){
        char ch = arg[i];
        if (isalpha(ch) || isblank(ch)){
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}
void print_arguments(int argc, char *argv[]){
    int i = 0;
    for(i = 0; i < argc; i++){
        print_letters(argv[i]);
    }
}

2)
void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

3)
void print_letters(char arg[], int longitude){
    int i = 0;
    for (i = 0; arg[i]> longitude; i++){
        char ch = arg[i];
        if (isalpha(ch) || isblank(ch)){
            printf("'%c' == %d ", ch, ch);
        }
        if (isdigit(ch)){
            printf("'%d' == %d ", ch);
        }
        if (isascii(ch)){
            printf("%c",ch);
        }
        
    }
    printf("\n");
}

4)
// ANSI syntax
int foo(int a, char *p) 
{ 
    return 0; 
}

*/