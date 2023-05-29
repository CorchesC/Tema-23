#pragma once
#include "functii.h"
#include "structuri.h"
using namespace std;

void sol1() {
	int a[100], d1;
	int b[100], d2;
	citireVector(a, d1);
	citireVector2(b, d2);
	int nr = nrValoriStrictMaiMici(a, d1, b, d2);
	cout << nr << endl;
}
void sol2() {
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = nrNrInItervalCu3Div(a, b);
	cout << nr << endl;
}
void sol3() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	numarInVectorImpar(n, v, d);
	bubbleSort(v, d);
	int num = vectorInNumar(v, d);
	cout << num << endl;
	
}
void sol4() {
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = numarMaximDeCifeInInterval(a, b);
	cout << nr << endl;
}
void sol5() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int s = sumaDivizoriPrimi(n);
	cout << s << endl;
}
void sol6() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	vectorDinDivizoriPtrPfAlLuiN(n, v, d);
	int max = elementMax(v, d);
	cout << max << endl;
}
void sol7() {
	Jucator E1;
	E1.marimeTricou = "XL";
	E1.nrTricou = 1;

	Jucator E2;
	E2.marimeTricou = "L";
	E2.nrTricou = 3;

	Jucator E3;
	E3.marimeTricou = "XXL";
	E3.nrTricou = 4;

	Jucator E4;
	E4.marimeTricou = "XL";
	E4.nrTricou = 2;

	Jucator juc[4] = { E1,E2,E3,E4 };

	afiasreDateEchipaE(juc, 4);
}

void sol8() {
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	perechiCuCMMCegalCuM(n, m);
}

void sol9() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol10() {
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiOglindi(v, d);
}
void sol11() {
	int v[100], d = 0;
	citireVector(v, d);
	int prod = produsMax(v, d);
	cout << prod << endl;
}
void sol12() {
	int x[100][100], m = 5, n = 5;
	generareMatrice1(x, m, n);
	afisareMatrici(x, m, n);
}
void sol13() {
	int x[100][100], m = 5, n = 5;
	generareMatrice2(x, m, n);
	afisareMatrici(x, m, n);
}
void sol14() {
	int x[100][100], m = 5, n = 5;
	generareMatrice3(x, m, n);
	afisareMatrici(x, m, n);
}
void sol15() {
	int x[100][100], m = 5, n = 6;
	generareMatrice4(x, m, n);
	afisareMatrici(x, m, n);
}
void sol16() {
	int x[100][100], m = 6, n = 6;
	generareMatrice5(x, m, n);
	afisareMatrici(x, m, n);
}
void sol17() {
	int x[100][100], m = 6, n = 6;
	generareMatrice6(x, m, n);
	afisareMatrici(x, m, n);
}
void sol18() {
	int x[100][100], m = 5, n = 5;
	generareMatrice7(x, m, n);
	afisareMatrici(x, m, n);
}
void sol19() {
	int x[100][100], m = 7, n = 7;
	generareMatrice8(x, m, n);
	afisareChar(x, m, n);
}
void sol20() {
	int x[100][100], m = 6, n = 6;
	generareMatrice9(x, m, n);
	afisareMatrici(x, m, n);
}
void sol21() {
	int x[100][100], m = 5, n = 5;
	generareMatrice10(x, m, n);
	afisareChar(x, m, n);
}
void sol22() {
	int x[100][100], m = 5, n = 5;
	generareMatrice11(x, m, n);
	afisareMatrici(x, m, n); (x, m, n);
}
void sol23() {
	int x[100][100], m = 4, n = 4;
	generareMatrice12(x, m, n);
	afisareChar(x, m, n);
}
void sol24() {
	int x[100][100], m = 4, n = 4;
	generareMatrice13(x, m, n);
	afisareMatrici(x, m, n); (x, m, n);
}
void sol25() {
	int x[100][100], m = 5, n = 5;
	generareMatrice14(x, m, n);
	afisareChar(x, m, n);
}
void sol26() {
	int x[100][100], m = 5, n = 5;
	generareMatrice15(x, m, n);
	afisareMatrici(x, m, n); (x, m, n);

}