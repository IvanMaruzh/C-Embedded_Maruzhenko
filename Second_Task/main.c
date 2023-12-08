#include <stdio.h>
#include <math.h>


int main(int argC, char* argV[])
{
    // input a
    int a;

    printf("Input a (degrees): ");
    scanf("%d", &a);

    float aR = a * M_PI / 180.0;
    
    // z1 = (cos(a) + sin(a))/(cos(a) + sin(a))

    printf("z1 = %f\n", (cos(aR) + sin(aR)) / (cos(aR) + sin(aR)));
    
    // z2 = tg(2a) + sec(2a)
    
    if (a == 0 || fabs(tan(2 * aR)) < 58)
        printf("z2 = %f\n", tan(2 * aR) + 1/cos(2 * aR));
    else 
        printf("tg(2a) values are not defined.\n");
        
    return 0;
}
