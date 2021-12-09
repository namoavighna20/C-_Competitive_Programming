//---------------------------ONLY APPLICABLE ON SORTED ARRAY--------------------//
//---------------TIME COMPLEXITY---------------//
//---------------BEST CASE=> O(1)-------------//
//---------------WORST CASE=> O(logn)----------//
#include<iostream>
using namespace std;
int main(){
    int n,mid,x;
    cout<<"Enter the number of elements:";
    cin>>n;
    int low=0,high=n-1;
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
    cout<<"Enter the value of element u want to search:";
    cin>>x;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==x){
            cout<<"Element is present at"<<" [" <<mid<< "]";
            break;
        }
        else if(x>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    return 0;

}