#include<stdio.h>
#include<math.h>
double Root_calc(double S){
    double init_guess=S/2.0;
    double epsilon=0.000001;
    double last_x;
    do{
        last_x=init_guess;
        init_guess=(init_guess+(S/init_guess))/2.0;
    }while(fabs(init_guess-last_x)>epsilon);
    return init_guess;
}
int main(){
    double S;
    scanf("%lf",&S);
    printf("The Square root of %.2lf is %.6lf\n",S,Root_calc(S));
    return 0;
}