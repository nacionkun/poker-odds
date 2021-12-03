#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> build_deck()
{
    vector <int> card_numbers {2,3,4,5,6,7,8,9,10,11,12,13,14};
    vector <char> suits {'H','S','C','D'};
    vector <string> deck;

    for ( int num: card_numbers )
    {
        for ( char suit: suits )
        {
            deck.push_back( suit + to_string( num ) );
        }
    }

    return deck;
}


int combinations()
{
    //TODO
    return 0;
}


int main ( int argc, char **argv )
{
	cout << "poker odds tool\n" << endl;

    vector <string> cards;
    cards = build_deck();

    for ( string card: cards )
    {
        cout << card << endl;
    }

    return 0;
}


