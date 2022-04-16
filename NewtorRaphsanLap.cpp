#include<bits/stdc++.h>
using namespace std;
#define MAX 50
float x,n;
int arr[50];

float func(float x){
    float sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i]*pow(x,i);
    }
    return sum;
}
float dfunc(float x){
    float dsum=0;
    for(int i=n-1;i>=1;i--){
        dsum+=((float)i*(float)arr[i]*pow(x,i-1));
    }
    return dsum;
}

void NewTon(float x1,int it){
    for(int i=1;i<=it;i++){
        x=x1-func(x1)/dfunc(x1);
        cout<<"iteration number: "<<it<<endl;
        cout<<"f(x)"<<func(x1)<<endl;
        cout<<"f'(x)"<<dfunc(x1)<<endl;
        cout<<"x: "<<x<<endl;
        cout<<endl;
        x1=x;


    }
}
int main(){
    float x1,it;
    cout<<"enter the terms: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"x"<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"enter the iteration number: ";
    cin>>it;
    cout<<"enter x1: ";
    cin>>x1;
     NewTon(x1,it);
     cout<<endl;
     cout<<"the root is : "<<x<<endl;

}
