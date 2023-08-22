#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define PRAISE "You are an extraordinary being."
#define PI 3.14159
#define PAGES 959

void function_4_1();
void function_4_2();
void function_4_3();
void function_4_4();
void function_4_5();
void function_4_6();

int main() {
//    function_4_1();
//    function_4_2();
//    function_4_3();
//    function_4_4();
//    function_4_5();
    function_4_6();
    return 0;
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
    int number = 7;
    double pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
}

void function_4_6()
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
}