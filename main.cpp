#include <iostream>
using namespace std;

void name();
int main()
{
    cout<<"Hello World!"<<endl;
    name();
    cout<<"My name is Ekaterina\n";
    int i=0;
    while ( i<5)
    {
        cout<<"Cat\n";
        i++;
    }
    return 0;
}
void name(){
    cout<< "My name is Ekaterina\n";
}