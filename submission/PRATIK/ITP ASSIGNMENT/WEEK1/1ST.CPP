#include<iostream>
using namespace std;
int main(){
    int i;
    int flag=0;
    for(int i=1;i<=100;i++){
            if(i%15==0){
            cout << "FizzBuzz" << endl;
           continue;
            flag=1;
        }
             if(i%5==0){
            cout << "BUZZ" << endl;
            continue;
            flag=2;
        }  
        if (i%3==0 ){
            cout << "FIZZ" << endl;
            continue;
            flag=3;
    
        }
        if(flag==0){
            cout << i << endl;
          }
            }
     



    return 0;
}

