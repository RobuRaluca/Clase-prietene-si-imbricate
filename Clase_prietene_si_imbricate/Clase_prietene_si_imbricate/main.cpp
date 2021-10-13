#include"Clista.h"
#include<iostream>
using namespace std;
int optiune, numar;

int main() {
	Clista list;

	cout << "Meniu" << endl << endl;
	cout << "Introduce 1 pentru a adauga un element in lista" << endl;
	cout << "Introduce 2 pentru a sterge un element din lista" << endl;
	cout << "Introduce 3 pentru a elimina din lista elementele mai mici decat o valoare data" << endl;
	cout << "Introduce 4 pentru calculul mediei aritmetice a elementelor din lista" << endl;
	cout << "Introduce 5 pentru a afisa elementele din lista" << endl;
	cout << "Introduce 0 pentru a iesi" << endl;

	cout << endl << endl << "Optiunea este : ";
	cin >> optiune;

	int index = 0;

	while (optiune != 0) {
		if (index != 0) {
			cout << endl << endl << "Introduce-ti urmatoarea optiune, sau 0 pentru a iesi din meniu" << endl << "Optiunea este :";
			cin >> optiune;
		}
		index++;

		if (optiune == 1) {
			cout << endl << endl << "Introduce-ti numarul pe care vreti sa-l introduceti in lista : ";
			cin >> numar;
			list.Adaugare_in_lista(numar);
		}

		if (optiune == 2) {
			cout << endl << endl << "Introduce-ti elementul pe care vreti sa-l stergeti : ";
			cin >> numar;
			list.Stergere_element_din_lista(numar);
		}

		if (optiune == 3) {
			cout << endl << endl << "Eliminarea elementelor mai mici decat o valoare data. Valoare = ";
			cin >> numar;
			list.Eliminarea_elementelor_mai_mici_de(numar);
		}

		if (optiune == 4) {
			cout << endl << endl << "Media aritmetica a elementelor listei este : ";
			list.Medie();
		}

		if (optiune == 5) {
			cout << endl << endl << "Afisarea elementelor din lista :";
			list.Afisare_lista();
		}

	}

	int a;
	cin >> a;
}