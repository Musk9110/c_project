#include <stdio.h>  /*c预处理器指令*/


void function2_1(void);
void function2_2(void);
void butler(void);
void function2_4(void);
void practice_1(void);
void practice_2(void);
void practice_3(void);
void jolly(void);
void deny(void);



int main() {

//    function2_1();
//    function2_2();
//    butler();
//    practice_1();
//    practice_2();
//    practice_3();
    jolly();
    deny();
    return 0;

}

/*程序清单2.1 first.c*/
void function2_1(void)
{
    int num; /*声明*/
    num = 1;

    printf("I am a simple ");
    printf("computer.\n");
    printf("My Favorite number is %d because it is first.\n", num);
}

/*程序清单2.2 f_ft.c*/
void function2_2(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
}

void butler(void)
{
    printf("You rang, sir?\n");
}

void practice_1(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");
}

void practice_2(void)
{
    printf("Name: Elon Musk\n");
    printf("Address: xxx\n");
}

void practice_3(void)
{
    int age, days;
    age = 29;
    days = 365;
    printf("Your age is %d\n", age * days);
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");

}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
