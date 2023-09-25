#include<stdio.h>
#define ADJUST 7.31
#define SQUARES 64
#define SEC_PER_MIN 60
#define MAX 100


void function_5_1();
void function_5_2();
void function_5_3();
void function_5_4();
void function_5_5();
void function_5_6();
void function_5_7();
void function_5_8();
void function_5_9();
void function_5_10();
void function_5_11();
void function_5_12();
void function_5_13();
void function_5_14();
void function_5_15();
void pound(int n);
void function_5_16();
void test();

int main()
{
//    test();
//    function_5_1();
//    function_5_2();
//    function_5_3();
//    function_5_4();
//    function_5_5();
//    function_5_6();
//    function_5_7();
//    function_5_8();
//    function_5_9();
//    function_5_10();
//    function_5_11();
//    function_5_12();
//    function_5_13();
//    function_5_14();
//    function_5_15();
//    function_5_16();
    return 0;
}
void test(){
    char n;
    n = 221;
    printf("%c", n);
//    int y, n, next_num, next_num1;
//    y = 2;
//    n = 3;
//    next_num = (y + n++) * 6;
//    printf("%d\n", n);
//    next_num1 = (y + ++n) * 6;
//    printf("%d\n", n);
//    printf("%d\n", next_num);
//    printf("%d\n", next_num1);
}



void function_5_1(){
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
}

void function_5_2(){
    const double SCALE = 0.333;
    double shoe, foot;

    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");
}

void function_5_3(){
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("             cheeta    tarzan   jane\n");
    printf("First round score %4d  %8d  %8d\n", cheeta, tarzan, jane);
}

void function_5_4(){
    int num = 1;

    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }
}

void function_5_5() {
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("square  grains  total   ");
    printf("fraction of \n");
    printf("        added   grains  ");
    printf("world   total\n");
    total = current = 1.0;
    printf("%4d %13.2e  %12.2e   %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e  %12.2e   %12.2e\n", count, current, total, total / CROP);
    }
    printf("That's all.\n");

}

void function_5_6(){
    printf("integer division: 5 / 4 is %d \n", 5 / 4);
    printf("integer division: 6 / 3 is %d \n", 6 / 3);
    printf("integer division: 7 / 4 is %d \n", 7 / 4);
    printf("integer division: 7. / 4. is %1.2f \n", 7. / 4.);
    printf("integer division: 7. / 4 is %1.2f \n", 7. / 4);
}

void function_5_7(){
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);
}

void function_5_8(){
    int n = 0;
    size_t int_size;

    int_size = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, int_size);

}

void function_5_9(){
    int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds(<=0 to quit):\n");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");
}

void function_5_10(){
    int ultra = 0, super = 0;
    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }
}

void function_5_11(){
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;
    pre_b = ++b;
    printf("a   a_post  b   pre_b   \n");
    printf("%1d     %5d     %5d     %5d\n", a, a_post, b, pre_b);
}

void function_5_12(){
    int count = MAX + 1;
    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
}


void function_5_13(){
    int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
    printf("sum = %d\n", sum);
}


void function_5_14(){
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = ch + 1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = 1107;
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);
}


void function_5_15(){
    int times = 5;
    char ch = '!';
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound((int)f);
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}


const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

void function_5_16()
{
    double dist_k, dist_m;
    double rate;
    int min, sec;
    int time;
    double m_time;
    int m_min, m_sec;

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &dist_k);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;
    dist_m = M_PER_K * dist_k;
    rate = dist_m / time * S_PER_H;
    m_time = (double) time / dist_m;
    m_min = (int) m_time / S_PER_M;
    m_sec = (int) m_time % S_PER_M;

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", dist_k, dist_m, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", m_min);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", m_sec, rate);
}
