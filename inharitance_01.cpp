#include<iostream>
using namespace std;
class pen{
    public:
    string price;
    string color;
    void getdata(){
        cout<<"enter price value" <<endl;
        cin>>price;
        cout<<"enter color name"<<endl;
        cin>>color;
    }
    void putdata(){
        cout<<color<<endl <<price<<endl;
    }
};
class link:public pen{
    public:
};
int main(){
    link l;
    l.getdata();
    l.putdata();
    return 0;
}