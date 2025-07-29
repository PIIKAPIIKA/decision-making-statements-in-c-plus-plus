#include<iostream>
using namespace std;
int main()
{
    int num;float a,b,sum,sub,mul,Div;
    cout<< "Enter the first number : ";
    cin >>a;
    cout<< "Enter the Second number : ";
    cin >>b;
    cout << "Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : ";
    cin >>num;
    switch(num){
        case 1:
        sum=a+b;
        cout << "The sum is : "<<sum<<endl;
        break;
        case 2:
        sub=a-b;
        cout << "The subtraction is: "<<sub<<endl;
        break;
        case 3:
        mul=a*b;
        cout << "The Multiplication is: "<<mul<<endl;
        break;
        case 4:
        Div=a/b;
        cout << "The Divition is: "<<Div<<endl;
        break;
        default:
        cout <<"Invalid input , please select values from 1 to 4";
    }
}
