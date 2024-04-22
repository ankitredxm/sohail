#include<iostream>
using namespace std;


class space{
    float x,y,x1,y1;
    public:
    space(){
        x=0;
        y=0;
        x1=0;
        y1=0;
      }
   public:
    friend void operator>>(istream& in,space& s){
        cout<<"Enter x and y coordinates for first point,separeted by a space: ";
        in>>s.x>>s.y;
        
        cout<<"Enter x and y coordinates for second point,separeted by a space: ";
        in>>s.x1>>s.y1;

        

          
    }
    void chk(){
        if(x==x1&&y==y1){
            cout<<"\nInvalid Co-ordinates";
            exit(0);
        }
    }
    friend void operator<<(ostream& out,space& s){
       cout<<"\nFirst point is at ("<<s.x<<","<<s.y<<")\n\n";
       cout<<"Second point is at ("<<s.x1<<","<<s.y1<<")";
    }
};

int main(){
     space s;
     cin>>s;
     s.chk();
     cout<<s;


}