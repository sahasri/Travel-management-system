#include <iostream>
#include <fstream> 
#include<iomanip>
#include<windows.h>

using namespace std;

class Customers
{
public:

	string name, gender, address;
	int age, mobileno, cusID;
	char all[999];
	void detDetails()
	{
		ofstream out("old-customer.txt", ios::app);
		{
			cout << "Enter Customer ID : ";
			cin >> cusID;
			cout << "Enter Customer Name : ";
			cin >> name;
			cout << "Enter Customer Age : ";
			cin >> age;
			cout << "Enter Customer Mobile Number : ";
			cin >> mobileno;
			cout << "Enter Customer Address : ";
			cin >> address;
			cout << "Enter Customer Gender : ";
			cin >> gender;
		}
		out << "\nCustomer ID" << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number : " << mobileno << "\nAddress: " << address << "\nGender : " << gender << endl;
		out.close();
		cout << "\nSaved \nNOTE: We saved your details record for future purpose\n " << endl;
	}

	void showDetails() {
		ifstream in("old-customers.txt");
		{
			if (!in) {
				cout << "File Erroer!" << endl;
			}
			while (!(in.eof()))
			{
				in.getline(all, 999);
				cout << all << endl;
			}
			in.close();
		}
	}
};


class Booking
{
public:
	  

private:

};


class Charges
{
public:
	

private:

};





int main() {
	cout << "Hello World!" << endl;
	return 0;
}
