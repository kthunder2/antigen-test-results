#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int test_result(void);
float positive_percentage(int, int);
void display_results(int, int, float);

int main()
{
    int i = 1;
    int p,n;
    int percentage;
    srand(time(NULL));
    int test_number = (rand() % (100-1+1)+1);
    printf("Today you completed %d tests and results are as follows:\n", test_number);
    p = 0;
    n = 0;
    while (i <= test_number)
        {
        printf("Test %d: ",i);
        i++;
        if (test_result() == 1){
            printf("p\n");
            p++;

        }
        else{
            printf("n\n");
            n++;
        }

    }

    percentage = positive_percentage(p,test_number);

    display_results(p,n,percentage);





    return 0;
}

int test_result(void)
{
    int test_r = rand() % 2;
    return test_r;
}

float positive_percentage(int positive, int test_number)
{
    float per_positive;
    per_positive = (positive*100)/test_number;
    return per_positive;
}

void display_results(int positive, int negative, float percentage)
{
   printf("\nNumber of positives: %d",positive);
   printf("\nNumber of negatives: %d",negative);
   printf("\n%% of positives: %.1f",percentage);
}
