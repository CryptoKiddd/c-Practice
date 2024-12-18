#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 123.00;
    int choice = 0;

    do
    {

        std::cout << "*********************************** \n";
        std::cout << "Enter Your Choice: \n";
        std::cout << "*********************************** \n";
        std::cout << "1. Show balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Widthdraw Money \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;

        switch (choice)
        {

        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting";
            break;
        default:
            std::cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}


void showBalance(double balance)
{
    std::cout << "Your balance is $ " << std::setprecision(2) << std::fixed << balance << "\n";
};
double deposit() {
    double amount;

    std::cout<<"Enter The Amount to Deposit: ";
    std::cin>>amount;

    return amount;


}
double withdraw( double balance)
{

      double amount;

    std::cout<<"Enter The Amount to Withdraw: ";
    std::cin>>amount;
   do
   {
    std::cout<<"Innfuscient Funds \n"<<"Your Balance is :"<<balance<<'\n';
          std::cout<<"Enter The correct Amount to Withdraw: ";
         std::cin>>amount;

   } while ( amount > balance);
       std::cout<<"Succsecfully withdrawed:  "<<amount<<'\n';


   
        
    

    return amount;

};
