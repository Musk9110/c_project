#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void function_1();
void star_bar(void);
void function_2();
void show_n_char(char ch, int num);
void function_3();
int i_min(int, int);
void function_4();
void function_5();
int i_max(int, int);
void function_6();
void up_and_down(int);
void function_7();
long fact(int n);
long r_fact(int n);
void function_8();
void to_binary(unsigned long n);
void function_9();
void function_10();
void function_11();
void function_12();
void mikado(int);
void function_13();
void interchange(int u, int v);
void function_14();
void function_15();
void interchange1(int * u, int * v);
void function_16();
void function_17();
void function_18();
void function_19();
void function_20();
void function_21();
void function_22();
void function_23();
void function_24();
void function_25();

int main(){
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
    function_15();
//    function_16();
//    function_17();
//    function_18();
//    function_19();
//    function_20();
//    function_21();
//    function_22();

    return 0;
}

void function_1()
{
    star_bar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    star_bar();
}

void star_bar()
{
    int count;

    for (count=1;count<=WIDTH; count++)
        putchar('*');
    putchar('\n');
}

void function_2(){
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;

    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);

    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
}

void show_n_char(char ch, int num)
{
    int count;

    for(count=1; count <= num; count++)
        putchar(ch);
}

void function_3()
{
    int evil1, evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, i_min(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
}

int i_min(int n, int m)
{
    int min;
    min = n < m ? n : m;
    return min;
}

void function_4(){
    int a, b, c, d;
    a = INT16_MAX;
    b = INT16_MIN;
    c = INT32_MAX;
    d = INT32_MIN;
    printf("INT16_MAX: %d\n", INT16_MAX);
    printf("INT16_MIN: %d\n", INT16_MIN);
    printf("INT32_MAX: %d\n", INT32_MAX);
    printf("INT32_MAX: %d\n", INT32_MIN);
}

void function_5(){
    printf("The maximum of %d and %d is %d.\n", 3, 5, i_max(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, i_max(3.0, 5.0));
}

int i_max(int n, int m){
    return (n > m ? n : m);
}

void function_6(){
    up_and_down(1);
}

void up_and_down(int n){
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
        up_and_down(n+1);
    printf("Level %d: n location %p\n", n, &n);
}

void function_7(){
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else
        {
            printf("loop:%d factorial = %ld\n", num, fact(num));
            printf("recursion:%d factorial = %ld\n", num, r_fact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");
}

long fact(int n){
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}

long r_fact(int n)
{
    long ans;
    if (n > 0)
        ans = n * r_fact(n - 1);
    else
        ans = 1;
    return ans;
}

void function_8(){
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
}

void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');
    return;
}

void function_12(){
    int pooh = 2, bah = 5;
    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);
}

void mikado(int bah)
{
    int pooh = 10;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
}

void function_13(){
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void interchange(int u, int v){
    int temp;
    temp = u;
    u = v;
    v = temp;
}

void function_15(){
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange1(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
}

void interchange1(int * u, int * v){
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}