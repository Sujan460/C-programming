// Lab4 macro and recursive function 

/* WAP that defines a macro SQUARE(X) that computes a square of a given number */
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main()
{
    int num1=5,num2=8;
   // printf("Enter two numbers\n");
    //scanf("%d%d",&num1,&num2);
    printf("The square of %d is %d\n",num1,SQUARE(num1));
    printf("The square of %d is %d\n",num2,SQUARE(num2));
    return 0;
}




// define max(a,b) that returns the maximum of two numbers

#include<stdio.h>
#define max(a,b) ((a)>(b) ? (a) : (b))
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The maximum of two numbers is: %d\n",max(a,b));
    return 0;
}



// recursive function int factorial(int n)

#include<stdio.h>
int factorial(int n);

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    int result = factorial(a);
    printf("The factorial of %d is %d",a,result);
    return 0;
}




#include<stdio.h>
int fibonacci(int n);
int fibonacci(int n){
    int f;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        f = fibonacci(n-1) + fibonacci(n-2);
        return f;
    }


}
int main(){
    int a;
    printf("Enter a numbers of fibonacci series you want to display:\n");
    scanf("%d",&a);
    //int fib = fibonacci(a);
    for(int i=0; i<a; i++){
        printf("%d\t",fibonacci(i));
    }
    return 0;
}




// WAP to takes an array of integers as input and calculate the sum of its element using a function
#include<stdio.h>
int arrsum(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
    sum = sum+a[i];
    }
    return sum;
}
int main(){
    int n;
    printf("Enter how many numbers you want to Enter\n");
    scanf("%d",&n);
    int p[n];
    printf("Enter %d numbers\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&p[i]);
    }
    printf("The sum is %d",arrsum(p,n));
    return 0;
}



// to declare 2*2 matrix and pass it to function

#include<stdio.h>

void matrix(int A[][2],int m,int n){
    printf("The elements for %d * %d matrix are\n",m,n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
         printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
            
}
int main(){
    int m,n;
    printf("Enter numbers of rows and columns\n");
    scanf("%d%d",&m,&n);
    int A[2][2];
    printf("Enter the elements for %d * %d matrix\n",m,n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    matrix(A,m,n);
    return 0;
}

// End !