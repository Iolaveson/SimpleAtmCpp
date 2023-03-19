#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

void menu() {
  cout << "--------MENU--------" << endl;
  cout << "1. Check Accounts" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
}

void accounts() {
  cout << "------ACCOUNTS------" << endl;
  cout << "1. Account 1" << endl;
  cout << "2. Account 2" << endl;
  cout << "3. Go back" << endl;
}

int main() {
  // objects
  // bool Running = 1;
  int option;
  list<int> balances = {1,2};
  double balance_1 = 0;
  double balance_2 = 0;
  int selection;
  int selection1;
  int selection2;
  double deposit = 0;
  double withdraw = 0;
  

  // show menu
  do {
    menu();
    cout<<"Type the desired function: ";
    cin >> option;
    system("clear");
  
    switch(option) {
      // check balance
      case 1:
        do{
          accounts();
        
        cout<<"Type the desired account: ";
        cin >> selection; 
        system("clear");
        
        switch(selection) {
          case 1: 
            cout<<"Account 1 balance: $"                    
            <<balance_1<< endl; 
            break;

          case 2: 
            cout<<"Account 2 balance: $"
            <<balance_2<< endl; 
            break;

        }
        
        }while (selection != 3);
        
    
      // deposit
      case 2:
        do{
          accounts();
        
        cout<<"Type the desired account: ";
        cin >> selection1;
        system("clear");
        
        switch(selection1) {
          case 1: 
            cout<<"Account 1 balance: $"<<balance_1<< endl; 
            cout<<"How much to deposit? ";
            cin >> deposit;
            balance_1 += deposit;
            cout<<"Account 1 balance: $"<<balance_1<< endl; 
            break;

          case 2: 
            cout<<"Account 2 balance: $"<<balance_2<< endl; 
            cout<<"How much to deposit? ";
            cin >> deposit;
            balance_2 += deposit;
            cout<<"Account 2 balance: $"<<balance_2<< endl; 
            break;
        }
          
        }while (selection != 3);
        
      // withdraw
      case 3:
        do{
          accounts();
        
        cout<<"Type the desired account: ";
        cin >> selection2;
        system("clear");
        
        switch(selection2) {
          
          case 1: 
            cout<<"Account 1 balance: $"<<balance_1<< endl; 
            cout<<"How much to windraw? ";
            cin >> withdraw;
            balance_1 -= withdraw;
            cout<<"Account 1 balance: $"<<balance_1<< endl; 
            break;

          case 2: 
            cout<<"Account 2 balance: $"<<balance_2<< endl; 
            cout<<"How much to windraw? ";
            cin >> withdraw;
            balance_2 -=  withdraw;
            cout<<"Account 1 balance: $"<<balance_2<< endl; 
            break;
        }
          
        }while (selection != 3);
    }
  // exit
  } while (option != 4);
  
}