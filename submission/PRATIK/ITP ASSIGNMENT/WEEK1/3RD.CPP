// LARGEST DIGIT IN A NUMBER--->>>>
#include<iostream>
using namespace std;
int main(){
    int p;
    cout << "ENTER A NUMBER :";
    cin >> p;
    cout << "\n";
    int a=0,b=0;
    while(p){
        b=p%10;
        if(b>a){
            a=b;
        }
        p=p/10;
    } 
     cout << "THE BIGGEST INTEGER IS :";
     cout << a ;
    return 0;

}