#include<iostream>
using namespace std;

class odd{
    int n;
    public:
    odd(int i){
       n=i;
    }
    void operator++(){
        ++n;
        ++n;
    }
    void operator--(){
        --n;
        --n;
    }
    void display(){
        cout<<"\nThe result:....\n";
        if(n<0){
            cout<<"\nNegative Value";
            exit(0);
        }
        cout<<n;
    }
};

int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
    
    odd o(n);
    cout<<"CHOOSE YOUR OPERATOR 1)++ 2)-- : ";
    string c;
    cin>>c;
    if(c=="++"){
        ++o;
        o.display();
        
    }else{
        --o;
        o.display();
    }


    return 0;

}