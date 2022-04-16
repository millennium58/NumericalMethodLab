#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int arr[MAX];
int n;
float x;

float func(float x){
    int i;
    float sum=0;
    for(int i=n-1;i>=0;i--){
        sum=sum+arr[i]*pow(x,i);
    }
    return sum;
}
void secMethod(float x1,float x2,int n1){

    for(int i=1;i<=n1;i++){
        x=(x1*func(x2)-x2*func(x1))/(func(x2)-func(x1));
        cout<<"iteration number"<<i<<endl;
        cout<<"func(x1)"<<func(x1)<<endl;
        cout<<"func(x2)"<<func(x2)<<endl;
        cout<<"x: "<<x<<endl;
        x1=x2;
        x2=x;
    }

}

int main(){
    float x1,x2;
    int n1,i;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"\nenter co-efficient of equation: \n";
    for(int i=0;i<n;i++){
        cout<<"x"<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"enter the iteration number: ";
    cin>>n1;
    cout<<"enter the value of x1: ";
    cin>>x1;
    cout<<"enter the value of x2: ";
    cin>>x2;
    secMethod(x1,x2,n1);
    cout<<endl;
    cout<<"absolute value of sacent method: "<<x;

}
