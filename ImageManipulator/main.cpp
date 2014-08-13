#include <iostream>

using namespace std;

int main()
{
    int opc = 0;
    while(true){
        cout<<"Please select an Option:\n1 - Read image\n2 - Save Result\n3 - Apply Gray Scale\n0 - Exit\nSelected: ";
        cin>>opc;
        switch(opc){
        case 1:
            string a;
            cout<<"Please inform File Path: ";
            cin>>a;
            cout<<"\n"<<a<<endl;
            break;
        default:
            cout<<"See ya :D "<<endl;
           return 0;
        }
    }
    return 0;
}
