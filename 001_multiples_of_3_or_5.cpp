/*  PROBLEM 001
    <p>If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.</p>
    <p>Find the sum of all the multiples of 3 or 5 below 1000.</p>
*/

#include    <iostream>
#define     MAX 1000

using namespace std;

int main(){
    int sum = 0;
    int i = 1;
    
    for(int i = 0; i < MAX; i++)
        // Sum if the number is multiples of 3 or 5.
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    
    cout << "Sum below " << MAX << ": " << sum << endl;
    
    return 0;
}