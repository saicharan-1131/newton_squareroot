#include<stdio.h>
#include<math.h>
double Root_calc(double S){
    double init_guess=S/2.0;//Initial_guess
    double epsilon=0.000001;//Convergence threshold: stops iterations when change is negligible
    double last_x;
    do{
        last_x=init_guess;//stores previous value to check for difference and to find whether it is converging
        init_guess=(init_guess+(S/init_guess))/2.0;
    }while(fabs(init_guess-last_x)>epsilon);//terminate when difference becomes less than epsilon
    return init_guess;
}
int main(){
    double S;//the number to find the square root of
    scanf("%lf",&S);
    printf("The Square root of %.2lf is %.6lf\n",S,Root_calc(S));
    return 0;
}