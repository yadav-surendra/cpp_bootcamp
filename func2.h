#ifndef hangman_h
#define hangman_h
#include <vector>
#include<iostream>
#include <ctime>
#include <utility> 
#include<tuple>
using namespace std;


void greet()
{
    std::cout <<"====================\n";
    std::cout <<"Hangamn: The game\n";
    std::cout <<"====================\n";
    std::cout <<"Instructions: Save your friend from being hanged by guesing the correct codeword.\n";
}

void display_misses(int misses)
{
    if(misses == 0)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 1)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 2)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<" |   | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 3)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<"/|  | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 4)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<"/|\\  | \n";
        cout<<"     | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 5)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<"/|\\  | \n";
        cout<<"/    | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }else if(misses == 6)
    {
        cout<<" +---+ \n";
        cout<<" |   | \n";
        cout<<" O   | \n";
        cout<<"/|\\  | \n";
        cout<<"/ \\  | \n";
        cout<<"     | \n";
        cout<<" ========== \n";

    }
}

void display_status(vector<char> incorrect , string answer)
{
    cout<<"Incorret Gueesses: \n";

    for(int i=0 ; i<incorrect.size(); i++)
    {
        cout<<incorrect[i]<<" ";
    }

    cout<<"\nCodeword:\n";

    for(int i=0; i<answer.length(); i++)
    {
        cout<<answer[i]<<" ";
    }
}

void end_game(string answer , string codeword)
{
    if(answer == codeword)
    {
        cout<<"Horray!! you saved the person from being hanged and earned the medal.\n";
        cout<<"Congratulations\n";
    }
    else{
        cout<<"Oh no! The man is hanged! \n";
        cout<<"you lost the game!\n\n";
    }
}

//testing to improve

// string func(int a){
//     if(a%2==0)
//     {
//         return "fruit";
//     }
//     else
//     return "animal";
// }


//std::string getRandomWord() {
    std::pair<std::string, std::string> getRandomWord() {
    static std::vector<std::string> fruits = {
        "apple", "banana", "cherry", "date", "elderberry",
        "fig", "grape", "honeydew", "kiwi", "lemon"
    };
    static std::vector<std::string> animals = {
        "ant", "tiger", "chimp", "dog", "elephant",
        "frog", "giraffe", "honeybee", "rhino", "leopard"
    };
    static bool initialized = false;

    // Seed the random number generator once
    if (!initialized) {
        std::srand(std::time(0));
        initialized = true;
    }

   int randomIndex = std::rand() % 10;
    //int randomIndex = std::rand() % fruits.size();
    if(randomIndex %2 == 0 )
    {
        string first = fruits[randomIndex];
        string second = "fruit";
        return std::make_pair(first,second);
    }
    else{
        //return std::make_pair(animals[randomIndex],"animal");
        string first = animals[randomIndex];
        string second = "animal";
        return std::make_pair(first,second);
    }
    

}

std::string generateUnderscoreString(int length) {
    // Return a string with 'length' underscores
    return std::string(length, '_');
}

#endif 