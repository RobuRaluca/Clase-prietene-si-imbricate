#include "Clista.h"
#include<iostream>
using namespace std;

void Clista::Nod::Adaugare(int valoare) {
	Nod *nod_urmator = new Nod(valoare);
	next = nod_urmator;
}

void Clista::Nod::Afisare_valoare_nod() {
	cout << info << " ";
}

void Clista::Adaugare_in_lista(int valoare) {
	if (head == 0)
		head = new Nod(valoare);
	else {
		Nod *curent = head;
		while (curent->next != 0)
			curent = curent->next;
		curent->Adaugare(valoare);
	}
}

void Clista::Afisare_lista() {
	Nod *curent = head;
	while (curent != 0) {
		curent->Afisare_valoare_nod();
		curent = curent->next;
	}
}

void Clista::Medie() {
	Nod *curent = head;
	int numar_de_elemente = 0;
	float medie = 0;
	while (curent != 0) {
		medie += curent->info;
		numar_de_elemente++;
		curent = curent->next;
	}

	medie /= numar_de_elemente;
	cout << "Media este : " << medie;

}

void Clista::Nod::Stergere_nod() {
	Nod *temporar;
	temporar = next;
	next = temporar->next;
	free(temporar);
}

void Clista::Stergere_head() {
	Nod *temporar = head;
	head = head->next;
	free(temporar);
}

void Clista::Stergere_element_din_lista(int valoare) {
	Nod *curent = head;

	if (head != 0) {
		if (curent->info == valoare)
			Stergere_head();
		else {

			while (curent->next->info != valoare)
				curent = curent->next;

			curent->Stergere_nod();
		}
	}
}

void Clista::Eliminarea_elementelor_mai_mici_de(int valoare) {
	Nod *curent = head;
	int numar = 0;
	while (curent->next != 0) {
		numar++;
		curent = curent->next;
	}

	Nod*actual = head;
	int index = 1;
	while (index < numar) {
		if (actual->info < valoare && index == 1) {
			Stergere_head();
			actual = head;
			numar--;
			index = 1;
		}
		else if (actual->next->info < valoare && actual->next != 0) {
			actual->Stergere_nod();
			numar--;
		}
		else {
			actual = actual->next;
			index++;
		}
	}
	if (actual->info < valoare)
		head = 0;
}




Clista::Clista() {
	Clista *head = 0;
}

Clista::Clista(Clista &lista) {
	head = 0;
	Copiere(lista.head);
}

void Clista::Copiere(Nod *p) {
	head = 0;
	Nod *curent = p;
	while (curent != 0) {
		Adaugare_in_lista(curent->info);
		curent = curent->next;
	}
}