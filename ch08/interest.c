#include <stdio.h>

int main(void) 
{
    int interest_rate;
    int number_years;
    int i, j;

    scanf("%d%d", &interest_rate, &number_years);
    double interest_rate_per_year[number_years];

    for (j = 0; j < number_years; j++) {
        interest_rate_per_year[j] = 100;
    }

    for (i = 0; i < number_years; i++) {
        for (j = 0; j < sizeof(interest_rate_per_year)/sizeof(interest_rate_per_year[0]); j++) {
            interest_rate_per_year[j] *= (1.0 + (double)((interest_rate + j) / 100.0));
            printf("%.2f ", interest_rate_per_year[j]);
        }
        printf("\n");
    }

    return 0;
}