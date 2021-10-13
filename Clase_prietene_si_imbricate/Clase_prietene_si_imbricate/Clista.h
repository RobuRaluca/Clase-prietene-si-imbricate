#pragma once
#ifndef CLISTA_H
#define CLISTA_H
class Clista {

	class Nod {
		int info;
		Nod *next;
		friend class Clista;

	public:
		Nod(int value, Nod *urmator = 0) : info(value), next(urmator) {}
		void Adaugare(int valoare);
		void Afisare_valoare_nod();
		void Stergere_nod();
	};

public:
	void Stergere_head();
	Clista();
	Clista(Clista &lista);
	void Adaugare_in_lista(int valoare);
	void Afisare_lista();
	void Medie();
	void Stergere_element_din_lista(int valoare);
	void Eliminarea_elementelor_mai_mici_de(int valoare);


private:
	Nod *head;
	void Copiere(Nod *p);
};

#endif CLISTA_H