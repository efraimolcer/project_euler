/*  Problem 001
    <p>If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.</p>
    <p>Find the sum of all the multiples of 3 or 5 below 1000.</p>
*/

#include <stdio.h>
#define MAX 1000

int main(){
    int sum;
    int i;
    
    sum = 0;
    i   = 1;
    while(i < MAX){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
        i++;
    }
    printf("Sum below %d: %d\n", MAX, sum);

    return 0;
}