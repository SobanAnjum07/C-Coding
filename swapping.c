# include <stdio.h>
# include <stdbool.h>
# include <math.h>


void swap(int a,  int b);
void _swap(int* a, int* b);
int main(){

    int x =69, y = 96;
    _swap(&x, &y);
    
    printf("After swapping: X = %d & Y = %d\n", x, y);

}

void swap(int a, int b){
    printf("Before swapping: A = %d & B = %d\n", a, b);
    int t = a;
    a = b;
    b = t;
    printf("After swapping: A = %d & B = %d\n", a, b);

}

void _swap(int*a, int* b){
    
    int t = *a;
    *a = *b;
    *b = t;
    
}