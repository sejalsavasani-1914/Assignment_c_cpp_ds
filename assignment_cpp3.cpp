#include<iostream>
using namespace std;

class AddAmount{

int amount=50;

public:

AddAmount()
{
cout<<"Constructor without parameter\n";

}

AddAmount(int n)
{
cout<<"Initial amount in the piggie bank is: "<<amount<<endl;
amount = amount +n;
//cout<<"After adding amount\nThe final amount in the piggie bank is: "<<amount<<endl;
}

void display()
{
cout<<"After adding amount\nThe final amount in the piggie bank is: "<<amount<<endl;
}

};


int main()
{
int x;
AddAmount obj;
cout<<"Enter amount that you want to add in piggie bank: ";
cin>>x;
obj=x;;
obj.display();

return 0;
}