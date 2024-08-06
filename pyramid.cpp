#include<iostream>
using namespace std;
void equalise(int a[],int b[],int number){
    for(int i=0;i<number;i++){
        b[i]=a[i];
    }
}
int main(){
    int number=8; //cin>>number;
    int a[number],temp[number];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<number;i++){
        a[i]=0;
    }
    cout<<1<<endl<<1<<' '<<1<<endl;
    for(int i=3; i<=number;i++){
        temp[0]=1;
        for(int j=1;j<=i-1;j++){
            temp[j]=a[j-1]+a[j];
        }
        temp[i-1]=1;
        for(int k=0; k<i;k++){
        cout<<temp[k]<<' ';
        }
        cout<<endl;
        equalise(temp,a,number);
    }

}