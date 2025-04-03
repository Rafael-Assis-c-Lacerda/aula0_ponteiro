#include <stdio.h>
#include <stdlib.h>

void swap(float *x, float *y){
    float *temp = malloc(sizeof(float));
    *temp=*x;
    *x=*y;
    *y=*temp;

}

int main()
{
    int x=5;
    int *y;

    y=&x;
    printf("\n declarado na posicao %p", &y);

    printf("\n ocupando %i bytes", sizeof(int));

    printf("\n aponta para %p posicao", &x);
    printf("\n aponta para %p posicao", y);

    printf("\n e guarda o valor %i", *y);

    printf("\n soma de numeros");
    float *a;
    a = malloc(sizeof(float));

    scanf("%f",a);

    float *b = malloc(sizeof(float));
    scanf("%f",b);

    float *c = malloc(sizeof(float));
    *c= *a+*b;
    printf("\n e guarda o valor %f", *c);

    swap(a,b);

    printf("\n e guarda o valor %f e %f", *a,*b);
    return 0;
}
