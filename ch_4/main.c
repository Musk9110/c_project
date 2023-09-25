#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define DENSITY 62.4
#define PRAISE "You are an extraordinary being."
#define PI 3.14159
#define PAGES 336
#define WORDS 65618
#define BLURB "Authentic imitation!"
#define Q "\"His Hamlet was funny without being vulgar.\""
#define BOOK "War and Peace"

void function_4_1();
void function_4_2();
void function_4_3();
void function_4_4();
void function_4_5();
void function_4_6();
void function_4_7();
void function_4_8();
void function_4_9();
void function_4_10();
void function_4_11();
void function_4_12();
void function_4_13();
void function_4_14();
void function_4_15();
void function_4_16();
void function_4_17();
void review_1();
void review_5();
void review_6();
void review_7();
void review_8();
void review_9();
void review_10();
void review_11();
void review_12();
void practice_1();
void practice_2();
void practice_3();
void practice_4();
void practice_5();
void practice_6();
void practice_7();
void practice_8();

int main() {
//    function_4_1();
//    function_4_2();
//    function_4_3();
//    function_4_4();
//    function_4_5();
//    function_4_6();
//    function_4_7();
//    function_4_8();
//    function_4_9();
//    function_4_10();
//    function_4_11();
//    function_4_12();
//    function_4_13();
//    function_4_14();
//    function_4_15();
//    function_4_16();
//    function_4_17();
//    review_1();
//    review_5();
//    practice_1();
//    practice_2();
    practice_3();
//    practice_4();
//    practice_5();
//    practice_6();
//    practice_7();
//    practice_8();

    return 0;
}

void practice_1() {
    char surname[10];
    char name[10];
    printf("Please Enter surname:\n");
    scanf("%s", surname);
    printf("Please Enter name:\n");
    scanf("%s", name);
    printf("%s,%s", name, surname);
}

void practice_2() {
    char name[20];
    printf("Please Enter name:\n");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", strlen(name) + 3, name);
}

void practice_3() {
    float a, b;
    scanf("%f", &a);
    printf("%f, %e", a, a);
    scanf("%f", &b);
    printf("%f, %e", b, b);
}

void review_1()
{
    printf("He sold the painting for $%2.2f.\n", 2.3345e2);
    printf("%c,%c,%c\n", 'H', 105, '\41');
    printf("%s \nhas %d characters.\n", Q, strlen(Q));
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
}

void review_5()
{
    float cost = 12.99;
    float percent = 80.00;

    printf("This copy of \"%s\" sells for $%.2f\n", BOOK, cost);
    printf("That is %.0f%% of list\n", percent);
}

void function_4_1()
{
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hi!What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
}

void function_4_2()
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s", name, PRAISE);
}

void function_4_3()
{
    char name[40];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
}


void function_4_4()
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
}

void function_4_5()
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
}

void function_4_6()
{
    int number = 7;
    double pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
}

void function_4_7()
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
}

void function_4_8()
{
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
}


void function_4_9()
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d%05d**%05.3d**\n", 6, 6, 6, 6);
}

void function_4_10()
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
}

void function_4_11()
{
    short num = PAGES;
    short m_num = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", m_num, m_num);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
}

void function_4_12()
{
    double n1;
    double n2;
    long n3, n4;
    n1 = 3.0;
    n2 = 3.0;
    n3 = 2000000000;
    n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
}

void function_4_13()
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
}

void function_4_14()
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a"
           "long string.\n");
    printf("Here's the newest way to print a "
           "long string.\n");
}

void function_4_15()
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);
}

void function_4_16()
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number a is :%*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");
}


void function_4_17()
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);
}

