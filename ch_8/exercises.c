#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

void function_1();
void function_2();
void function_3();
void function_4();
void function_4_1();
void function_4_2();
void function_5();
void display(char cr, int lines, int width);
void function_6();
void display1(char cr, int lines, int width);
void function_7();
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long a, long b);
void function_8();
void function_9();
void function_10();


int main(){
//    function_1();
//    function_2();
//    function_3();
//    function_4();
//    function_4_1();
//    function_4_2();
//    function_5();
//    function_6();
//    function_7();
    function_8();
//    function_9();
//    function_10();

    return 0;
}

void function_1(){
    char ch;
    while ((ch = getchar()) != '#')
        putchar(ch);
}

void function_2(){
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);

}

void function_4(){
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with ");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y')
        printf("Well, then, is it%d?\n", ++guess);
    printf("I knew I could do it!\n");
}

void function_4_1(){
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with ");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y')
    {
        printf("Well, then, is it%d?\n", ++guess);
        while (getchar() != '\n')
            continue;
    }

    printf("I knew I could do it!\n");
}


void function_4_2(){
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with ");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue;
    }

    printf("I knew I could do it!\n");
}


void function_5(){
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
}

void display(char cr, int lines, int width)
{
    int row, col;
    for(row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}

void function_6(){
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display1(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
}

void display1(char cr, int lines, int width)
{
    int row, col;
    for(row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}

void function_7()
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("This program computers the sum of the squares of "
           "integers in a range.\nThe lower bound should not "
           "be less than -10000000 and\nthe upper bound "
           "should not be more than +1000000.\nEnter the "
           "limits (enter 0 for both limits to quit):\n"
           "lower limit:");
    start = get_long();
    printf("upper limit:");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both "
               "limits to quit):\n");
        printf("lower limit:");
        start = get_long();
        printf("upper limit:");
        stop = get_long();
    }
    printf("Done.\n");
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }

    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += (double) i * (double) i;
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;
    if (begin > end)
    {
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("Values must be %ld or greater\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("Values must be %ld or less\n", high);
        not_good = true;
    }
    return not_good;
}

void function_8()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=i;j<n;j++)
        {
            printf("%d*%d=%d\t",i ,j, i * j);
        }
        printf("%d*%d=%d\n",i,n,i*n);
    }
}