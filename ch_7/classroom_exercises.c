#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>

#define STOP '|'
#define PERIOD '.'
#define SPACE ' '
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define COVERAGE 350
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))


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
void function_20();

int main()
{
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
    function_12();
//    function_13();
//    function_14();
//    function_15();
//    function_16();
//    function_17();
//    function_18();
//    function_19();
//    function_20();
    return 0;
}

void function_1()
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("%d days total: %.1f%% were below freezing.\n",
               all_days, 100.0 * (float) cold_days / all_days);
    if (all_days == 0)
        printf("No data entered!\n");
}


void function_2()
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
}


void function_3()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);
}


void function_4()
{
    double kwh;
    double bill;

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
}


void function_5()
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n", num, div);
                isPrime = false;
            }

        }
        if (isPrime)
            printf("Please enter another integer for analysis;");
        printf("Please enter an integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
}


void function_6()
{
    char ch;
    int char_count = 0;
    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            char_count++;
    }
    printf("There are %d non-quote characters.\n", char_count);
}


void function_7()
{
    char c, prev;
    int n_words = 0;
    int n_characters = 0;
    int n_lines = 0;
    int p_lines = 0;
    bool in_words = false;

    prev = '\n';

    while ((c = getchar()) != STOP)
    {
        n_characters++;
        if (c == '\n')
            n_lines++;
        if (!isspace(c) && !in_words)
        {
            in_words = true;
            n_words++;
        }
        if (isspace(c) && in_words)
            in_words = false;
        prev = c;
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters is %d, lines is %d, words is %d", n_characters, n_lines, n_words);
}


void function_8()
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE ==0) ? 0 : 1);
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }
}


void function_9()
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score(q to quit):");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value. Try again:", score);
            continue;
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
        printf("Enter next score (q to quit):");
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f.\n", n, (total / n));
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
}


void function_10()
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");
}


void function_11()
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch) {
                case 'a':
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati, racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman\n");
                    break;
                case 'e':
                    printf("echidna\n");
                    break;
                case 'f':
                    printf("fisher\n");
                    break;
                default:
                    printf("That's a stumper!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");
}

void function_12()
{
//    char ch;
//    int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//    a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//    printf("Enter some text; enter # to quit.\n");
//    while ((ch = getchar()) != '#')
//    {
//        switch (ch) {
//            case 'a':
//            case 'A': a_ct++;break;
//            case 'e':
//            case 'E': e_ct++;break;
//            case 'i':
//            case 'I': i_ct++;break;
//            case 'o':
//            case 'O': o_ct++;break;
//            case 'u':
//            case 'U': u_ct++;break;
//            default: break;
//        }
//    }
//    printf("number of vowels: A     E   I   O   U\n");
//    printf("                %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
    int year, round;
    char *animal[] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};

    scanf("%d", &year);
    if (year < 1900)
    {
        round = 12 - (abs((year - 1900)) % 12);
        printf("%s", *(animal+round));
    }
    else
    {
        round = abs((year - 1900)) % 12;
        printf("%s", *(animal+round));
    }


}