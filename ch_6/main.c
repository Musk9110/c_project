#include<stdio.h>
#include<math.h>
#define ROWS 6
#define CHARS 10
#define SIZE 10
#define PAR 72

void test();
void function_1();
void function_2();
void function_3();
void function_4();
void function_5();
void function_6();
void function_7();
void function_8();
void function_9();
void function_10();
void function_11();
void function_12();
void function_13();
void function_14();
void function_15();
void function_16();
void function_17();
void function_18();
void function_19();
double power(double n, int p);
void function_20();
void function_21();
void function_22();
void function_23();
void function_24();
void function_25();
void function_26();
void function_27();
void function_28();
void function_29();
void function_30();

int main()
{
    test();
//    function_1();
//    function_2();
//    function_3();
//    function_4();
//    function_5();
//    function_6();
//    function_7();
//    function_8();
//    function_9();
//    function_10();
//    function_11();
//    function_12();
//    function_13();
//    function_14();
//    function_15();
//    function_16();
//    function_17();
//    function_18();
//    function_19();
//    function_20();
//    function_21();
//    function_22();
//    function_23();
//    function_24();
//    function_25();
//    function_26();
//    function_27();
//    function_28();
//    function_29();
//    function_30();

    return 0;
}


void test()
{
    int i = 0;
    while (++i < 4)
    {
        printf("%d\n", i);
        printf("Hi\n");
    }
    printf("%d", i);
}


void function_1(){
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + sum;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
}


void function_2(){
    int n = 5;
    while (n < 7){
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");
}

void function_4(){
    int n = 0;

    while (n++ < 3)
        printf("n is %d\n", n);
    printf("That's all this program does.\n");

}

void function_5(){
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("%lf", fabs(response - ANSWER));
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");
}

void function_6(){
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d \n", true_val, false_val);
}

void function_7(){
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);
}

void function_9(){
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);
}

void function_10(){
    const int NUMBER = 22;
    int count = 1;
    while (count <= NUMBER)
    {
        printf("Be my Valentine!\n");
        count++;
    }
}

void function_11(){
    const int NUMBER = 22;
//    int count = 1;
    for (int count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");
}


void function_12(){
    int num;
    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num*num*num);
}


void function_13(){
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf(" ounces cost\n");
    for (ounces = 1, cost=FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        printf("%5d     $%4.2f\n", ounces, cost / 100.0);
}


void function_14(){
    int t_ct;
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms you want:");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0 / power_of_2;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }
}


void function_15(){
    const int secret_code = 13;
    int code_entered;
    do {
        printf("To Enter the triskaidekaphobia club,\n");
        printf("please enter the secret code number:\n");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");
}

void function_17()
{
    int row;
    char ch;

    for (row=0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
}


void function_18()
{
    const int ROWS1 = 6;
    const int CHARS1 = 6;
    int row;
    char ch;

    for (row=0; row < ROWS1; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS1); ch++)
            printf("%c", ch);
        printf("\n");
    }
}


void function_19()
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);
    printf("The scores read in are as follows:\n");
    for (index=0; index < SIZE; index++)
        printf("%5d", score[index]);
    printf("\n");
    for (index=0; index<SIZE; index++)
        sum += score[index];
    average = (float)sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
}


void function_20()
{
    double x, x_pow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        x_pow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, x_pow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
}

double power(double n, int p)
{
    double pow = 1;
    int i;
    for (i = 1; i <= p; i++)
        pow *= n;
    return pow;
}