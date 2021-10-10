/*   this progream is fing  number is armstrong or not.
armstrong number abcd=a^4+b^4+c^4+d^4
   153=3 digit  so
   153=1^3+5^3+3^3
*/
#include <cassert>
#include <cmath>
#include <iostream>
using namespace  std;
int number_of_digits(int num) {
    int total_digits = 0;
    while (num > 0) {
        num = num / 10;
        ++total_digits;
    }
    return total_digits;
}

bool is_armstrong(int number) {
   if (number < 0) {
        return false;
    }
    int sum = 0;
    int temp = number;
    int total_digits = number_of_digits(number);
    while (temp > 0) {
        int rem = temp % 10;
    sum = sum + std::pow(rem, total_digits);
        temp = temp / 10;
    }
    return number == sum;
}

int main() {
   int num;
   cout<<"Enter an integer: ";
   cin>>num;
   if (is_armstrong(num) == true)
   cout<<num<<" is an Armstrong number.";
   else
   cout<<num<<" is not an Armstrong number.";
   cout<<endl;
   return 0;
    
}
