// #include <iostream>
// using namespace std;

// // Function to add two integers
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int num1 = 5, num2 = 10;

    
//     int result = add(num1, num2);

    
//     cout << "The sum is " << result << endl;

   
// }

#include <iostream>
using namespace std;

// Function to print multiplication table of a number
void printMultiplicationTable(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;

    
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    
    printMultiplicationTable(number);

}
