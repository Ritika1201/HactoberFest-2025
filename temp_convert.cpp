#include<iostream>
using namespace std;
void celsius(float f)
{   float c;
    c=(f-32)*(5/9);
    cout << c<<endl;

}
void fahrenheit(float c){
    float f;
    f=c*9/5+32;
    cout<< f <<endl;
}
int main()
{
  float a;
    
    cin>> a;
    
    int z;
    cout<<"1.convert fahrenheit to celsius"<<endl;
    cout<<"2.convert celsius to fahrenheit."<<endl;
    cin>> z;
   
    switch (z)
    {
    case 1:
        celsius(a);
        break;
    case 2:
        fahrenheit(a);
        break;
    default:
    cout<<"Invalid number! kindly enter correct number.";
        break;
    }
    return 0;
}
