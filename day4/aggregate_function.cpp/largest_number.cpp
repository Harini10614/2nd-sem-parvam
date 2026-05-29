#include<iostream>
using namespace std;

//Function to find the larger number
int findLargest(int a, int b) {
    if (a>b)
        return a;
    else 
        return b;
}
 
int main() {
    int num1 , num2;

    cout << "Enter two numbers:";
    cin >> num1 >> num2;

    int largest = findLargest(num1,num2);

    cout << "Largest number is:" << largest;
     
    return 0;
} 