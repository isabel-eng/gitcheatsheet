#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("ERROR: You need one argument. \n"); //this is how you abort a program
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++)
    {
        char letter = argv[1][i];
        switch (letter) //evaluates if the case is correct or not and if is not, changes to the next case.
        {
        case 'a':
        case 'A':
            printf("%d: 'A'\n",i);
            break; //to no create a loop
        case 'e':
        case 'E':
            printf("%d: 'E'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n",i);
            break;
        case 'y':
        case 'Y':
            if(i > 2)
            {
                printf("%d: 'Y'\n",i);
            }
            break;
        
        default: //in case that none of the cases were correct
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    return 0;
}
/*
Extra credit
1)
#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("ERROR: You need one argument. \n"); //this is how you abort a program
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++)
    {
        char letter = argv[1][i];
        switch (letter) //evaluates if the case is correct or not and if is not, changes to the next case.
        {
        case 'a':
        case 'A':
        letter +=2;
            printf("%d: %c\n",i, letter);
            break; //to no create a loop
        case 'e':
        case 'E':
        letter +=2;
            printf("%d: %c\n",i, letter);
            break;
        case 'i':
        case 'I':
        letter +=2;
            printf("%d: %c\n",i, letter);
            break;
        case 'o':
        case 'O':
        letter +=2;
            printf("%d: %c\n",i, letter);
            break;
        case 'u':
        case 'U':
        letter +=2;
            printf("%d: %c\n",i, letter);
            break;
        case 'y':
        case 'Y':
            if(i > 2)
            {
                printf("%d: 'Y'\n",i);
            }
            break;
        
        default: //in case that none of the cases were correct
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    return 0;
}
output:
0: i
1: s is not a vowel
2: a


2)
#include <stdio.h>

int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("ERROR: You need one argument. \n"); //this is how you abort a program
        return 1;
    }
    int i = 0;
    for(i = 0, argv[1][i] != '\0', i++)
    {
        
        char letter = argv[1][i];
        switch (letter) //evaluates if the case is correct or not and if is not, changes to the next case.
        {
        case 'a':
            printf("%d: 'a'\n",i);
            break; //to no create a loop
        case 'e':
            printf("%d: 'e'\n",i);
            break;
        case 'i':
            printf("%d: 'i'\n",i);
            break;
        case 'o':
            printf("%d: 'o'\n",i);
            break;
        case 'u':
            printf("%d: 'u'\n",i);
            break;
        case 'y':
            if(i > 2)
            {
                printf("%d: 'Y'\n",i);
            }
            break;
        
        default: //in case that none of the cases were correct
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    return 0;
}
output:
expression result unused
      [-Wunused-value]
  ...0, argv[1][i] != '\0', ...
        ~~~~~~~~~~ ^  ~~~~
main.c:11:39: error: expected
      ';' in 'for' statement
      specifier
  ...!= '\0', i++)
                 ^
main.c:11:39: error: expected
      ';' in 'for' statement
      specifier
1 warning and 2 errors generated.

3)
#include <stdio.h>

int main (int argc, char *argv[])
{
    
    int i = 0;
    for(i = 0; argv[i] != '\0'; i++)
    {
        char letter = argv[1][i];
        switch (letter) //evaluates if the case is correct or not and if is not, changes to the next case.
        {
        case 'a':
        case 'A':
            printf("%d: 'A'\n",i);
            break; //to no create a loop
        case 'e':
        case 'E':
            printf("%d: 'E'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n",i);
            break;
        case 'y':
        case 'Y':
            if(i > 2)
            {
                printf("%d: 'Y'\n",i);
            }
            break;
        
        default: //in case that none of the cases were correct
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    return 0;
}
Output:
./a.our O f U
0: 'O'
1:  is not a vowel
2: 'U'

4)
#include <stdio.h>
int main (int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("ERROR: You need one argument. \n");
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++
    ){
        char letter = argv[1][i];
        if (letter == 'a' || letter == 'A')
        {
            printf("%d: 'A'\n",i);
        }else if (letter == 'e' || letter == 'E')
        {
            printf("%d: 'E'\n",i);
        }else if (letter == 'i' || letter == 'I')
        {
            printf("%d: 'I'\n",i);
        }else if (letter == 'o' || letter == 'O')
        {
            printf("%d: 'O'\n",i);
        }else if (letter == 'u' || letter == 'U')
        {
            printf("%d: 'U'\n",i);
        }else if (letter == 'y' || letter == 'Y')
        {
            if(i > 2)
            {
                printf("%d: 'Y'\n",i);
            }
        }
        else{
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}
OUT
./a.out Isa     
0: 'I'
1: s is not a vowel
2: 'a'

5)
case 'y':
case 'Y':
    if(i > 2){
        printf("%d: 'Y'\n",i);
    break;
    }

output:
./a.out Yay
0: 'Y'
1: 'a
2: 'y'
//it did not change the results

*/