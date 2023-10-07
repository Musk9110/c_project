#include <stdio.h>
#include <string.h>
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
void function_6();
void function_7();
void function_8();
void function_9();
void function_10();
void function_11();
void function_12();

int main(){
//    function_1();
//    function_2();
    function_3();
//    function_4();
//    function_5();
//    function_6();
//    function_7();
//    function_8();
//    function_9();
//    function_10();
//    function_11();
//    function_12();

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