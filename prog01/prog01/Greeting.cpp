#include<iostream>
#include<string>
using namespace std;
int main(){
	string name; //intitialize a string variable
	cout<<"What is your name?"; //prompt for name
	cin>>name; //input name
	cout<<"Hello, "<<name<<", nice to meet you!"<<endl;
	system("pause");
	return 0;
}