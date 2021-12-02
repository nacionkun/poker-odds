#include <iostream>
#include <vector>
using namespace std;

/*
 * Create list of numbers from 2 to 15
 * Create array of suits H,S,C,D
 * Create empty deck array
 * Build deck of cards per suit and store into deck array
 */
int build_deck()
{
    //int num_list [] {2,3,4,5,6,7,8,9,10,11,12,13,14};
    vector <int> card_numbers {2,3,4,5,6,7,8,9,10,11,12,13,14};
    vector <char> suits {'H','S','C','D'};

    for (int i = 0; i < card_numbers.size(); i++)
    {
        cout << card_numbers[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < suits.size(); i++)
    {
        cout << suits[i] << " ";
    }

    cout << endl;

    // TODO: Build deck of 52 cards

    return 0;
}


int combinations()
{
    //TODO
    return 0;
}


int main(int argc, char **argv)
{
	cout << "poker odds tool\n" << endl;

	return build_deck();
}


