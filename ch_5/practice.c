#include <stdio.h>
#define TIME_SHIFT 60
#define DAY_SHIFT 7
#define FEET 0.032808399
#define INCHES 0.393700787

void practice_1();
void practice_2();
void practice_3();
void practice_4();
void practice_5();
void practice_6();
void practice_7();
void practice_8();
void practice_9();
double cube(double n);

int main()
{
//    practice_1();
//    practice_2();
//    practice_3();
//    practice_4();
//    practice_5();
//    practice_6();
//    practice_7();
    practice_8();
//    practice_9();
    return 0;
}

void practice_1(){
    int hour, minute, print_minute;
    printf("Please Enter the minute:\n");
    scanf("%d", &minute);
    while (minute > 0)
    {
        if (minute >= 60) {
            hour = minute / TIME_SHIFT;
            print_minute = minute % TIME_SHIFT;
            printf("%d hour %d minutes\n", hour, print_minute);
        } else{
            printf("%.1f hour\n", (float)minute / TIME_SHIFT);
        }
        printf("Please Enter the minute:\n");
        scanf("%d", &minute);

    }
}


void practice_2(){
    int num, end_num;
    printf("Please Enter the num:\n");
    scanf("%d", &num);
    end_num = num + 10;
    printf("num is %d\n", num);
    while (++num <= end_num)
    {
        printf("num is %d\n", num);

    }
}


void practice_3(){
    int week, days, print_days;
    printf("Please Enter the days:\n");
    scanf("%d", &days);
    while (days)
    {
        if (days < DAY_SHIFT)
            printf("%d days are %d weeks, %d days\n", days, 0, days);
        else{
            week = days / DAY_SHIFT;
            print_days = days % DAY_SHIFT;
            printf("%d days are %d weeks, %d days\n", days, week, print_days);
        }
        printf("Please Enter the days:\n");
        scanf("%d", &days);

    }
}


void practice_4(){
    float height, feet, inches;
    printf("Please Enter height(cm)\n");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height * FEET;
        inches = height * INCHES;
        printf("%.1f cm = %d feet,%.1f inches\n", height, (int)feet, inches);
        printf("Please Enter height(cm)\n");
        scanf("%f", &height);
    }

}

void practice_7(){
    double n, result;
    printf("Please Enter a num:\n");
    scanf("%lf", &n);
    result = cube(n);
    printf("result is %lf", result);
}

double cube(double n){
    double result;
    result = n * n * n;
    return result;
}

void practice_8(){
    int first_operand, second_operand, result;
    printf("Please Enter second operand:\n");
    scanf("%d", &second_operand);
    printf("Please Enter first operand:\n");
    scanf("%d", &first_operand);
    while (first_operand > 0)
    {
        result = first_operand % second_operand;
        printf("%d %% %d is %d\n", first_operand, second_operand, result);
        printf("Please Enter first operand:\n");
        scanf("%d", &first_operand);
    }
}

void practice_9(){
    int first_operand, second_operand, result;
    printf("Please Enter second operand:\n");
    scanf("%d", &second_operand);
    printf("Please Enter first operand:\n");
    scanf("%d", &first_operand);
    while (first_operand > 0)
    {
        result = first_operand % second_operand;
        printf("%d %% %d is %d\n", first_operand, second_operand, result);
        printf("Please Enter first operand:\n");
        scanf("%d", &first_operand);
    }
}