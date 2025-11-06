#include<iostream>
using namespace std;
class person{
    protected:
    string name="Ayush"; int age=17;
};
class student:protected person{
    int roll_no=12; 
    public:
    void display(){
        cout<<"Roll no is:"<<roll_no<<"\n Name is:"<<name<<"\n Age is:"<<age<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}