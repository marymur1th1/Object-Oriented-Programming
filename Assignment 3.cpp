#include<iostream>
#include<string>
using namespace std;
//Create a class
class BankAccount{
    private://Set the access specifier to private and declare the attributes.
    string accountHolder;
    double balance;

    public:
    //Setter
    void setAccountHolder(string a){
        accountHolder=a;
    }
    void setBalance(int b){
        balance=b;
    }
    //Getter
    string getAccountholder(){
        return accountHolder;
    }
    int getBalance(){
        return balance;
    }

};
int main(){
    BankAccount Obj;//Create an object of BankAccount class.
    Obj.setAccountHolder("Leewis");//Call the method
    cout<<"The account holder is "<<Obj.getAccountholder()<<endl;
    Obj.setBalance(3000000);//call the method
    cout<<"The balance is "<<Obj.getBalance()<<endl;
    return 0;




}