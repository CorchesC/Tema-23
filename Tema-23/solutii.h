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
void sol27() {
	int v[100], d = 0;
	citireVector(v, d);
	int fc = celMaiMicFactorPrim(v, d);
	cout << fc << endl;
}
void sol28() {
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrPerechiPrimeIntreEle(v, d);
	cout << nr << endl;
}
void sol29() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	eliminareCifrePareSiCreeareNrNou(n);
}
void sol30() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	celMaiMareNumarParDePeLinieCuPrimulNumarImpar(x, m, n);
}
void sol31() {
	int v[100], d = 0;
	citireVector(v, d);
	elementeCuNumarDeAparitii(v, d);
}
void sol32() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol33() {
	int d = 0;
	int mat[200];
	int rom[200];
	int inf[200];
	citireVector(mat, d);
	citireVector2(rom, d);
	citireVector3(inf, d);
	auCelPutinNota5SiMedia7(mat, rom, inf, d);
}
void sol34() {
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	vectorPrimCuNMaiMicCaN(n, v, d);
	afisareVector(v, d);
}
void sol35() {
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicateConsecutive(v, d);
	afisareVector(v, d);
}
void sol36() {
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	inserareCelMaiMicDivPrimAlLuiNInvectorDacaNuExista(n,v, d);
	afisareVector(v, d);
}
void sol37() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	stergereMijloc(x, m, n);
	afisareMatrici(x, m, n);
}
void sol38() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	schimbareLiniiCuNumarulDeUnuPeColoane(x, m, n);
	afisareMatrici(x, m, n);
}
void sol39() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	bool aff = existaOColoanaDoarCuX(x, m, n);
	aff == true 
		?
		cout << "Exista cel putin o coloana doar cu caracterul X" << endl
		:
		cout << "Nu exista cel putin o coloana doar cu caracterul X" << endl;

}
void sol40() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	double ma = mediaAritmeticaAValorilorMinimeDePeColoaneOrdonateStrictCrescator(x, m, n);
	cout << ma << endl;
}
void sol41() {
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	schimbareElementeParePanaIn3CifreCuMaxDiagPrincipala(x, m, n);
	afisareMatrici(x, m, n);
}
void sol42() {
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	cout << "Introduceti nr de cifre: " << endl;
	int k;
	cin >> k;
	afisareNrDivCuNSiM(n, m, k);
}
void sol43() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareNrCuNrMaxDeAparitii(v, d);
}
void sol44() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoare(v, d);
}
void sol45() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareNrCuNrMinDeAparitii(v, d);
}
void sol46() {
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti pozitia: " << endl;
	int k;
	cin >> k;
	int nr = nrPePozitaKDesc(v, d, k);
	cout << nr << endl;
}
void sol47() {
	int v[100], d = 0;
	citireVector(v, d);
	afisareInOrdineCrescatoarePalindroameCu6CifreImpare(v, d);
}
void sol48() {
	int v[100], d = 0;
	citireVector(v, d);
	vectorCuNumereInterioareAleNumerelorCuPcUcEgale(v, d);
}
void sol49() {
	int v[100], d = 0;
	citireVector(v, d);
	int lmax = lungimeMaxSecventeCuPcEgala(v, d);
	cout << lmax << endl;
}
void sol50() {
	int v[100], d = 0;
	citireVector(v, d);
	int min = nrCuAparitiiMinime(v, d);
	cout << min << endl;
}