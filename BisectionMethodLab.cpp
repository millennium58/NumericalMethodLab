#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int arr[MAX];
int n;
float x;

float func(float x) {
    float sum=0;
    for(int i=n-1; i>=0; i--) {
        sum+=(arr[i]*pow(x,i));
    }
    return sum;
}

void BIMethod(float x1,float x2,int it) {
    for(int i=1; i<=it; i++) {
        x=(x1+x2)/(float)2;
        cout<<"iteration number: "<<i<<endl;
        if(func(x)==0.0) {
            cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
            cout<<"func(x1): "<<func(x1)<<endl;
            cout<<"func(x1): "<<func(x2)<<endl;
            cout<<"x: "<<x<<endl;
            cout<<endl;
            break;

        } else if(func(x1)*func(x)<0) {
            cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
            cout<<"func(x1): "<<func(x1)<<endl;
            cout<<"func(x2): "<<func(x2)<<endl;
            cout<<"x: "<<x<<endl;
            cout<<endl;
            x2=x;
        } else {
            cout<<"x1: "<<x1<<endl;
            cout<<"x2: "<<x2<<endl;
            cout<<"func(x1): "<<func(x1)<<endl;
            cout<<"func(x2): "<<func(x2)<<endl;
            cout<<"x: "<<x<<endl;
            cout<<endl;
            x1=x;
        }
    }

}



int main() {
    float x1,x2,it;
    cout<<"enter the terms: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"x"<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"enter the iteration number: ";
    cin>>it;
    cout<<"enter the value of x1: ";
    cin>>x1;
    cout<<"enter value of x2: ";
    cin>>x2;
    cout<<endl;
    BIMethod(x1,x2,it);
    cout<<endl;
    cout<<"absolute root is : "<<x<<endl;
}
