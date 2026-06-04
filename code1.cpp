#include <iostream>
using namespace std;

    //calculate sum of numbers from 1 to N
    int sumN(int n){
        int sum =0;

        for(int i=1; i<=n; i++){
            sum += i;
        }
        return sum;
    }

    //calculate N factorial
    int factorialN(int n){
        int fact =1;

        for(int i=1; i<=n; i++){
            fact *=i;
        }
        return fact;
    }

    //calaculate sum of digits of a number
    int sumOfDigits(int num){
        int digSum=0;

        while(num>0){
            int lastDig = num% 10;
            num /=10;

            digSum += lastDig;
        }
        return digSum;
    }

    //calculate nCr binomial coefficient for n & r
    int factorial(int n1){
        int fact =1;

        for(int i=1; i<=n1; i++){
            fact *=i;
        }
        return fact;
    }

    //function to calc nCr
    int nCr(int n1, int r){
        int fact_n1= factorial(n1);
        int fact_r= factorial(r);
        int fact_nmr= factorial(n1-r);

        return fact_n1 / (fact_r * fact_nmr);
    }

    //WAF to check if a number is prime or not
    void checkPrime(int n3){
        int count =0;
        
        if(n3 <=1){
            cout << "not prime";
            return;
        }
        for(int i=1; i<=n3; i++){
            if(n3 % i==0){
                count++;
            }
        }
        if(count ==2)
           cout << "prime number";
        else
           cout << "not prime";
    }

    //WAF to print numbers from 1 to N
    void printNumbers(int n4){
        for(int i=1; i<=n4; i++){
            cout << i << " ";
        }
    }

    int main(){
        cout << sumN(5) << endl;
        cout << sumN(10) << endl;

        cout << factorialN(4) << endl;
        cout << factorialN(10) << endl;

        cout << "sum= " << sumOfDigits(3456) << endl;

        int n1=8, r=2;
        cout << nCr(n1,r) << endl;

        int n3;
        cout << "enter a number: ";
        cin >> n3;
        checkPrime(n3);

        int n4;
        cout << "enter n:";
        cin >> n4;
        printNumbers(n4);

        return 0;
    }