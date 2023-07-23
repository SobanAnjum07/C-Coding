


# include <stdio.h>
# include <math.h>
# include <stdbool.h>


int square(int* a);

int main(){
    int age = 23;
    int *p = &age;

    int a = 24;
    printf("%d\n", a);
    int sq = square(&a);
    printf("%d\n", sq);
    printf("%d\n", a);

}

int square(int* a){
    *a = *(a) * *(a);
    return(*a);
}