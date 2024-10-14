#include "Session 2.h"

/*
* Exercițiul 7: Operații cu seturi
• Creează două seturi(std::set<int>) și adaugă câteva numere întregi în fiecare.
- Setul 1 : conține numerele{ 1, 2, 3, 4, 5, 6 }
- Setul 2 : conține numerele{ 4, 5, 6, 7, 8, 9 }
• Folosind std::set_intersection și std::set_union, găsește intersecția și reuniunea celor două seturi.
• Afișează rezultatele.

*Exercițiul 8: Găsirea duplicatelor cu std::multiset
•Creează un std::multiset<int> și adaugă numere întregi, inclusiv duplicate (de exemplu: {3, 1, 4, 4, 2, 3, 5, 6, 2, 7, 3}).
•Afișează toate numerele din multiset, împreună cu frecvența fiecărui număr (de câte ori apare fiecare număr).
•Scrie o funcție care elimină toate duplicatele din multiset și stochează rezultatul într-un std::set<int>.
•Afișează rezultatul, arătând atât multisetul original, cât și setul de numere unice.

*Exercițiul 9 : Numere unice dintr - o listă
• Creează un std::list<int> care conține numere întregi(de exemplu : {1, 2, 2, 3, 4, 4, 5}).
• Folosește un std::set<int> pentru a extrage numerele unice din listă.
• Afișează numerele unice.

*Exercițiul 10: Nume și frecvență cu std::unordered_multiset
• Creează un std::unordered_multiset<std::string> pentru a adăuga nume (de exemplu: {"Ion", "Maria", "Andrei", "Maria", "Ion", "Andrei", "Ana", "Ion", "Cristina", "Maria"}).
• Afișează numele adăugate, inclusiv frecvența fiecărui nume (de câte ori a fost adăugat).
• Scrie o funcție care să determine cele mai mari 3  frecvente din unordered_multiset.
• Afișează aceste nume și numărul de apariții pentru fiecare, împreună cu numele unice.

*Exercițiul 11: Utilizare map
• Creează un std::map<std::string, float>, unde cheia este numele unui student și valoarea este media sa.
• Inserează cel puțin 5 perechi(nume, medie) diferite.
• Afișează toate perechile ordonate alfabetic după nume.

*Exercițiul 12 : Căutare și actualizare în map
• Caută un anumit nume de student în map(numele este introdus de utilizator).
• Dacă studentul există în map, actualizează - i media cu o valoare nouă.
• Dacă studentul nu există, adaugă o pereche nouă în map cu numele studentului și media respectivă.
• Afișează map - ul după actualizare.

*Exercițiul 13: Numărul de studenți pe medie
•	Creează un std::map<float, int> care să asocieze medii cu numărul de studenți care au această medie.
•	Populează map - ul cu cel puțin 10 studenți și medii.
•	Afișează media și numărul de studenți pentru fiecare medie.

*Exercițiul 14 : Găsirea studentului cu cea mai mare medie
•	Extinde std::map<std::string, float> creat anterior pentru a găsi studentul cu cea mai mare medie.
•	Afișează numele studentului și media acestuia.
*/


int main()
{
	set<int> setul1;
	set<int> setul2;
	int n;
	cout << "Dimensiunea setului este:";
	cin >> n;
	
	insert_into_set(setul1, n);
	insert_into_set(setul2, n);
	exercitiul_7(setul1, setul2);

	multiset<int>multisett = { 3, 1, 4, 4, 2, 3, 5, 6, 2, 7, 3 };
	exercitiul_8(multisett);
	


	list<int>lista = { 1,2,2,3,4,4,5 };
	set<int>setul_4;
	exercitiul_9(lista, setul_4);


	unordered_multiset<string>nume = { "Ion", "Maria", "Andrei", "Maria", "Ion", "Andrei", "Ana", "Ion", "Cristina", "Maria" };
	exercitiul_10(nume);

	map<string, float>student;
	int dimensiune;
	cout << "Dimensiunea este : ";
	cin >> dimensiune;
	exercitiul_11(student, dimensiune);
	
	
	string name;
	cin.ignore();
	getline(cin, name);
	execitiul_12(student, name);
	
	exercitiul_13();
	
	exercitiul_14();


	
}