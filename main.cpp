#include <iostream>
using namespace std;

void name();
int main()
{
    cout<<"Hello World!"<<endl;
    name();
    cout<<"My name is Ekaterina\n";

    for (int i=0; i<5; i++)
    {
        cout<<"Cat\n";
    }
    return 0;
}
void name(){
    cout<< "My name is Ekaterina\n";
}