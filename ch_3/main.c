#include <stdio.h>
#include <float.h>

void function_3_1();
void function_3_3();
void function_3_5();
void function_3_8();
void practice_1();
void practice_2();
void practice_3();
void practice_4();
void practice_5();
void practice_6();
void practice_7();
void practice_8();



int main() {
//    function_3_1();
//    function_3_3();
//    function_3_5();
//    function_3_8();
//    practice_1();
//    practice_2();
//    practice_3();
//    practice_4();
//    practice_5();
//    practice_6();
//    practice_7();
    practice_8();
    return 0;


}

void function_3_1(){
    float weight;
    float value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
}

void function_3_3()
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
}

void function_3_5(){
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
}

void function_3_8()
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
}

void practice_1()
{
    int a;
    float b, c;
    a = 2147483647;
    b = 3.4E38 * 100.0f;
    c = 0.1234E-10 / 10;
    printf("a is %d\n", a + 1);
    printf("b is %e\n", b);
    printf("c is %e\n", c);
}

void practice_2()
{
    int asc;
    printf("Please Enter a ascII:");
    scanf("%d", &asc);
    printf("asc %d is %c", asc, asc);
}

void practice_3()
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"");
}

void practice_4()
{
    float float_num;
    printf("Enter a floating-point value:");
    scanf("%f", &float_num);
    printf("fixed-point notation: %f\n", float_num);
    printf("exponential notation: %e\n", float_num);
    printf("p notation %a:", float_num);
}

void practice_5()
{
    int age_second;
    int second, age;
    second = 3.156E7;
    printf("Please Enter your age:");
    scanf("%d", &age);
    age_second = age * second;
    printf("second is %d\n", second);
    printf("your age trans second is %d", age_second);
}

void practice_6()
{
    double water_element,water_qua, qua;
    water_element = 3.0E-23;
    water_qua = 950.0;
    printf("Please Enter qua:");
    scanf("%lf", &qua);
    printf("The water num is %lf", qua * water_qua / water_element);
}

void practice_7()
{
    float height_inch, height;
    printf("Please Enter your height(inch):");
    scanf("%f", &height_inch);
    height = height_inch * 2.54;
    printf("The height is %f", height);

}

void practice_8()
{
    float cup_num;
    printf("Please Enter cup of num:");
    scanf("%f", &cup_num);
    printf("pt is %f\n", cup_num / 2);
    printf("as is %f\n", cup_num * 8);
    printf("ts is %f\n", cup_num * 8 * 2);
    printf("cs is %f\n", cup_num * 8 * 2 * 3);

}