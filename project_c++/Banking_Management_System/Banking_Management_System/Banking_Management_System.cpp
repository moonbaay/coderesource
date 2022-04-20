// Banking_Management_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<fstream>
#include<istream>
#include<string>
using namespace std;
int main_exit;
void menu();//display menu or welcome screen to perform different banking activityes mention below
void new_account(); //create new client account
void view_list();//view clients banking info
void edit(); //changing address and phone number for client
void transact();//deposit and withdraw money to and from a prticular clinet account{
void erase();//delete client accout
void see();//show account num,name,dateofbirth,citizenship,age,address,phone num,account type, amt deposit and date of deposit and amt of interest corresponding to a perticular account type

struct date {
    int month, day, year;
};
struct 
{
    char name[60];
    int acct_no, age;
    string address;
    string state;
    string city;
    char ss_no[9];
    char phone[9];
    char acct_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

}add,upd,check,rem,transaction;

void fordelay(int acct_no) {
    int i, k;
    for (i = 0; i < acct_no; i++) {
        k = i;
    }
}
void new_account() 
{
    ifstream client_file_read;
    ofstream client_file("clientfile.txt",ios::app);
    client_file_read.open("clientfile.txt");
    int offset;
    string line;
    system("cls");
    cout << "\t\t\t ADD RECORD" << endl;
    
    cout << "\nEnter the account number: ";
    cin >> check.acct_no;
    client_file << "Account Number: " << check.acct_no << endl;
    cout << "\n\n---------Enter today's date----------- ";
    cout << "\nEnter month: ";
    cin >> (add.deposit.month);
    client_file << "Deposit date: " << add.deposit.month << "/";
    cout << "\nEnter day: ";
    cin >> (add.deposit.day);
    client_file << add.deposit.day << "/";
    cout << "\nEnter year: ";
    cin >> (client_file, add.deposit.year);
    client_file << add.deposit.year << "\n";

    add.acct_no = check.acct_no;
    cout << "\n\n---------Enter Personal Information----------- ";
    cout << "\nEnter Name: ";
    cin >> add.name;
    client_file << "Name:" << add.name << endl;
    cout << "\nEnter date of birth month: ";
    cin >> add.dob.month;
    client_file << "DOB: " << add.dob.month << "/";
    cout << "\nEnter date of birth day: ";
    cin >> add.dob.day;
    client_file << add.dob.day << "/";
    cout << "\nEnter date of birth yeart: ";
    cin >> add.dob.year;
    client_file << add.dob.year << endl;
    cin.ignore();
    cout << "\nEnter street address:";
    getline(cin, add.address);
    cout << "\nEnter State: ";
    getline(cin, add.state);
    cout << "\nEnter City: ";
    getline(cin, add.city);
    client_file << "Street Address: " << add.address << endl;
    client_file << "State: " << add.state << "  City: " << add.city << endl;

    cout << "\nEnter age: ";
    cin >> add.age;
    client_file << "Age: " << add.age << endl;
    cout << "\nEnter Social Security Number: ";
    cin >> add.ss_no;
    client_file << "SS No: " << add.ss_no << endl;
    cout << "\nEnter Phone Number: " << endl;
    cin >> add.phone;
    client_file << "Phone Num: " << add.phone << endl;
    cout << "\nEnter amount to deposit: $";
    cin >> add.amt;
    client_file << "Deposit Amount: " << add.amt << endl;
    cout << "\nType of account: \n\tSaving\n\tChecking\nEnter your choice: " << endl;
    cin >> add.acct_type;
    client_file << "Account Type: "<<add.acct_type<<endl;
    /*
    if (client_file_read.is_open()) 
    {
        while (!client_file_read.eof()) 
        {
            getline(client_file_read, line);

            if (offset = line.find(check.acct_no, 0) != string::npos) 
            {
                cout << "\nThis account number is already exist!" << endl;
            }
            else 
            {
                client_file << "Account Number: "<<check.acct_no << "\n";
                cout << "\n\n---------Enter today's date----------- ";
                cout << "\nEnter month: ";
                cin >> (add.deposit.month);
                client_file << "Deposit date: "<<add.deposit.month << "/";
                cout << "\nEnter day: ";
                cin >> (add.deposit.day);
                client_file << add.deposit.day << "/";
                cout << "\nEnter year: ";
                cin >> (client_file, add.deposit.year);
                client_file << add.deposit.year << "\n";

                add.acct_no = check.acct_no;
                cout << "\n\n---------Enter Personal Information----------- ";
                cout << "\nEnter Name: ";
                cin >> add.name;
                client_file <<"Name:"<< add.name<<endl;
                cout << "\nEnter date of birth month: ";
                cin >> add.dob.month;
                client_file << "DOB: "<< add.dob.month<<"/";
                cout << "\nEnter date of birth day: ";
                cin >> add.dob.day;
                client_file << add.dob.day<<"/";
                cout << "\nEnter date of birth yeart: ";
                cin >> add.dob.year;
                client_file << add.dob.year<<endl;
                cin.ignore();
                cout << "\nEnter street address:";
                getline(cin, add.address);
                cout << "\nEnter State: ";
                getline(cin, add.state);
                cout << "\nEnter City: ";
                getline(cin, add.city);
                client_file << "Street Address: " << add.address << endl;
                client_file << "State: " << add.state <<"  City: "<<add.city<< endl;                

                cout << "\nEnter age: ";
                cin >> add.age;
                client_file << "Age: "<<add.age<<endl;
                cout << "\nEnter Social Security Number: ";
                cin >> add.ss_no;
                client_file << "SS No: " << add.ss_no << endl;
                cout << "\nEnter Phone Number: " << endl;
                cin >> add.phone;
                client_file << "Phone Num: " << add.phone << endl;
                cout << "\nEnter amount to deposit: $";
                cin >> add.amt;
                client_file << "Deposit Amount: " << add.amt<<endl;
                cout << "\nType of account: \n\tSaving\n\tChecking\nEnter your choice: " << endl;
                cin >> add.acct_type;
                client_file << "Account Type: " << add.acct_type << endl;
            }
        }
    }
    */

    client_file.close();
    cout << "\nAccount created successfully!" << endl;
add_invalid:
    cout << "\n\n\nEnter 1 to go to the main menu and 0 to exit: ";
   // scanf("%d", &main_exit);
    cin >> main_exit;
    system("cls");
    if (main_exit == 1) {
        menu();
    }
    else if (main_exit == 0) {
        //close();
    }
    else {
        cout << "\nInvalid!\a";
        goto add_invalid;
    }
}

void view_list() {

}

void menu() {
    int choice;
    system("cls");
    system("color 2");
    cout << "\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM";
    cout << "\n\nMain Menu:";
    cout << "\n\n1. Create new account"<<endl;
    cout<<"2. Update customer information of existing account"<<endl;
    cout << "3. For transaction" << endl;
    cout << "4. Check the details of existing account" << endl;
    cout << "5. Delete exisitng account" << endl;
    cout << "6. View customers list" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice:";
    cin >> choice;
}
int main()
{
   // menu();
    new_account();
}
