#include<iostream>
#include<string>
using namespace std;
class area {
	int len;
	int width;
	int Area;
	static int areaCount;
public:
	//default constructor
	area()
	{
		len = 0;
		width = 0;
		Area = 0;
	}
	//Overload Constructor
	area(int l, int w)
	{
		len = l;
		width = w;
		Area = len*width;
	}
	//static member function
	static int getAreaCount()
	{
		areaCount++;
		return areaCount;
	}
	//Display 
	void displayArea()
	{
		cout << "Area of " << len << " length and " << width << " width : " << Area << endl;
		cout << "Up till now Area Count : " << areaCount << endl;
	}
};
int area::areaCount = 0;
int main()
{
	int l, w;
	cout << "Enter length and width to calculate the Area : ";
	cin >> l >> w;
	area A1(l, w);
	area::getAreaCount();
	A1.displayArea();
	cout << "______________________________________________________________________" << endl;

	cout << "Enter length and width to calculate the Area : ";
	cin >> l >> w;
	area A2(l, w);
	area::getAreaCount();
	A2.displayArea();
	cout << "______________________________________________________________________" << endl;

	cout << "Enter length and width to calculate the Area : ";
	cin >> l >> w;
	area A3(l, w);
	area::getAreaCount();
	A3.displayArea();
	cout << "______________________________________________________________________" << endl;

	system("pause");
	return 0;
}