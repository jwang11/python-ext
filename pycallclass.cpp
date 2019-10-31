#include <iostream>
using namespace std;
 
class TestLib
{
    public:
        void display();
        void display(int a);
};

void TestLib::display()
{
    cout << "display foo" << endl;
}

void TestLib::display(int num)
{
    cout << "display " << num << endl;
}

extern "C"
{
    TestLib obj;

    void display()
    {
        obj.display(); 
    }

    void display_int(int num)
    {
        obj.display(num); 
    }
}
