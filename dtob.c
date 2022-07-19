#include <stdio.h>

void printarray(int *array, int n);
void dtob(int *w0, int *w1, int *w2, int *w3, int *w4, double freq);

int main()
{
    double freq = 0;
    int w0[8]={0}, w1[8], w2[8], w3[8], w4[8];
    printf("input the frequence: \n");
    scanf("%lf", &freq);
    dtob(w0, w1, w2, w3, w4, freq);

    printf("w0: ");
    printarray(w0, 8);

    printf("w1: ");
    printarray(w1, 8);

    printf("w2: ");
    printarray(w2, 8);

    printf("w3: ");
    printarray(w3, 8);

    printf("w4: ");
    printarray(w4, 8);
}

void printarray(int *array, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void dtob(int *w0, int *w1, int *w2, int *w3, int *w4, double freq)
{
    int x = (int)freq;
    for (int i = 0; i < 8; i++)
    {
        w4[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        w3[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        w2[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        w1[i] = x % 2;
        x /= 2;
    }
}
