#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a =5;
    int arr[5];
    int *y = &arr[0];
    int i;
    int *x;
    x=&a;

    cout<<"The address of a ,which is stored i the pointer x is : "<<x<<" the value of x+1 is : "<<x+1<<endl;
    cout<<"The address of a ,which is stored i the pointer x is : "<<x<<" the value of x+1 is : "<<*x+1<<endl;

    for(i = 0 ; i < 6 ; i++){
        cout<<&arr[i]<<endl;
    }

    return 0;
}