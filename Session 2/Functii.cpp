#include "Session 2.h"


void insert_into_set(set<int>&setul, int n)
{
	int x, i;
	for (i = 0; i < n; i++)
	{
		cout << "Numarul pe care doresti sa-l adaugi :";
		cin >> x;
		setul.insert(x);
	}
	for (set<int>::iterator i = setul.begin(); i != setul.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void exercitiul_7(set<int>& setul1, set<int>& setul2)
{
	set<int>setul_intersectie;
	set<int>setul_uniune;
	set_intersection(setul1.begin(), setul1.end(), setul2.begin(), setul2.end(), inserter(setul_intersectie,setul_intersectie.begin()));
	cout << "Setul intersectie este : ";
	for (set<int>::iterator i = setul_intersectie.begin(); i != setul_intersectie.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	set_union(setul1.begin(), setul1.end(), setul2.begin(), setul2.end(), inserter(setul_uniune, setul_uniune.begin()));
	cout << "Setul uniune este :";
	for (set<int>::iterator i = setul_uniune.begin(); i != setul_uniune.end(); i++)
	{
		cout  << *i << " ";
	}
	cout << endl;

}
void exercitiul_8(multiset<int>multisett)
{
	set<int> unice;
	cout << "Multisetul este :";
	for (multiset<int>::iterator i = multisett.begin(); i != multisett.end(); i++)
	{
		cout << *i << " ";
		

	}
	cout << endl;
	cout << "Setul unic cu elemente din multiset si numarul de aparitii in multiset  este :";
	for (multiset<int>::iterator i = multisett.begin(); i != multisett.end(); i++)
	{
		if (unice.insert(*i).second)
		{
			cout << "(" << *i << ":" << multisett.count(*i) <<")" << " ";
		}


	}
	cout << endl;
	
}

void exercitiul_9(list<int>& lista, set<int>& setul)
{
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
		setul.insert(*i);
	}
	cout << endl << "Setul rezultat din elementele din lista este:";
	for (set<int>::iterator i = setul.begin(); i != setul.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}


void exercitiul_10(unordered_multiset<string>& nume)
{
	vector<vector<string>>Frecventa_aparitii;
	vector<string>Frecventa_curenta;

	for (unordered_multiset<string>::iterator i = nume.begin(); i != nume.end(); i++)
	{
		if (Frecventa_curenta.empty() || *i == Frecventa_curenta.back() + "1")
		{
			Frecventa_curenta.push_back(*i);
		}
		else
		{
			Frecventa_aparitii.push_back(Frecventa_curenta);
			Frecventa_curenta.clear();
			Frecventa_curenta.push_back(*i);

		}
	}
	if (!Frecventa_curenta.empty())
	{
		Frecventa_aparitii.push_back(Frecventa_curenta);
	}
	sort(Frecventa_aparitii.begin(), Frecventa_aparitii.end(), [](vector<string> a, vector<string> b) {
		return a.size() > b.size();
		});
	if (Frecventa_aparitii.size() > 3)
	{
		Frecventa_aparitii.resize(3);
	}
	cout << "Numele cu cele mai mari aparitii sunt:  ";
	for (auto& Frecventa_curenta : Frecventa_aparitii)
	{
		for (auto& Nume : Frecventa_curenta)
		{
			cout << Nume << " ";
		}
	}
	cout << endl;	

}
void exercitiul_11(map<string, float>&student,int n)
{
	string nume;
	float media;
	if (n > 4)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Introduceti numele studentului/studentei si media \n";
			cout << "Numele este : ";
			cin.ignore();
			getline(cin, nume);
			cout << "Media este : ";
			cin >>media;
			student.insert(pair<string, float>(nume, media));

		}
	}
	for (map<string,float>::iterator it = student.begin();it !=student.end();it++)
	{
		cout << it->first << " ";
		cout << it->second<<" ";
		cout << endl;

	}
	cout << endl;
}
void execitiul_12(map<string, float>& student,string nume)
{
	float noua_medie;
	cout << "Noua medie este : ";
	cin >> noua_medie;
	if (student.find(nume) != student.end())
	{
		cout << "Schimba media cu nota" << endl;;
		student[nume] = noua_medie;
	}
	else
	{
		cout << "Numele n-a fost gasit asa ca a fost inserat";
		student.insert(make_pair(nume, noua_medie));
	}
	for (map<string, float>::iterator it = student.begin(); it != student.end(); it++)
	{
		cout << it->first << " ";
		cout << it->second << " ";
		cout << endl;

	}
	cout << endl;
}

void exercitiul_13()
{
	map<float, int> medii;
	int n = 10;
	float media;
	for (int i = 0; i < n; i++)
	{
		cout << "Introduceti media pentru studentul " << i + 1 << ": ";
		cin >> media;

		if (medii.find(media) != medii.end()) {
			medii[media]++;
		}
		else {
			medii[media] = 1;
		}

		cout << "\nMedii si numarul de studenti care au acea medie:\n";
		for (const auto& pair : medii)
		{
			cout << "Media: " << pair.first << " - " << pair.second << " studenti\n";
		}
	}
}
void exercitiul_14()
{
	map<string, float> student;
	string nume;
	float media;
	int n = 5;

	for (int i = 0; i < n; i++) {
		cout << "Introduceti numele studentului " << i + 1 << ": ";
		cin.ignore();
		getline(cin, nume);
		cout << "Introduceti media studentului " << i + 1 << ": ";
		cin >> media;

		student[nume] = media;
	}

	auto it = student.begin();
	string student_max = it->first;
	float media_max = it->second;

	for (it = student.begin(); it != student.end(); ++it) {
		if (it->second > media_max) {
			media_max = it->second;
			student_max = it->first;
		}
	}

	cout << "Studentul cu cea mai mare medie este: " << student_max << " cu media " << media_max << endl;
}	