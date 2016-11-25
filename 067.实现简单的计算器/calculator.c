#include<stdio.h>
int main(){
    double num1=0.0;
    double num2=0.0;
    //double res=0.0;
    char sign;
    printf("please intput two number:\n");
    scanf("%lf%c%lf",&num1,&sign,&num2);
    printf("\n");
    switch(sign){
        case '+':
            printf("=%lf\n",num1+num2);
        break;
        case '-':
            printf("=%lf\n",num1-num2);
        break;
        case '*':
            printf("=%lf\n",num1*num2);
        break;
        case '/':
            if(num2==0)
                printf("\n\n\aDivision by zero erroe!\n");
            else
                printf("=%lf\n",num1/num2);
        break;
        case '%':
            if((long)num2==0)
                printf("\n\n\aDivision by zero error!\n");
            else
                printf("=%ld\n",(long)num1%(long)num2);
        break;
        default:
            printf("\n\n\aDivision by zero error!\n");
        break;
    }
    return 0;
}