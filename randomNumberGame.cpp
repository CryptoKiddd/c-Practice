#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    srand(time(0)); ///  rand ფუნქცია  თავისთავადად არ არის ნამდვილად შემთვევითი რიცხვის გენერატორი ამიტომ უნდა დავსიდოთ ყოველჯერზე სხვადასხავა ვალიუს გატანებით time() ამჟამინდელ დროს აბრუნებს
    int min, max, guess, tries;
    std::cout << " ************************************************" << "\n";
    std::cout << "                 Guessing Game                   " << "\n";
    std::cout << " ************************************************" << "\n";


    std::cout << "Enter the lower bound of random Numbers: " << "\n";
    std::cin >> min;
    std::cout << "Enter the Upper bound of random Numbers: " << "\n";
    std::cin >> max;
    int randomNumber = min + (rand() % (max - min + 1)); // მინიმუმს ვამატებთ წინ  და პლიუს 1 ს ბოლოში იმიტომ რომ სწორი რეინჯი მოგვცეს, მაგალითად
                                                         //  min=0,  max=3,   rand() % max  >> თუ  რანდომი დააბრუნეს 3 პასუხი >>0 ;  4 >>1 ;  5>>2 ;  6>>0;
                                                         // ანუ რეინჯი არის 0-2 რადგან მაქსიმალური რიცხვის % ==0; და დასაწყისშიც თუ ნულისგან განსხვავებულია მისი თავი უნდა დავამატოთ
    do
    {
        std::cout << "Enter Your guess" << "\n";
        std::cin >> guess;
        if (guess > randomNumber)
        {
            std::cout << "Your guess is > then random number" << "\n";
            tries++;
        }
        if (guess < randomNumber)
        {
            std::cout << "Your guess is < then random number" << "\n";
            tries++;
        }

    } while (guess != randomNumber);
    tries++; // თუ გამოცნობილი ტოლია დუვაილიდან გამოდის და ამიტომ საბოლოოდ ერთს ვამატებთ რომ სწორი იყოს,  ნუ შიგნითაც შეილება დამატება მაგრამ იყოს აქ 
    std::cout << "********************************" << "\n";
    std::cout << "Its Correct, It took you " << tries << " tries" << "\n";
    std::cout << "********************************" << "\n";

    return 0;
}
