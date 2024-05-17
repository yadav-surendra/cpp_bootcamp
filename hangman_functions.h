#ifndef hangman_h
#define hangman_h
#include <vector>
using namespace std;


void greet()
{
    std::cout <<"====================\n";
    std::cout <<"Hangamn: The game\n";
    std::cout <<"====================\n";
    std::cout <<"Instructions: Save your friend from being hanged by guesing the correct codewoed.\n";
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
        cout<<"you lost the game!\n";
    }
}
#endif 