#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
struct Card{
	int suit;
	int rank;
};
void Characteristic(int suit, int rank) {
	cout << setw(15);
	if(rank < 11){
		cout  <<rank;
	}
	else{
		if (rank == 11) {
			cout  << " Jack";
		}
		else if (rank == 12) {
			cout  << " Queen";
		}
		else if (rank == 13) {
			cout  << " King";
		}
		else {
			cout  << " Ace";
		}
	}
	cout << setw(11);

	if (suit == 1) {
		cout  << "of Diamond";
	}
	else if(suit == 2){
		cout  << "of Hearts";
	}
	else if(suit == 3){
		cout  << "of Clubs";
	}
	else {
		cout  << "of Spades";
	}
	
	
}
const int deckOfCards = 56;
void DeckCout(Card cards[deckOfCards]) {
	for (int i = 0; i < deckOfCards; i++) {


		if (i % 4 == 0) {

			cout << endl;
		}
		Characteristic(cards[i].suit, cards[i].rank);
	}
	cout << endl << endl;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	Card cards[deckOfCards];
	int k = 0;
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 15; j++) {
			cards[k] = { i,j };
			k++;
		}

	}
	for (int i = 0; i < deckOfCards; i++) {
		int r = rand() % deckOfCards;
		Card temp = cards[i];
		cards[i] = cards[r];
		cards[r] = temp;
	}
	cout << "Невідсортована колода: " << endl;
	DeckCout(cards);
	cout << endl << endl;
	for (int i = 0; i < deckOfCards; i++) {
		for (int j = 0; j < deckOfCards - 1; j++) {
			if (cards[j].suit > cards[j + 1].suit) {
				Card temp = cards[j];
				cards[j] = cards[j + 1];
				cards[j + 1] = temp;
			}
		}
	}
	
	cout << "Відсортована колода за мастю: " << endl;
	DeckCout(cards);
	cout << endl << endl;
	for (int i = 0; i < deckOfCards; i++) {
		for (int j = 0; j < deckOfCards - 1; j++) {
			if ( cards[j].rank > cards[j + 1].rank&& cards[j].suit == cards[j + 1].suit) {
				Card temp = cards[j];
				cards[j] = cards[j + 1];
				cards[j + 1] = temp;
			}
		}
	}
	cout << "Відсортована колода за мастю та номіналом: " << endl;
	DeckCout(cards);
	
}