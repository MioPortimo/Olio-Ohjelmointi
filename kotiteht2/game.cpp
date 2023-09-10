#include "game.h"

Game::Game(int)
{
    maxNumbers =10;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumbers<<endl;
    srand(time(0));//alustetaan satunnaislukugeneraattori
    randomNumber =1+(rand()%maxNumbers);//määritetään, miltä väliltä satunnaisluku on
    playerGuess;
    numOfGuesses =1;

};
Game::~Game()
{
    cout<<"GAME DECONSTRUCTOR: object cleared from stack memory"<<endl;

};
void Game::play()
{
    while(true){
        cout<<"Give your guess between 1- "<<maxNumbers<<endl;
        cin>>playerGuess;
        if(playerGuess==randomNumber){
            cout<<"Your guess is right"<<endl;
            printGameResult();
            break;
        }
        else if(playerGuess<randomNumber){
            cout<<"Your guess is too small"<<endl;
            numOfGuesses++;
        }
        else if(playerGuess>randomNumber){
            cout<<"Your guess is too big"<<endl;
            numOfGuesses++;
        }
    }

}
void Game::printGameResult()
{
    cout<<"You guessed the answer "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}
