// Assignment 2 use of process feedback 
// Do this in processfeedback

/* Function to calculate area of circle */
#include <stdio.h>
#define PI 3.14
float areaofcircle(float radius);
float areaofcircle(float radius){
    float area;
    area = PI*radius*radius;
    return area;
}
int main()
{
    float r;
    printf("Enter the radius of a circle:\n");
    scanf("%f",&r);
    printf("Area of the circle is %f\n",areaofcircle(r));
    return 0;
}



// take 5 integer as inputs and print it in reverse order

#include<stdio.h>
int main(){
    int num[5];
    printf("Enter Any 5 numbers:\n");
    for(int i=0; i<5; i++){
        scanf("%d",&num[i]);
    }
    printf("The numbers in reverse order is:\n");
    for(int i=4; i>=0; i--){
        printf("%d\t",num[i]);
    }
    return 0;
}



// To print multiplication table of a given number upto 10
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number of which you want to print multiplication table");
    scanf("%d",&num);
    printf("The multiplication table of %d is:\n",num);
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}



// Check the number is even or odd

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check odd or even:\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("Entered number is Even");
    }
    else{
        printf("Entered number is Odd");
    }
    return 0;
}



// Write a recursive function to print sum of natural numbers 

#include<stdio.h>
int sumofnaturalnumbers(int n);
int sumofnaturalnumbers(int n){
    int sum;
    if(n==0){
        return 0;
    }
    else{
    sum = n+sumofnaturalnumbers(n-1);
    return sum;
    }

}
int main(){
    int num;
    printf("Enter a natural number:\n");
    start:
    scanf("%d",&num);
    if(num<0){
        printf("Please Enter a positive number:\n");
        goto start;
    }
    else{
    printf("The sum till the %d number is : %d",num,sumofnaturalnumbers(num));
    }
    return 0;
}

// End !