#include<iostream>
using namespace std;
int main(){
    int m,n,p;
    cout << "enter the sides of the triangle :";
    cin >> m;
    cin >> n;
    cin >> p;
    if(m+n>p && n+p>m && p+m>n){
        cout <<"IT IS A TRIANGLE" << "\n";
        if(m==n || n==p || p==m){
            cout <<"IT IS A  ISOSCELES TRIANGLE"<< "\n";
        }
        if(m==n==p){
            cout <<"IT IS A EQUILATERAL TRIANGLE"<< "\n";
        }
        if(m!=n && n!=p && p!=m){
            cout <<"IT IS A SCALENE TRIANGLE" << "\n";
        }
    }
   
    else{
        cout << "IT IS NOT A TRIANGLE" << "\n";
    }
    return 0;
}