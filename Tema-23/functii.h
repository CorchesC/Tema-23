#pragma once
#include <iostream>
#include <fstream>
#include"structuri.h"
using namespace std;

void citireVector(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void citireVector2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisareVector(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
int nrValoriStrictMaiMici(int a[], int d1, int b[], int d2) {
	int nr = 0;
	for (int i = 0; i < d1; i++) {
		bool aff = true;
		for (int j = 0; j < d2; j++) {
			if (a[i] >= b[j]) {
				aff = false;
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
int numarDivizori(int n) {
	int nrd = 0;
	for (int x = 1; x <= n; x++) {
		if (n % x == 0) {
			nrd++;
		}
	}
	return nrd;
}
int nrNrInItervalCu3Div(int a, int b) {
	int nr = 0;
	for (int i = a + 1; i < b; i++) {
		if (numarDivizori(i) == 3) {
			nr++;
		}
	}
	return nr;
}
void numarInVectorImpar(int n, int v[], int& d){
	while (n != 0) {
		if (n % 2 != 0) {
			v[d] = n % 10;
			d++;
			
		}
		n = n / 10;
	}
}
void bubbleSort(int v[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (v[j] < v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;

				aff = false;
			}
		}
	} while (aff == false);
}
int vectorInNumar(int v[], int d) {
	int num = 0;
	for (int i = 0; i < d; i++) {
		num += v[i];
		num = num * 10;
	}
	num = num / 10;
	return num;
}
int nrCifre(int n) {
	int nr = 0;
	while (n != 0) {
		nr++;
		n = n / 10;
	}
	return nr;
}
int numarMaximDeCifeInInterval(int a, int b) {
	int nr = 0;
	for (int i = a; i <= b; i++) {
		nr += nrCifre(i);
	}
	return nr;
}
bool numarPrim(int n) {
	if (numarDivizori(n) == 2) {
		return true;
	}
	else {
		return false;
	}
}
int sumaDivizoriPrimi(int n) {
	int s = 0;
	for (int x = 1; x <= n; x++) {
		if (x != 1 && n % x == 0) {
			if (numarPrim(x) == true) {
				s += x;
			}
		}
	}
	return s;
}
bool patratPerfect(int n) {
	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	else {
		return false;
	}
}void vectorDinDivizoriPtrPfAlLuiN(int n, int v[], int& d) {
	for (int x = 1; x <= n; x++) {
		if (n % x == 0 && patratPerfect(x) == true) {
			v[d] = x;
			d++;
		}
	}
}
int elementMax(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
void afiasreDateEchipaE(Jucator juc[], int d) {
	for (int i = 0; i < d; i++) {
		cout << juc[i].marimeTricou << " " << juc[i].nrTricou << endl;
	}
}
int celMaiMicMultipluComun(int a, int b) {
	int x = a;
	int y = b;
	while (x != y)
	{
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	int cmmc = (a * b) / x;
	return cmmc;
}
void perechiCuCMMCegalCuM(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (celMaiMicMultipluComun(i, j) == m) {
				cout << i << " " << j << endl;
			}
		}
	}
}
void sterge(int v[], int& d, int p) {

	for (int i = p; i < d; i++) {
		v[i] = v[i + 1];
	}
	d--;
}
void stergereElementeDuplicate(int v[], int& d) {
	for (int i = 0; i < d; i++) {
		if (v[i] == v[i + 1]) {
			sterge(v, d, i);
		}
	}
} 
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int c = n % 10;
		n = n / 10;
		ogl = ogl * 10 + c;
	}
	return ogl;
}
void afisarePerechiOglindi(int v[], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (oglindit(v[i]) == v[j]) {
				cout << v[i] << " " << v[j] << endl;
			}
		}
	}
}
int produsMax(int v[], int d) {
	int max = elementMax(v, d);
	int max2 = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] != max && v[i] > max2) {
			max2 = v[i];
		}
	}
	int prod = max * max2;
	return prod;
}