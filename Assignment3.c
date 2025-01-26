// Assignment 3 Let's go !
// It's all about calling a function 

/* No return type no arguments*/
#include <stdio.h>

void greet(){
    char a[100] = "Hello, world\n";
    printf(" %s",a);
}
void dispalyMessage(){
    printf("Welcome to C programming");

}
int main(){
    greet();
    dispalyMessage();
    return 0;

}

// No return types with arguments
// print multiplication table of number provided
#include<stdio.h>
    void printTable(int n){
        printf("The multiplication of %d are:\n",n);
        for(int i=1; i<=10; i++){
            printf("%d * %d = %d\n",n,i,n*i);
        }
    }
    int main(){
        int n;
         printf("Enter a number \n");
        scanf("%d",&n);
    printTable(n);
    return 0;
}


// With return type no arguments
// 1st prime number between 100 and 200 
#include<stdio.h>
// function for prime number

int getNumber(){
    int prime, count =0;
    for(int i=100; i<200; i++){
        count= 0;
        for(int j=1; j<=i; j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        prime = i;
        return prime;
    }
    }
    return prime;
}
    
    // function that returns the current year
    int currentyear(){
        int y;
        printf("Enter the current year in AD:\n");
        scanf("%d",&y);
        return y;

    }

int main(){
    int a = getNumber();
    printf("The  1st prime number between 100 to 200 are:\n%d\n",a);

    int b = currentyear();
    if(b==2025){
        printf("Current year is: %d\n",b);
    }
    else{
        printf("%d is not acurrent year.",b);
    }
    return 0;
}


// with return type with arguments

#include<stdio.h>
// function that accept two number as arguments and returns the sum
int add(int a, int b){
    int sum = a+b;
    return sum;
}

// function that return 1 if the number is prime , return 0 if not prime
int isprime(int a){
   int count = 0;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num1,num2;
    printf("Enter two numbers for addition:\n");
    scanf("%d%d",&num1,&num2);
    int a = add(num1,num2);
    printf("The sum is %d\n",a);

    int p;
    printf("Enter number to check prime:\n");
    scanf("%d",&p);
    int pr =isprime(p);
    if(pr==1)
    printf("Number is prime so it returns %d\n",pr);
    else
    printf("Number is not prime so it returns %d",pr);
    return 0;
}

// End of assignment 3. Hope to see you on Assignment 4 !
