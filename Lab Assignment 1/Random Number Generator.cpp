#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    FILE *in;
    in=fopen("random_number.txt", "w");
    time_t t;
    int a;

    srand((unsigned) time(&t));

    for(int i=1;i<=100;i++)
    {
        a=rand()%100;
        fprintf(in,"%d\n", a);
    }

    fclose(in);
    in=fopen("random_number.txt", "r");

    for(int i=1;i<=100;i++)
    {
        fscanf(in,"%d\n", &a);
        printf("%d\n", a);
    }

    fclose(in);
    return 0;
}
