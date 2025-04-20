#include <iostream>
using namespace std;
int main() {
    int num,larg=0; 
    cout << "Enter a number:";
    cin >> num;
    while (num > 0) {
        int d = num % 10; 
        if (d > larg) {
            larg = d;
        }
        num /= 10;
    }

    cout << "Largest digit is:" <<  larg << endl;

}
