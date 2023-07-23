# include<stdio.h>
# include <math.h>
# include <stdbool.h>


int main(){
    int x;
    printf("Enter the number you want to the power of 6\n"); 
    scanf ("%d", &x);

    int s = pow(x, 6);
    printf("%d", s);


    // to check wether yoU ARE AN ADULT OR NOT

    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    if (age > 18 && age != 69){
        printf("You are officially an adult, do whatever the hell you want to do\n");
    }
    else if(age == 69){
        printf("Nice, well done deer!");
    }
    else if(age >= 13 && age < 17){
        printf("You are a teenager go get a girl or a boy if you can!");
    }
    else{
        printf("Puttar wadda hoo ja pehlay! \n");
    }

    char greeting[] = "Hello world!";
    printf("%s \n", greeting);

    float marks;
    scanf("%f", &marks);
    printf("%f", marks);
    // marks >= 50 ? printf("The student is pass\n") : printf("The student is fail... HAHA!\n");
    

    char c;
    printf("Checking whether the given Character is lower case or upper case\n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z'){
        printf("The chaacter is lower case\n");
    }
    else if (c >= 'A' && c <= 'Z'){
        printf("The character is in upper case.....haha\n");
    }


    //  loops --------
    int n, sum = 0;
    scanf("%d", &n);

    for(int i =1; i <= n; i++){
        printf("Hello World! \n");
        printf("%d \n", i);
        sum += i;
    }
    printf("%d", sum);


    int n;
    do{
        printf("Enter the number\n");
        scanf("%d", &n);
        if (n == 69){
            printf("Sharam kr BHAi sharam kr!\n");
            break;
        }

    }while(true);
    printf("The program is terminated, because you enter a very wrong number.\n");

    int num;

        printf("Enter the multiple of 7 to terminate");
    do{
        
        scanf("%d", &num);
        if (num % 7 == 0){
            printf("You have entered the correct multiple\n");
            break;
        }
        printf("Enter the correct multiple of 7 to terminate");
    } while (true);
    

}










