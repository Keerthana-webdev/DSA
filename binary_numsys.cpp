#include <iostream>
using namespace std;

//convert decimal to binary
int decToBinary(int decNum) {
    int ans=0 , pow=1;

    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

//convert binary to decimal
int binToDecimal(int binNum) {
    int ans=0 , pow=1;

    while(binNum>0){
        int rem = binNum%10;
        ans += (rem*pow);

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    int decNum= 50;
    cout << decToBinary(decNum) << endl;

    int binNum = 1100010;
    cout << binToDecimal(binNum) << endl;

    return 0;
}