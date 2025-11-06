#include<iostream>
using namespace std;
class sum{
    int n, total;
    public:
    sum(){
        n=0;total=0;
        cout<<"Default constructor called"<<endl;
    }
    sum(int num){
        n=num;
        total=(n*(n+1)/2);
        cout<<"Parameterized constructor called"<<endl;
    }
    sum(const sum &s){
        n=s.n; total=s.total;
        cout<<"Copy constructor called"<<endl;
    }
    void display(){
        cout<<"Sum"<<n<<" is:"<<total<<endl;
    }
};
int main(){
    sum s1;
    s1.display();
    int num;
    cout<<"Enter values:";
    cin>>num;
    sum s2(num);
    s2.display();
    sum s3(s2);
    s3.display();
    return 0;
}