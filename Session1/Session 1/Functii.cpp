#include "Session1.h"

void Insert_into_vector(vector<int> &numere_naturale)
{
	int i;
	vector<int>::iterator numar = numere_naturale.begin();
	for (i = 1; i <= 20; i++)
	{
		numere_naturale.push_back(i);
	}

	for (vector<int>::iterator numar = numere_naturale.begin(); numar != numere_naturale.end(); numar++)
	{
		cout << *numar << " ";
	}
	cout << endl;
}
void Delete_From_vector_odd_numbers(vector<int> &numere_naturale)
{
	for (int numar = 0;numar < numere_naturale.size();numar++)
	{
		if ((numere_naturale.at(numar)) % 2 == 0)
		{
			numere_naturale.erase(numere_naturale.begin() + numar);
		}
	}
	for (vector<int>::iterator i = numere_naturale.begin(); i != numere_naturale.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}
void exercitiul_1(vector<int>& numere_naturale)
{
	Insert_into_vector(numere_naturale);
	Delete_From_vector_odd_numbers(numere_naturale);
}

void exercitiul_2(vector<int>& numere,int numarul_cautat)
{
	sort(numere.begin(), numere.end());
	for (vector<int>::iterator i = numere.begin(); i != numere.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	if (binary_search(numere.begin(), numere.end(), numarul_cautat))
	{
		cout << "Am gasit numarul " << numarul_cautat << endl;
	}
	else
	{
		cout << "N-am gasit numarul " << numarul_cautat << endl;;
	}


}
void exercitiul_3(vector<int>& numere)
{
	sort(numere.begin(), numere.end());
	double maxi;
	maxi = *max_element(numere.begin(), numere.end());
	cout << "Maximul din vector este " << maxi << endl;



}

void inserare_numere_citite(list<int>&lista, int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		cout << "Numarul pe care doresc sa-l adaug in lista este: ";
		cin >> x;
		lista.push_front(x);
	}
}
void afisare_ordine_normala(list<int>lista)
{
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
void afisare_ordine_inversa(list<int> lista)
{
	lista.reverse();
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}
void exercitiul_4(list<int>&lista, int n)
{
	inserare_numere_citite(lista, n);
	afisare_ordine_normala(lista);
	afisare_ordine_inversa(lista);

}

void exercitiul_5(list<int>& lista)
{
	for (int i = 1; i <= 20; i++)
	{
		lista.push_front(i);
	}
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	lista.erase(remove_if(lista.begin(), lista.end(), [](int x)
		{
			return x % 3 == 0;
		}));
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}

void exercitiul_6(list<int>& lista,int n)
{
	int x;
	for (int i = 1; i <= n; i++)
	{
		cout << "Numarul pe care doresti sa l adaugi :";
		cin >> x;
		lista.push_front(x);
	}
	lista.unique();
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

}

