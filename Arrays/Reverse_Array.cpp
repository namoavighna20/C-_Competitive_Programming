#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many numbers you want to enter:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of"<<" "<<i+1<<":";
        cin>>a[i];
    }
    cout<<"List of numbers are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversing the array is:"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }


    return 0;
}