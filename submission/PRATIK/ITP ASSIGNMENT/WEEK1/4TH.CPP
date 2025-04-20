#include<iostream>
using namespace std;
int main(){
    int a,b,r,m=0;
    cout << "ENTER THE DECIMAL NUMBER:";
    cin >> a;
    b=a;
    r=a;
    int c=a;
    int n=0;
    while(b){
        b=b/2;
        n+=1;
    }
    while(r){
        r=r/8;
        m+=1;
    }
    int arr[n],arr1[n];
    int k=0,i;
    while(a){
        if(a%2==0){
            arr[k]=0;
        }
        else{
            arr[k]=1;
        }
        k=k+1;
        a=a/2;
    }
    cout<< "binary is:";
    for(int i=n-1;i>=0;--i){
        cout << arr[i];
    }
    cout << endl;
    int j=0;
    while(c){
        arr1[j]=c%8;
        c=c/8;
        j=j+1;
    }
    cout << "octal no. is:";
    for(int j=m-1;j>=0;--j){
        cout << arr1[j];
    }
    return 0;
}