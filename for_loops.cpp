#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    int b;
    
    for(int n=1;n<=9;n++) {
    if (n==1) {
        cout<<"one";
    }
    if (n==2) {
        cout<<"two";
    }
    if (n==3) {
        cout<<"three";
    }
    if (n==4) {
        cout<<"four";
    }
    if (n==5) {
        cout<<"five";
    }
    if (n==6) {
        cout<<"six";
    }
    if (n==7) {
        cout<<"seven";
    }
    if (n==8) {
        cout<<"eight"<<endl;
        
    }
    if (n==9) {
        cout<<"nine";
    }
    }
    for (int n=10; n%2==0;n++) {
        cout<<"even"<<endl;
        return 0;
    }
    for (int n=10;n%2!=0;n++) {
        cout<<"odd"<<endl;
        return 0;
    }
    
    
    return 0;
}
