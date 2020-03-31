#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include <ctype.h>

#define CHANCES 5

char* word;
int x;
int n;
char temp [100];
char palabra[100];

int main (int argc, char* argv[])
{
    //the program uses 2 arg
    if (argc !=2)
    {
        printf("not valid\n");
        return 1;
    }
    //we print that the user can pick between 0-9, to get a word assigned

    n= atoi(argv[1]);
    if(n<0 || n>9)
    {
        printf("there are only 10 words available");
        return 2;
    }
    // words avariable
    switch (argv[1][0])
    {
        case '0':
            word= "hogwarts";
            break;
        case '1':
            word= "beautiful";
            break;
        case '2':
            word= "anatomy";
            break;
        case '3':
            word= "everything";
            break;
        case '4':
            word= "project";
            break;
        case '5':
            word= "marshmallow";
            break;
        case '6':
            word= "swing";
            break;
        case '7':
            word= "bushfire";
            break;
        case '8':
            word= "heart";
            break;
        case '9':
            word= "symbolism";
            break;
        
    }
    // invite to guess the word
    printf ("welcome to the hangman game,you have 5 tries, every letter counts as a try, don't use capital letters, \n\n\n");
    int x = strlen (word);
    temp[x] = '\0';
    for (int i=0; i<x; i++)
    {
        printf("_ ");
        temp[i] = '_';
    }
    printf("\n\n");

    //write chances of mistakes

    palabra[x] = '\0';
    int i=1;

    while (i< CHANCES)
    {
        printf("write a letter: ");
        char letter = getchar();
        {
            for(int i=0;i<strlen (word); i++)
            {
                if (letter == word [i])
                {
                    temp[i] = letter;
                }
                else if (isupper(letter))
                {
                printf("ONLY LOWER CASE\n");
                break;
                } 
                else if (isdigit(letter))
                {
                printf("ONLY LETTERS\n");
                break;
                }
                else if (!isalpha(letter))
                {
                printf("ONLY ALPHABETIC CHARACTERS");
                break;
                }
            
            }
            printf("%s \n", temp);
            if (strcmp(word, temp) ==0)
            {
            //the user guessed
                printf("\n\n congrats, you win! \n");
                break;
            }
            else if(i==5)
            {
                printf("\n\n sorry, you lost \n");
                break;
            }
            printf("\n");
        }
            printf("you tried %i times \n\n\n", i++);        
    }

}