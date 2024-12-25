// WAP to ask user any n numbers and print their sum and average

#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter how many numbers you want:-\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d nmubers:-\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum =sum+a[i];
    }
    printf("The sum is %d\n",sum);
    printf("The average is %f",(double)sum/n);
    return 0;
}


 

// ask user n numbers and print the sum of odd numbers and even numbers seperately

#include<stdio.h>
int main(){
    int n, osum=0, esum=0;
    printf("Enter how many numbers you want\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            esum=esum+a[i];
        }
        else{
            osum=osum+a[i];
        }
    }
    printf("Sum of odd numbers are %d\n",osum);
    printf("Sum of even numbers are %d\n",esum);
    return 0;
}


// WAP to ask user n numbers and print prime numbers only

#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you want to enter");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    } 
    printf("The prime nmubers are:-\n");
    for(int i=0; i<n; i++){
       int count =0;
        for(int j=1; j<=a[i]; j++){
            if(a[i]%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d \n",a[i]);
        }
    }
    return 0;
}

// End !