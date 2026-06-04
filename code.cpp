#include <iostream>
using namespace std;

int main() {
    // Find character lowercase or upper case
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter\n";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter\n";
    } else {
        cout << "Not an alphabetic character\n";
    }
       
    //sum of 1-n numbers
    int n=10;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    // sum of 2 numbers
    int a , b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int sum1 = a+b;
    cout << "sum= " << sum << "\n";

    //sum of all odd numbers from 1 to n
    int n1 = 20;
    int oddSum = 0;

    for (int i = 1; i <= n1; i ++) {
        oddSum += i;
    }
    cout << "Sum of odd numbers from 1 to " << n1 << " is: " << oddSum << endl;

    //check if a number is prime or not
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;
    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }

    //sum of all numbers from 1 to N  which are divisible by 3 
    int n2 = 30;
    int sumDiv3 = 0;

    for (int i = 1; i <= n2; i++) {
        if (i % 3 == 0) {
            sumDiv3 += i;
        }
    }
    cout << "Sum of numbers from 1 to " << n2 << " divisible by 3 is: " << sumDiv3 << endl;

    //print factorial of a number N
    int n3;
    cout << "Enter a number: ";
    cin >> n3;

    long long factorial = 1;
    for (int i = 1; i <= n3; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n3 << " is: " << factorial << endl;

    return 0;
}

