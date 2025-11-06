#include<iostream>
using namespace std;
class calculateArea{
    public:
    void area (int l,int b){
        cout<<"\n Area:"<<l*b;
    }
    void area(int s){
        cout<<"\n Area:"<<s*s;
    }
};
int main(){
    calculateArea A;
    int c,b,side;
    cout<<"Enter c,b,sid\n";
    cin>>c>>b>>side;
    A.area(c,b);
    A.area(side);
    return 0;
}