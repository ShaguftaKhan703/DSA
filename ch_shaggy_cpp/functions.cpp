#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int digitSum = 0;
    while (n>0)
    {
        int lastDigit = n % 10;
        n /= 10;
        digitSum += lastDigit;
    }   
    cout << digitSum << endl;

}
    //fibonacci
    int fibonacci(int num){
        int number = 0;
        int fibSum = 0;
        while(number>=0){
            fibSum = number + (number - 1);
            number++;

        }
        return 0;
        
    }



int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    sumOfDigits(num);
    cout<<fibonacci(num);
    }