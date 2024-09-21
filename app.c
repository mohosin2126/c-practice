// first print

// stdio.h=> standard(std) input (i) output(o) header(h)

#include<stdio.h>
int main (){
    printf("hello there this is me ");
    return 0;
}


// variables 

#include<stdio.h>

int main() {
    const int score = 95;
    const double pi = 3.14159265359;
    const float radius = 7.5f;
    const char grade = 'A';
    const long population = 7800000000;

    printf("Integer: %d\n", score);
    printf("Double: %.10lf\n", pi);
    printf("Float: %.2f\n", radius);
    printf("Character: %c\n", grade);
    printf("LongInteger: %ld\n", population);

    return 0;
}


// use input and output using gets and puts method 
#include <stdio.h>
int main (){
char name[50];
printf("enter your name here:");
gets(name);
printf("hello \n ");
puts(name);
}



#include<stdio.h>
int main()
{
    int i; 
    printf("size of the integer: %d",sizeof(i));
    return 0;
}

// convert ascii value 

#include<stdio.h>
int main (){
int num;
printf("Enter Your Number here:");
scanf("%d", &num);
printf("The ascii value is : %c",num);
return 0;
}



// celsius to farenheit 

#include <stdio.h>

int main() {
    float celsius = 20.5;
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%f", fahrenheit);
    return 0;
}
