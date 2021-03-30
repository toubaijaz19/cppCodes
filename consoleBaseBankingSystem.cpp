#include<iostream>
#include<string>
using namespace std;
class bankAccount {
private:
	double balance;
	double interestRate;
	double interest;
	int transactions;
	static int count;
public:
	//default constructor
	bankAccount()
	{
		balance = 0;
		interestRate = 0.045;
	}
	void setInterestRate(double rate)
	{
		interestRate = rate;
	}
	double getInterestRate()
	{
		return interestRate;
	}
	double makeDeposit(double d)
	{
		balance = balance + d;
		return balance;
	}
	double withdraw(double wdAmount)
	{
		if (wdAmount < balance)
		{
			balance = balance - wdAmount;
			return balance;
		}
		else
		{
			cout << "ERROR!! Withdrawl Amout too Large." << endl;
		}
	}
	void calcInterest()
	{
		interest = balance * interestRate;
	}
	double getInterest()
	{
		return interest;
	}
	static void incCount()
	{
		count++;
	}
	static int getCount()
	{
		return count;
	}
	double getBalance()
	{
		return balance;
	}
	int getTransactions(int c)
	{
		transactions = c;
		return transactions;
	}
};
int bankAccount::count = 0;
int main()
{
	char choice;
	int deposit, wdrawl, count = 0;
	bankAccount p1;
	
	
	for (int i = 0; i < 6; i++)
	{
		cout << endl;
		cout << " MENU" << endl;
		cout << "____________________________________________" << endl;
		cout << "A. Display the Account Balance.             " << endl;
		cout << "B. Display the number of Transactions.      " << endl;
		cout << "C. Display Interest earned for this Period. " << endl;
		cout << "D. Make a Deposit.                          " << endl;
		cout << "E. Make a Withdrawl.                         " << endl;
		cout << "F. Add Interest for this Period.            " << endl;
		cout << "G. Exit the Program.                        " << endl;
		cout << endl << endl;
		cout << "Number of times program has taken choice : ";
		cout << bankAccount::getCount() << endl;
		cout << "Enter your Choice : ";
		cin >> choice;

		if (choice == 'A' || choice == 'a')
		{
			bankAccount::incCount();
			cout << "Current Balance : $" << p1.getBalance() << endl;
		}
		else if (choice == 'B' || choice == 'b')
		{
			bankAccount::incCount();
			cout << "There have been " << p1.getTransactions(count) << " transactions." << endl;
		}
		else if (choice == 'C' || choice == 'c')
		{
			bankAccount::incCount();
			p1.calcInterest();
			cout << "Interest Earned for this period : $" << p1.getInterest() << endl;
		}
		else if (choice == 'D' || choice == 'd')
		{
			bankAccount::incCount();
			cout << "Enter the Amount of deposit : $";
			cin >> deposit;
			p1.makeDeposit(deposit);
			cout << endl;
		}
		else if (choice == 'E' || choice == 'e')
		{
			bankAccount::incCount();
			count++;
			cout << "Enter the Amout of Withdrawl : ";
			cin >> wdrawl;
			p1.withdraw(wdrawl);
			cout << endl;

		}
		else if (choice == 'F' || choice == 'f')
		{
			bankAccount::incCount();
			p1.calcInterest();
			cout << "Interest Added." << endl;
		}
		else if (choice == 'G' || choice == 'g')
		{
			return 0;
		}
		else
		{
			cout << "ERROR!! You Entered Wrong Choice." << endl;
		}

	}
	
	system("pause");
	return 0;

}