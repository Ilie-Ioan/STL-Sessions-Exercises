#include "Session1.h"


/*
Exercițiul 1: Inserare și ștergere din vector
• Creează un std::vector<int> și inserează în el numerele întregi de la 1 la 20.
• Scrie o funcție care parcurge vectorul și elimină toate elementele pare.
• Afișează vectorul înainte și după eliminarea elementelor.

*/

/*
*Exercițiul 2: Sortare și căutare în vector
• Creează un std::vector<int> de 10 elemente, inițializat cu valori citite de la tastatură.
• Sortează vectorul în ordine descrescătoare folosind std::sort și afișează-l.
• Caută un număr specific (introdus de utilizator) în vector folosind std::binary_search.
• Afișează un mesaj care indică dacă numărul a fost găsit sau nu.


*/
/*
* Exercițiul 3: Găsirea valorii maxime în vector
• Creează un std::vector<int> cu 10 numere întregi aleatorii.• Sortează vectorul în ordine descrescătoare folosind std::sort și afișează-l.
• Scrie o funcție pentru a găsi și afișa valoarea maximă din vector.


*/
/*
*Exercițiul 4: Inserare și afișare în listă
• Creează o std::list<std::string> și inserează cel puțin 5 nume de prieteni.
• Afișează lista de nume în ordinea în care au fost adăugate, folosind un iterator.
• Afișează lista de nume în ordine inversă, folosind funcția reverse sau un iterator de tip reverse_iterator.


*/
/*
*Exercițiul 5: Ștergere bazată pe condiție din listă
• Creează o std::list<int> și adaugă numere întregi de la 1 la 20.
• Folosește algoritmul std::remove_if pentru a șterge toate numerele din listă care sunt multipli de 3.
• Afișează lista înainte și după ștergere.


*/

/*
* Exercițiul 6: Eliminarea duplicatelor din listă
• Creează o std::list<int> cu numere întregi, incluzând unele duplicate.

• Scrie o funcție pentru a elimina duplicatele din listă și afișează lista curățată.


*/
int main()
{
	vector<int> numere_pana_la_20;
	exercitiul_1(numere_pana_la_20);
	
	vector<int> numere = { 88,2,45,33,21,77,10,1863,22,33 };
	int numarul_cautat;
	cout << "Numarul pe care doresc sa-l caut este: ";
	cin >> numarul_cautat;
	exercitiul_2(numere, numarul_cautat);

	exercitiul_3(numere);
	
	list<int>lista1;
	int n;
	cout << "Dimensiunea listei este : ";
	cin >> n;
	exercitiul_4(lista1, n);

	list<int>lista2;
	exercitiul_5(lista2);

	cout << "Dimensiunea listei este : ";
	cin >> n;
	list<int>lista3;
	exercitiul_6(lista3, n);
	
	return 0;

}