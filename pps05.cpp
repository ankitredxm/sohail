#include<iostream>
using namespace std;


class employees{
    public:

   
   

    void salary(int a,int b,int c){
           int gross_salary=a+b+c;
           cout<<"Regular employees: "<<gross_salary;
           cout<<endl;
    }

    void salary(int a,int b){
        int daily_wages=a*b;
        cout<<"Daily wages: "<<daily_wages;
        cout<<endl;
        
    }

    void salary(int a){
        cout<<"Consolidated: "<<a;
        cout<<endl;
    }


};

int main(){
    int basic;
    int HRA;
    int DA;
    int wagesperhr;
    int noofhrs;
    int consolidated_pay;


        cout<<"Basic: ";
        cin>>basic;
        cout<<"HRA: ";
        cin>>HRA;
        cout<<"DA: ";
        cin>>DA;
        cout<<"wagesperhour: ";
        cin>>wagesperhr;
        cout<<"noofhours: ";
        cin>>noofhrs;
        cout<<"consolidated_pay: ";
        cin>>consolidated_pay;
        cout<<endl<<endl;
        if(HRA>basic){
            cout<<"\nInvalid Pay Scale";
            return 0;
        }
    
    employees e;
    
    e.salary(basic,HRA,DA);
    e.salary(wagesperhr,noofhrs);
    e.salary(consolidated_pay);
}