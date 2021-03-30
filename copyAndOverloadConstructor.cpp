#include<iostream>
#include<iostream>
using namespace std;
class person {
	string Name;
	int age;
	bool Employeement_status;
	string Fvrt_sports;
public:
	//default Constructor
	person()
	{
		Name = "NULL";
		age = 0;
		Employeement_status = true;
		Fvrt_sports = "swimming";
	}
	//overload constructor
	person(string n, int a, bool Es, string Fs)
	{
		Name = n;
		age = a;
		Employeement_status = Es;
		Fvrt_sports = Fs;
	}
	//copy instructor
	person(const person& p)
	{
		Name = p.Name;
		age = p.age;
		Employeement_status = p.Employeement_status;
		Fvrt_sports = p.Fvrt_sports;
	}
	//display output
	void display()
	{
		cout << "Name : " << Name << endl;
		cout << "Age : " << age << endl;
		cout << "Employeement Status : " << Employeement_status << endl;
		cout << "Favourite sports : " << Fvrt_sports << endl;
	}
};
int main()
{
	person p1("Jason Depp", 23, true, "Football");        //calling overload constructor
	person p2 = p1;  //calling copy constructor
	cout << "Following are the Values of p2 object(copy from p1 object) :" << endl;
	p2.display();
	cout << endl;
	system("pause");
	return 0;
}