#include<iostream>
using namespace std;

class myClass
{
	string name;
	public:
		int age;
		bool gender;
		
		student()
		{
			cout<< "default constructor" << endl;
		}
		
		student(string s, int a, int g)
		{
			cout<<"perameterised constructor"<<endl;
			name=s;
			age=a;
			gender=g;
		}
		void printInfo
		{
			cout<<"name=";
			cout<<name<<endl;
			cout<<"age=";
			cout<<age<<endl;
			cout<<"gender=";
			cout<<gender<<endl;
		}
};
int main()
{
	student arr[3];
	for(int i=0;i<3;i++)
	{
		cout<<"name=";
		cin>>arr[1].name;
		cout<<"age=";
		cin>>arr[1].age;
		cout<<"gender=";
		cin>>arr[3].gender;
	}
	for(int i=0;i<3;i++)
	{
		arr[1].printInfo();
	}
	return 0;
}
