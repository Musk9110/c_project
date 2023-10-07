#include<stdio.h>
#include<string.h>
#define PI 3.14
void practice_1();
void practice_2();
void practice_3();
void practice_4();
void practice_5();
void practice_6();
void practice_7();
void practice_8();
void practice_9();
void practice_10();
void practice_11();
void practice_12();
void practice_13();
void practice_14();
void practice_15();
void practice_16();
void practice_17();
void practice_18();


int main(){
//    practice_1();
//    practice_2();
//    practice_3();
//    practice_4();
//    practice_5();
    practice_6();
//    practice_7();
//    practice_8();
//    practice_9();
//    practice_10();
//    practice_11();
//    practice_12();
//    practice_13();
//    practice_14();
//    practice_15();
//    practice_16();
//    practice_17();
//    practice_18();
    return 0;
}

void practice_1()
{
    char character[26];
    for (int i = 0; i < 26; i++)
        scanf("%c", &character[i]);
    for (int j = 0; j < 26; j++)
        printf("%c", character[j]);
}

void practice_2()
{

    for (int i=0; i < 5; i++)
    {
        for(int j = 0; j <= i; j ++)
            printf("$");
        printf("\n");
    }
}


void practice_3()
{
    for (int i=70; i > 64; i--)
    {
        for(int j = 70; j >= i; j--)
            printf("%c", j);
        printf("\n");
    }
}

void practice_4()
{
    char ch = 'A';
    for (int i=0; i < 6; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", ch++);
        }

        printf("\n");
    }
}

void practice_5()
{

    for (int i=0; i < 5; i++)
    {
        char ch = '@';
        for (int k = 5; k > i; k--)
            printf(" ");
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ++ch);
        }
        for (int j=0;j<i;j++)
            printf("%c", --ch);

        printf("\n");
    }
}

void practice_6()
{
//    int start, end, num;
//    printf("Please Enter start_num");
//    scanf("%d", &start);
//    printf("Please Enter end_num");
//    scanf("%d", &end);
//    printf("Please Enter num");
//    scanf("%d", &num);
//    for (int i=0; i < (end - start); i++)
//        printf("%d\t%d\t%d\n", num+i, (num+i) * (num+i), (num+i) * (num+i) * (num+i));
    char num[5];
    int sum=0;
    scanf("%s", num);
    for (int i = 0;i<strlen(num);i++)
        sum += (int)num[i];
    printf("%d", sum);
}