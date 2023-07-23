# include <stdio.h>
# include <stdbool.h>
# include <math.h>

int mul(int a, int b);
void print_hello();

void print_hello(){
    printf("HEHE\n");
}


int mul(int a, int b){
    return a *b;
}

int main(){  
    
    int x,y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    int hehe = mul(x, y);
    printf("The multiplied number is: %d\n", hehe);
    print_hello();
}