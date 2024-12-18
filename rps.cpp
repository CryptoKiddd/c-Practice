#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    srand(time(0));
    int min = 0;
    int max = 2;
    int userChoice;
    int exit = 1;

    std::string compChoices[] = {"rock", "paper", "scissors"};

    int randomNumber = min + (rand() % (max - min + 1));

    std::cout << "***************************" << "\n";
    std::cout << "Rock Paper Scrissors" << "\n";
    std::cout << "***************************" << "\n";
    do
    {
        std::cout << "***************************" << "\n";
        std::cout << "Enter Your Choice" << "\n";
        std::cout << "***************************" << "\n";



        std::cout << "1. Enter 1 For paper      " << "\n";
        std::cout << "2. Enter 2 For rock      " << "\n";
        std::cout << "3. Enter 3 For scissors     " << "\n";
        std::cin >> userChoice;

        switch (userChoice)
        {
        case 1:
            if (compChoices[randomNumber] == "paper")
            {
                std::cout << "Its a tie, Computer also chose" << compChoices[randomNumber] << "\n";
            }
            if (compChoices[randomNumber] == "rock")
            {
                std::cout << "You win, Computer chose " << compChoices[randomNumber] << "\n";
            }
            if(compChoices[randomNumber] == "scissors"){

            std::cout << "You lose, Computer chose " << compChoices[randomNumber] << "\n";
            }

            break;
        case 2:
            if (compChoices[randomNumber] == "rock")
            {

                std::cout << "Its a tie, Computer also chose " << compChoices[randomNumber] << "\n";
            }
            if (compChoices[randomNumber] == "scissors")
            {
                std::cout << "You win, Computer chose " << compChoices[randomNumber] << "\n";
            }
            if (compChoices[randomNumber] == "paper")
            {

                std::cout << "You lose, Computer chose " << compChoices[randomNumber] << "\n";
            }

            break;
        case 3:
            if (compChoices[randomNumber] == "scissors ")
            {
                std::cout << "Its a tie, Computer also chose" << compChoices[randomNumber] << "\n";
            }
            if (compChoices[randomNumber] == "paper ")
            {
                std::cout << "You win, Computer chose" << compChoices[randomNumber] << "\n";
            }
            if (compChoices[randomNumber] == "rock ")
            {

                std::cout << "You lose, Computer chose " << compChoices[randomNumber] << "\n";
            }

            break;

        default:
            std::cout << "Thanks for visiting " << compChoices[randomNumber] << "\n";

            break;
        }
        std::cout << "To exit press 0,  To play again press 1 " << "\n";
        std::cin >> exit;
        randomNumber = min + (rand() % (max - min + 1));

    } while (exit);

    return 0;
}
