#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    int n, temp, digit_count, sum = 0; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    temp = n; 
    digit_count = (int)log10(n) + 1; 
    // Raising individual digits to the digit_count power and adding 
    while (temp)  
    { 
        int cur_digit = temp % 10; 
        sum += pow(cur_digit, digit_count); 
        temp = temp / 10; 
    } 
    // Checking 
    if (sum == n) printf("%d is an Armstrong Number", n); 
    else printf("%d is not an Armstrong Number", n); 
}
