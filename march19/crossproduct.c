#include <stdlib.h>
#include <stdio.h>
int main(int argc, char ** argv) 
{
    int op = argc / 2, i, u=1;
    if (argc%2 == 0) 
    {
        printf("be careful with your arguments\n");
    } else 
        {
        float x[3], y[3], z[3];
        for (i = 0; i < op; i++) 
        {
            x[i] = atof(argv[i+u]);
            y[i] = atof(argv[op+i+u]);
        }
        z[0] = (x[1] * y[2]) - (x[2] * y[1]);
        z[1] = (x[2] * y[0]) - (x[0] * y[2]);
        z[2] = (x[0] * y[1]) - (x[1] * y[0]);
        printf("the new vector has components x = %.2f, y = %.2f and z = %.2f\n", z[0], z[1], z[2]);
        }
    return 0;
}