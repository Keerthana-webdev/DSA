#include <iostream>
using namespace std;

//linear search
int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i] == target)
            return i; // target found
    }
    return -1; // target not found
}

//reverse an array
void reverseArray(int arr[], int sz){
    int start = 0 , end = sz - 1;

    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//function to calculate sum of array
int findSum(int arr[], int sz){
    int sum = 0;

    for (int i = 0; i < sz; i++){
        sum += arr[i];
    }

    return sum;
}

//function to calculate product of array
int findProduct(int arr[], int sz){
    int product = 1;

    for (int i = 0; i < sz; i++){
        product *= arr[i];
    }

    return product;
}

//function to print unique values
void printUnique(int arr[], int sz){
    cout << "\nUnique elements are:\n";

    for (int i = 0; i < sz; i++){
        bool isUnique = true;

        for (int j = 0; j < sz; j++){
            if (i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        if (isUnique){
            cout << arr[i] << " ";
        }
    }
}

//function to print intersection of two arrays
void intersection(int arr1[], int sz1, int arr2[], int sz2){
    cout << "\nIntersection elements are:\n";

    for (int i = 0; i < sz1; i++){
        for (int j = 0; j < sz2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}


int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 2};
    int sz= 6;
    int target = 4;

    reverseArray(arr, sz); // Reversing the array before linear search
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << linearSearch(arr, sz , target) << endl; // Linear search

    cout << endl;

    cout << "Sum = " << findSum(arr, sz) << endl;  //sum of array
    cout << "Product = " << findProduct(arr, sz) << endl; //product of array

    printUnique(arr, sz); //print unique values

    cout << endl;

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    intersection(arr1, 4, arr2, 4);

    return 0;
}