# include <stdio.h>
# include <stdbool.h>
# include <math.h>


void _sum(int *a, int *b, int *sum);
void _prod(int *a, int *b, int *prod);
void _avg(int *a, int *b, float *avg);


int main(){
    int sum , prod , a, b;
    float avg; 
    a = 3, b = 7;
    _sum(&a, &b, &sum);
    _prod(&a, &b, &prod);
    _avg(&a, &b, &avg);
    printf("Sum = %d, Average = %f, Product = %d\n", sum, avg, prod);
}

void _sum(int*a, int*b, int*sum){
    *sum = *a + *b;
}
void _prod(int*a, int*b, int*prod){
    *prod = *a * *b;
}
void _avg(int*a, int*b, float*avg){
    *avg = (*a + *b) / 2.0 ;
}