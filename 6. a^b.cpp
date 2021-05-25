#include<iostream>
using namespace std;
int main(){
    //method1- brute force, That is multiplying and updating in a loop
    //using dividing power upto they break down to 0 or 1
    int t;
    cin>>t;
    while(t--){
        long long int a,b,result=1;
        cin>>a>>b;
        while(b>0){
            if((b%2)!=0){
                result*=a;
            }
            b=b/2;
            a=a*a;
        }
        cout<<result<<endl;   
    }
    return 0;
}