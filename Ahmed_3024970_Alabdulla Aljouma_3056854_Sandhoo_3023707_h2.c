#include<stdio.h>
/* FoP-Practical Homework 2*/
/* Participant 1: Ahmed, Arif (3024970) <ISE CE> */
/* Participant 2: Alabdulla Aljouma, Muntaser (3056854) <ISE CE> */
/* Participant 3: Sandhoo, Muhammad Adeel Sarwar (3023707) <ISE EEE> */

double  power(double base, int pow)//power function
{
    int n;
    float prod=1.0;

    for(n=1;n<=pow;n++)
    {
        prod*=base;
    }

    return prod;
}



double arctan(double x, double eps){//arctan function
double nominator;
double denominator;
double sum;
double summend;
int sign;
sign=-1;
denominator=1;
nominator=x;
sum=x;

do
{
nominator=nominator*x*x;
denominator=denominator+2;
sum=sum+(sign*nominator/denominator);
sign=sign*(-1);
}while(fabs(nominator/denominator)>=eps);








return sum;

}
double factorial(int a)//factorial function
{
     double fact=1;
    for(a; a >= 2; a--)
    {
        fact= fact * a;
    }

    return fact;
}


 double pi(double eps)//pi function
{
    double dinominator, numerator, fraction, sum=1, u_fact, l_fact, power_2;
    int n=2,m;


    for (n;(numerator)/(dinominator)>= eps ; n++)
    {
        u_fact= factorial(n)*factorial(n);
        l_fact= factorial(2*n);

        m=n;
        for(m,power_2=1.0; m>0; m--)
        {
            power_2=power_2*2;
        }

        numerator=n*power_2*u_fact;
        dinominator= l_fact;

        fraction=numerator/dinominator;

        sum= sum + fraction;
    }

    return sum-3.0;
}
double arccos(double x,double eps ){//arccos function
double nomirator,denomirator,summand,sum;
int n=0,k=1;
nomirator=1;
denomirator=1;
sum=0;
summand=1;
do{
nomirator=factorial(2*n)*power(x,2*n+1);
denomirator=power(4,n)*factorial(n)*factorial(n)*k;
summand=nomirator/denomirator;
sum=sum+summand;
n++;
k=k+2;


}while(summand>=eps);

return pi(0.0000000001)/2-sum;



}


int main(){
    /*kernel*/
    printf("choice a series you would like  to calculate \n");
    unsigned ch;
    printf("(1)Arctan\n");
    printf("(2)PI\n");
    printf("(3)Arccos \n");
    printf("\n");
    printf("   to exit press  (0) \n");
scanf("%u",&ch);
if( ch== 1 ){
           printf("your selection is:%i\n",ch);
            double n,epes;

    printf("please input the value of x \n");
    scanf("%lf",&n);
printf("please enter the exactness for the calculation\n");
scanf("%lf",&epes);
printf("the arctan of:%lf is %0.12lg\n ",n,arctan(n,epes));

}else if(ch==2){
printf("your selection is:%i\n",ch);
double epsilon;
   printf("Please enter the value for epsilon:\n");
   scanf(" %lf",&epsilon);

   printf("your result = %0.12lf\n",pi(epsilon));

}else if(ch==3){
printf("your selection is %i \n",ch);
double n,epes;
printf("please enter a value for x\n");
scanf("%lf",&n);
printf("please enter the exactness for the calculation\n");
scanf("%lf",&epes);
printf("your result = %0.12lf\n",arccos(n,epes));

}else if(ch==0){

}else {printf("wrong selection \n");}
return 0;
}
