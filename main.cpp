#include <iostream>

using namespace std;
#include <string>

class mobile
{
protected:
    int a=10;
    mobile(){
        cout<<"mobile constructor called"<<endl;
    }
    ~mobile(){
        cout<<"mobile destructor called"<<endl;
    }
   string model;
   virtual void screenshot()=0;
};

class sumsung:public mobile{
public:
    //string model;

    sumsung(string model)
    {
        cout<<"sumsung calledd"<<a;
    }
    ~sumsung()
    {
        cout<<"sumsung destctor called"<<endl;
    }
    void screenshot(){
        cout<<"screenshot for sumsung"<<model<<endl;
    }

};

class apple :public mobile{
public:
    apple(string model)
    {
        cout<<"apple constructor called"<<endl;
    }
    ~apple()
    {
        cout<<"apple destrctor called"<<endl;
    }
    void screenshot(){
        cout<<"screenshot for apple"<<endl;
    }
};

int main()
{
    apple a("apple");
    a.screenshot();
    sumsung s("sumsung");
    s.screenshot();
    return 0;
}
