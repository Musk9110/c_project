#include <stdio.h>
#include <inttypes.h>
#define MONTHS 12
#define SIZE 10
#define YEARS 5
#define ROWS 3
#define COLS 4

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
int sum(int ar[], int n);
void function_11();
int sump(int * start, int * end);
void function_12();
void function_13();
void function_14();
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
void function_15();
void function_16();
void function_17();
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int(*ar)[COLS], int rows);
void function_18();
int sum2d_1(int rows, int cols, int ar[rows][cols]);
void function_19();
void function_20();
void test();
void change(int *n, int *m);



int main(){
    function_19();
    return 0;
}

void test()
{
    int x, y;
    x = 1;
    y = 8;
    printf("x = %d,y = %d\n", x, y);
    change(&x, &y);
    printf("Now x = %d, y = %d\n", x, y);

}

void change(int *n, int *m)
{
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

void function_1()
{
    int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
}

void function_2()
{
    int no_data[SIZE];
    int i;
    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i<SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
}

void function_3()
{
    int some_data[SIZE] = { 1492, 1066};
    int i;

    printf("%2s%14s\n", "i", "some_data[i]");
    for (i=0;i<SIZE;i++)
        printf("%2d%14d\n", i, some_data[i]);
}

void function_4()
{
    const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30, 31};
    int index;

    for (index=0;index<(sizeof days / sizeof days[0]);index++)
        printf("Month %2d has %d days.\n", index+1, days[index]);
}

void function_5()
{
//    int days[MONTHS] = {31, 28, [4]=31, 30, 31, [1]=29};
//    int i;
//
//    for (i = 0; i<MONTHS; i++)
//        printf("%2d %d\n", i+1, days[i]);
    int days[] = {1, [6] = 23};
    int days1[] = {1, [6] = 4, 9, 10};
    int i;

//    for (i = 0; i<(sizeof days / sizeof days[0]); i++)
//        printf("%2d %d\n", i+1, days[i]);
    for (i = 0; i<(sizeof days1 / sizeof days1[0]); i++)
        printf("%2d %d\n", i+1, days1[i]);
}

void function_7()
{
    const float rain[YEARS][MONTHS] =
            {
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},

            };
    int year, month;
    float subtot, total;

    printf("  YEAR   RAINFALL  (inches)\n");
    for(year=0, total=0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
    printf(" Nov Dec\n");

    for (month=0; month < MONTHS; month++)
    {
        for (year=0, subtot; year < YEARS;year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot / YEARS);
    }
    printf("\n");
}

void function_8(){
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    printf("%23s  %15s\n", "short", "double");
    for (index=0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
}

void function_9(){
    int days[MONTHS] =  { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30, 31};
    int index;
    for (index = 0; index < MONTHS;index++)
        printf("Month %2d has %d days.\n", index+1, *(days + index));
}

void function_10(){
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}

void function_11()
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
}

int sump(int * start, int * end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        start++;
    }
    return total;
}

int data[2] = { 100, 200 };
int more_data[2] = { 300, 400 };

void function_12(){
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = more_data;
    printf("*p1 = %d,  *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d,  ++(*p3) = %d\n", *p1++, *++p2, ++(*p3)); //(*p3)++ = %d,
    printf("*p1 = %d,   *p2 = %d,   *p3 = %d\n", *p1, *p2, *p3);
}

void function_14()
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22 };

    printf("The original dip array:\n");
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE);
}

void show_array(const double ar[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%8.3f ", ar[i]);
    putchar('\n');
}

void mult_array(double ar[], int n, double mult)
{
    int i;

    for(i = 0; i < n; i++)
        ar[i] *= mult;
}

void function_15()
{
    int zippo[4][2] = {
            {2, 4},
            {6, 8},
            {1, 3},
            {5, 7}
    };
    printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf("*zippo[0] = %d\n", *zippo[0]);
    printf("**zippo = %d\n", **zippo);
    printf("zippo[2][1] = %d\n", zippo[2][1]);
    printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo+2) + 1));
}

void function_16()
{
    int zippo[4][2] = {
            {2, 4},
            {6, 8},
            {1, 3},
            {5, 7}
    };
    int (*pz)[2];
    pz = zippo;
    printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
    printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf("*pz[0] = %d\n", *pz[0]);
    printf("**pz = %d\n", **pz);
    printf("pz[2][1] = %d\n", pz[2][1]);
    printf("*(*(pz+2) + 1) = %d\n", *(*(pz+2) + 1));
}

void function_17()
{
    int junk[ROWS][COLS] = {
            { 2, 4, 6, 8},
            { 3, 5, 7, 9},
            { 12, 10, 8, 6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
}

void sum_rows(int ar[][COLS], int rows)
{
    int r, c, tot;

    for(r = 0; r < rows; r++)
    {
        tot = 0;
        for (c=0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }
}

void sum_cols(int ar[][COLS], int rows)
{
    int r, c, tot;
    for (c=0; c<COLS; c++)
    {
        tot = 0;
        for (r = 0;r<rows;r++)
            tot += ar[r][c];
        printf("col %d:sum = %d\n", c, tot);
    }
}

int sum2d(int ar[][COLS], int rows)
{
    int r, c, tot=0;
    for(r = 0; r < rows; r++)
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];

    return tot;
}


void function_18()
{
    int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
            {2, 4, 6, 8},
            {3, 5, 7, 9},
            {12, 10, 8, 6}
    };

    int more_junk[ROWS - 1][COLS + 2] = {
            {20, 30, 40 ,50, 60, 70},
            {5, 6, 7, 8, 9, 10}
    };

    int varr[rs][cs];

    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            varr[i][j] = i * j + j;

    printf("3*5 array\n");
    printf("Sum of all elements = %d\n", sum2d_1(ROWS, COLS, junk));

    printf("2*6 array\n");
    printf("Sum of all elements = %d\n", sum2d_1(ROWS - 1, COLS + 2, more_junk));

    printf("3*10 VLA\n");
    printf("Sum of all elements = %d\n", sum2d_1(rs, cs, varr));
}

int sum2d_1(int rows, int cols, int ar[rows][cols])
{
    int r, c, tot=0;

    for(r = 0; r < rows; r++)
        for(c = 0;c < cols;c++)
            tot += ar[r][c];

    return tot;
}


void function_19(){
    int i,j,n,m,a[10][10],k=1,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=1;
    for(p=0;p<n;p++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>=k&&j>=k&&i<=(n-k-1)&&j<=(n-k-1))
                    a[i][j]+=1;
            }
        }
        k++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("%d",a[i][j]);
        printf("\n");
    }

}

