//-----------------------------------APPLICABLE ON SORTED AND UNSORTED ARRAY-------//
//---------------TIME COMPLEXITY---------------//
//---------------BEST CASE=> O(1)-------------//
//---------------WORST CASE=> O(n)----------//
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"How many elements u want to enter:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value"<<" ["<<i<<"]:";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"The array of elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the value of element u want to serarch:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element is present at index"<<" ["<<i<<"]";
        }
    }

    return 0;
}