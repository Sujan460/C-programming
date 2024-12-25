// Let's Begin !
// WAP to read values of 3*3 matrix and display sum of even elements

#include<stdio.h>
int main(){
    int n[3][3], sum=0;
    printf("Enter numbers from 3*3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
            if(n[i][j]%2==0){
                sum=sum+n[i][j];
            }
        }
    }
    printf("The sum of even elements is: %d",sum);
    return 0;
}


// WAP to read values from the user and find the sum of all elements of a 3*3 matrix

#include<stdio.h>
int main(){
    int n[3][3], sum=0;
    printf("Enter all elements of 3*3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
            sum =sum+n[i][j];
        }
    }
    printf("The sum of all elements of 3*3 matrix is : %d",sum);
    return 0;
}


// WAP using array to enter n numbers and display the sum of those numbers which are greater than 10 
// By Reading 2D(n*n) matrix

#include<stdio.h>
int main(){
    int r,c, sum=0;
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    int n[r][c];
    printf("Enter all the elements of matrix:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&n[i][j]);
            if(n[i][j]>10){
                sum =sum+n[i][j];
            }
        }
    }
    printf("The sum of numbers greater than 10 is : %d",sum);
    return 0;
}

// // WAP using array to enter n numbers and display the sum of those numbers which are greater than 10 
// By Reading 1D matrix

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter how many numbers you want:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:-\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>10){
            sum =sum+a[i];
        }
    }
    printf("Sum of Numbers greater than 10 is: %d ",sum);
    return 0;
}

// End !