#include <iostream>
#include <string>
using namespace std;

class BankAccount{

	private:
		int accountNumber;
		string accountHolderName;
		double balance;

	protected:
		void setBalance(double amount){
			balance = amount;
		}

	public:
		void setAccount(){

			cout << "Enter Account Number : ";
			cin >> accountNumber;

			cout << "Enter Account Holder Name : ";
			getline(cin >> ws, accountHolderName);

			do{
				cout << "Enter Balance : ";
				cin >> balance;
			}while(balance < 0);
		}

		void deposit(double amount){

			if(amount > 0){
				balance = balance + amount;
				cout << "Deposit Successful!" << endl;
			}
			else{
				cout << "Invalid Amount!" << endl;
			}
		}

		virtual void withdraw(double amount){

			if(amount <= 0){
				cout << "Invalid Amount!" << endl;
			}
			else if(amount <= balance){
				balance = balance - amount;
				cout << "Withdrawal Successful!" << endl;
			}
			else{
				cout << "Insufficient Balance!" << endl;
			}
		}

		double getBalance(){
			return balance;
		}

		virtual void calculateInterest(){
			cout << "Interest is not available for this account." << endl;
		}

		void displayAccountInfo(){

			cout << "\n----- Account Information -----" << endl;
			cout << "Account Number : " << accountNumber << endl;
			cout << "Account Holder Name : " << accountHolderName << endl;
			cout << "Balance : " << balance << endl;
		}
};

class SavingsAccount : public BankAccount{

	private:
		double interestRate;

	public:
		void setSavingsAccount(){

			setAccount();

			do{
				cout << "Enter Interest Rate : ";
				cin >> interestRate;
			}while(interestRate < 0);
		}

		void calculateInterest(){

			double interest;

			interest = getBalance() * interestRate / 100;

			cout << "Savings Account Interest : " << interest << endl;
		}
};

class CheckingAccount : public BankAccount{

	private:
		double overdraftLimit;

	public:
		void setCheckingAccount(){

			setAccount();

			do{
				cout << "Enter Overdraft Limit : ";
				cin >> overdraftLimit;
			}while(overdraftLimit < 0);
		}

		bool checkOverdraft(double amount){

			if(amount <= getBalance() + overdraftLimit){
				return true;
			}
			else{
				return false;
			}
		}

		void withdraw(double amount){

			if(amount <= 0){
				cout << "Invalid Amount!" << endl;
			}
			else if(checkOverdraft(amount)){

				setBalance(getBalance() - amount);

				cout << "Withdrawal Successful!" << endl;
			}
			else{
				cout << "Overdraft Limit Exceeded!" << endl;
			}
		}
};

class FixedDepositAccount : public BankAccount{

	private:
		int term;

	public:
		void setFixedDepositAccount(){

			setAccount();

			do{
				cout << "Enter Term in Months : ";
				cin >> term;
			}while(term <= 0);
		}

		void calculateInterest(){

			double interest;
			double rate = 7;

			interest = getBalance() * rate * term / (100 * 12);

			cout << "Fixed Deposit Interest : " << interest << endl;
		}
};

int main(){

	SavingsAccount s;
	CheckingAccount c;
	FixedDepositAccount f;

	BankAccount *ptr;

	bool savingsCreated = false;
	bool checkingCreated = false;
	bool fixedDepositCreated = false;

	int accountChoice, choice;
	double amount;

	do{

		cout << "\n===== Banking System =====" << endl;
		cout << "1. Savings Account" << endl;
		cout << "2. Checking Account" << endl;
		cout << "3. Fixed Deposit Account" << endl;
		cout << "0. Exit" << endl;

		cout << "\nEnter Your Choice : ";
		cin >> accountChoice;

		switch(accountChoice){

			case 1:

				if(savingsCreated == false){

					cout << "\nCreate Savings Account" << endl;

					s.setSavingsAccount();

					savingsCreated = true;

					cout << "Account Created Successfully!" << endl;
				}

				ptr = &s;

				break;

			case 2:

				if(checkingCreated == false){

					cout << "\nCreate Checking Account" << endl;

					c.setCheckingAccount();

					checkingCreated = true;

					cout << "Account Created Successfully!" << endl;
				}

				ptr = &c;

				break;

			case 3:

				if(fixedDepositCreated == false){

					cout << "\nCreate Fixed Deposit Account" << endl;

					f.setFixedDepositAccount();

					fixedDepositCreated = true;

					cout << "Account Created Successfully!" << endl;
				}

				ptr = &f;

				break;

			case 0:

				cout << "Thank You!" << endl;

				break;

			default:

				cout << "Invalid Choice!" << endl;

				continue;
		}

		if(accountChoice == 0){
			break;
		}

		do{

			cout << "\n===== Banking Menu =====" << endl;
			cout << "1. Deposit" << endl;
			cout << "2. Withdraw" << endl;
			cout << "3. Check Balance" << endl;
			cout << "4. Display Account Information" << endl;
			cout << "5. Calculate Interest" << endl;
			cout << "0. Back" << endl;

			cout << "\nEnter Your Choice : ";
			cin >> choice;

			switch(choice){

				case 1:

					cout << "Enter Deposit Amount : ";
					cin >> amount;

					ptr->deposit(amount);

					break;

				case 2:

					cout << "Enter Withdrawal Amount : ";
					cin >> amount;

					ptr->withdraw(amount);

					break;

				case 3:

					cout << "Current Balance : " << ptr->getBalance() << endl;

					break;

				case 4:

					ptr->displayAccountInfo();

					break;

				case 5:

					ptr->calculateInterest();

					break;

				case 0:

					break;

				default:

					cout << "Invalid Choice!" << endl;
			}

		}while(choice != 0);

	}while(accountChoice != 0);

	return 0;
}
