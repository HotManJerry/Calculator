// Hi everyone its Calculator on C!

#include <math.h>
#include <stdio.h>
#define RESET   "\033[0m" 
#define GREEN   "\033[32m"
//^its^color^(optional)^
int main () {//main method
    //@xcxded
    double n1, n2;
    printf (GREEN "Simple Calculator\n" RESET);//title
    printf ("type ur first num:");//output
    scanf ("%lf", &n1);//input
    printf ("ur 1st num is %lf, type 2nd num:", n1);//output
    scanf ("%lf", &n2);//input
    printf ("ur 2nd num is %lf, your results:\n\n", n2);//output
    printf ("\n %lf + %lf = %lf", n1, n2, n1 + n2);//output
    printf ("\n %lf - %lf = %lf", n1, n2, n1 - n2);//output
    printf ("\n %lf × %lf = %lf", n1, n2, n1 * n2);//output
    if (n2 == 0){
        printf ("\n error");//error msg
    }
    else {
    printf ("\n %lf ÷ %lf = %lf", n1, n2, n1 / n2);//output
    }
    printf (GREEN "\n\n\nThanks 4 Using Calculator! :DDD" RESET);//bye msg
}
