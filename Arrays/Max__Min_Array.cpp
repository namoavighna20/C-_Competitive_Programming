#include<iostream>
using namespace std;
int main(){
    int n,min,max;
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
    if(a[0]>a[1]){
        max=a[0];
        min=a[1];
    }
    else{
        max=a[1];
        min=a[0];
    }

    for(int i=2;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    cout<<max<<endl;
    cout<<min;
    return 0;
}