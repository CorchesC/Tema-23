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
void citireMatrici(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisareMatrici(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
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
			if (v[j] > v[j + 1]) {
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
void generareMatrice1(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (i < j && i + j < n - 1) {
				x[i][j] = 1;
			}
			if (i < j && i + j > n - 1) {
				x[i][j] = 2;
			}
			if (i > j && i + j > n - 1) {
				x[i][j] = 3;
			}
			if (i > j && i + j < n - 1) {
				x[i][j] = 4;
			}
			x[i][i] = 0;
			x[i][(n - 1) - i] = 0;
		}
	}
}
void generareMatrice2(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		int nr = i + 1;
		for (int j = 0; j <= 4; j++) {
			if (j == 0) {
				x[i][j] = i + 1;
			}
			else {
				x[i][j] = nr + 5;
				nr = x[i][j];
			}
		}
	}
}
void generareMatrice3(int x[100][100], int m, int n) {
	int nrMin = 1;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (i % 2 == 0) {
				x[i][j] = nrMin;
				nrMin++;
			}
			if (i % 2 != 0) {
				x[i][(n - 1) - j] = nrMin;
				nrMin++;
			}
		}
	}
}
void generareMatrice4(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= 0; j--) {
			x[i][j] = m - ((j + 1) - (i + 1));
		}
	}
}
void generareMatrice5(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		int nr = 0;
		for (int j = 0; j <= 2; j++) {
			if (i == 0 || i == 5) {
				x[i][j] = nr;
				x[i][(n - 1) - j] = nr;
				nr++;
			}
			if (i == 1 || i == 4) {
				x[i][j] = nr + 1;
				x[i][(n - 1) - j] = nr + 1;
				nr++;
			}
			if (i == 2 || i == 3) {
				x[i][j] = nr + 2;
				x[i][(n - 1) - j] = nr + 2;
				nr++;
			}
		}
	}
}
void generareMatrice6(int x[100][100], int m, int n) {
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			x[i][j] = i % 3 + j % 3;
			if (x[i][j] == 4) {
				x[i][j] = 6;
			}
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatrice7(int x[100][100], int m, int n) {
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j < 6; j++) {
			if (i == 5 || j == 1) {
				x[i][j] = 5;
			}
			else {
				x[i][j] = x[i][j - 1] % 2 + x[i + 1][j] % 2;
			}
		}
	}
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void afisareChar(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			char f = x[i][j];
			cout << f << " ";
		}
		cout << endl;
	}
}
void generareMatrice8(int x[100][100], int m, int n) {
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			if (j == 0 || j == 6) {
				x[i][j] = '*';
			}
			else if (i <= 3 && (j + i == 6 || i == j)) {
				x[i][j] = '*';
			}
			else {
				x[i][j] = '-';
			}
		}
	}
}
void generareMatrice9(int x[100][100], int m, int n) {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			x[i][j] = i < j ? i : j;
			x[7 - i][j] = x[i][7 - j] = x[7 - i][7 - j] = x[i][j];
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatrice10(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'A';
			}
			else if (i < j) {
				x[i][j] = x[i][j - 1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i - 1][4];
			}
			else {
				x[i][j] = x[i][j - 1] + 1;
			}
		}
	}
}
void generareMatrice11(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i][j - 1];
			}
		}
	}
}
void generareMatrice12(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (j < 2) {
					x[i][j] = 'a';
				}
				else {
					x[i][j] = 'b';
				}
			}
			if (i % 2 != 0) {
				if (j < 2) {
					x[i][j] = 'A';
				}
				else {
					x[i][j] = 'B';
				}
			}
		}
	}
}
void generareMatrice13(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) {
				x[i][j] = 1;
			}
			else if (i + j == 3) {
				x[i][j] = 7;
			}
			else {
				x[i][j] = j + 1;
			}
		}
	}
}
void generareMatrice14(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'a';
			}
			else if (i < j) {
				x[i][j] = x[i][j - 1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i - 1][j] + 1;
			}
			else {
				x[i][j] = x[i][j - 1] - 1;
			}
		}
	}
}
void generareMatrice15(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) {
				if (j < 4) {
					x[i][j] = j + 1;
				}
				else {
					x[i][j] = -2;
				}
			}
			else if (j == 4) {
				x[i][j] = -2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i - 1][j + 1];
			}
		}
	}
}
int celMaiMicFactorPrim(int v[], int d) {
	int n = 1;
	int cst = 0;
	int factor = -1;
	while (n <= 100 && cst == 0) {
		if(numarPrim(n) == true) {
			bool aff = true;
			for (int i = 0; i < d; i++) {
				if (v[i] % n != 0) {
					aff = false;
				}
			}
			if (aff == true) {
				factor = n;
				cst = 1;
			}
		}
		n++;
	}
	return factor;
}
int celMaiMareDivComun(int a, int b) {
	int x = a;
	int y = b;
	while (x != y) {
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	int cmmdc = x;
	return cmmdc;
}
int nrPerechiPrimeIntreEle(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (celMaiMareDivComun(v[i], v[j]) == 1) {
				nr++;
			}
		}
	}
	return nr / 2;
}
bool apartineVector(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}
void eliminareCifrePareSiCreeareNrNou(int n) {
	int k = 0;
	int nt = 0;
	int v[100], d = 0;
	int vt[100], dt = 0;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0 && apartineVector(v, d, cifra) == false) {
			v[d] = cifra;
			d++;
			
		}
		else if (cifra % 2 != 0) {
			vt[dt] = cifra;
			dt++;
		}
		n = n / 10;
	}
	k = vectorInNumar(v, d);
	cout << oglindit(k) << endl;
	nt = vectorInNumar(vt, dt);
	cout << oglindit(nt) << endl;
}
void bubbleSortDesc(int v[], int d) {
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
void celMaiMareNumarParDePeLinieCuPrimulNumarImpar(int x[100][100], int m, int n) {
	int v[100], d = 0;
	int cst = 0;
	for (int i = 0; i < m; i++) {
		if (x[i][0] % 2 != 0 && cst == 0) {
			for (int j = 0; j < m; j++) {
				if (x[i][j] % 2 == 0) {
					v[d] = x[i][j];
					d++;
					cst = 1;
				}
			}
		}
	}
	bubbleSortDesc(v, d);
	int nr = vectorInNumar(v, d);
	cout << nr << endl;
}
int numarAparitiiVector(int v[], int d, int n) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			nr++;
		}
	}
	return nr;
}
void elementeCuNumarDeAparitii(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (apartineVector(vt, dt, v[i]) == false) {
			cout << v[i] << " " << numarAparitiiVector(v, d, v[i]) << endl;
			vt[dt] = v[i];
			dt++;
		}
	}
}
void citireVector3(int v[], int& dim) {

	ifstream f("numere3.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void auCelPutinNota5SiMedia7(int mat[], int rom[], int inf[], int d) {
	for (int i = 0; i < d; i++) {
		if (mat[i] >= 5 && rom[i] >= 5 && inf[i] >= 5 && ((mat[i] + rom[i] + inf[i]) / 3) >= 7) {
			cout << i << endl;
		}
	}
}
void stergereElementeDuplicateConsecutive(int v[], int& d) {
	for (int i = 0; i < d; i++) {
		if (v[i] == v[i + 1]) {
			sterge(v, d, i+1);
		}
	}
}
void vectorPrimCuNMaiMicCaN(int n, int v[], int& d) {
	for (int i = 1; i < n; i++) {
		if (celMaiMareDivComun(n, i) == 1) {
			v[d] = i;
			d++;
		}
	}
}
void inserare(int v[], int& d, int p, int nou) {
	for (int i = d; i >= p; i--) {
		v[i + 1] = v[i];
	}
	d++;
	v[p] = nou;
}
int celMaiMicDivizorPrim(int n) {
	int div = 0;
	int cst = 0;
	for (int x = 1; x <= n; x++) {
		if (x != 1 && n % x == 0 && numarPrim(x) == true && cst == 0) {
			div = x;
			cst = 1;
		}
	}
	return div;
}
void inserareCelMaiMicDivPrimAlLuiNInvectorDacaNuExista(int n, int v[], int& d) {
	int div = celMaiMicDivizorPrim(n);
	if (apartineVector(v, d, div) == true) {
		cout << div << endl;;
	}
	else {
		int cst = 0;
		for (int i = 0; i < d; i++) {
			if (v[i] > div && cst == 0) {
				inserare(v, d, i + 1, div);
				cst = 1;
			}
		}
	}
}
void stergereLinie(int x[100][100], int& m, int n, int l) {
	for (int i = l; i < m - 1; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = x[i + 1][j];
		}
	}
	m--;
}
void stergereColoana(int x[100][100], int m, int& n, int c) {
	for (int j = c; j < n - 1; j++) {
		for (int i = 0; i < m; i++) {
			x[i][j] = x[i][j + 1];
		}
	}
	n--;
}
void stergereMijloc(int x[100][100], int& m, int& n) {
	int mij = (m-1) / 2;
	stergereLinie(x, m, n, mij);
	stergereColoana(x, m, n, mij);
}
bool liniaAreDoar0(int x[100][100], int m, int n, int l) {
	bool aff = true;
	for (int j = 0; j < n; j++) {
		if (x[l][j] != 0) {
			aff = false;
		}
	}
	if (aff == true) {
		return true;
	}
	return false;
}
int numarulDeUnuPeColoane(int x[100][100], int m, int n, int c) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		if (x[i][c] == 1) {
			nr++;
		}
	}
	return nr;
}
void schimbareLiniiCuNumarulDeUnuPeColoane(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		if (liniaAreDoar0(x, m, n, i) == true) {
			for (int j = 0; j < n; j++) {
				x[i][j] = numarulDeUnuPeColoane(x, m, n, j);
			}
		}
	}
}
bool existaOColoanaDoarCuX(int x[100][100], int m, int n) {
	for (int j = 0; j < n; j++) {
		bool aff = true;
		for (int i = 0; i < m; i++) {
			if (x[i][j] != 'X') {
				aff = false;
			}
		}
		if (aff == true) {
			return true;
		}
	}
	return false;
}
bool esteColoanaStrictCrescatoare(int x[100][100], int m, int n, int c) {
	bool aff = true;
	for (int i = 0; i < m; i++) {
		if (x[i][c] > x[i + 1][c]) {
			aff = false;
		}
	}
	return aff;
}
int valoareMinimaColoana(int x[100][100], int m, int n, int c) {
	int min = 999999;
	for (int i = 0; i < m; i++) {
		if (x[i][c] < min) {
			min = x[i][c];
		}
	}
	return min;
}
double mediaAritmeticaAValorilorMinimeDePeColoaneOrdonateStrictCrescator(int x[100][100], int m, int n) {
	double s = 0;
	double nr = 0;
	for (int j = 0; j < n; j++) {
		if (esteColoanaStrictCrescatoare(x, m, n, j)) {
			s += valoareMinimaColoana(x, m, n, j);
			nr++;
		}
	}
	double ma = s / nr;
	return ma;
}
int elementMaximDiagonalaPrincipala(int x[100][100], int m, int n) {
	int max = -1;
	for (int i = 0; i < n; i++) {
		if (x[i][i] > max) {
			max = x[i][i];
		}
	}
	return max;
}
void schimbareElementeParePanaIn3CifreCuMaxDiagPrincipala(int x[100][100], int m, int n) {
	int max = elementMaximDiagonalaPrincipala(x, m, n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] % 2 == 0) {
				x[i][j] = max;
			}
		}
	}
}
void afisareNrDivCuNSiM(int n, int m,int k) {
	for (int i = 1; i < pow(10, k); i++) {
		if (i % n == 0 && i % m == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int nrMaximDeAparitii(int v[], int d) {
	int nra = 0;
	for (int i = 0; i < d; i++) {
		int nr = v[i];
		int nrt = 0;
		for (int j = 0; j < d; j++) {
			if (v[j] == nr) {
				nrt++;
			}
		}
		if (nrt > nra) {
			nra = nrt;
		}
	}
	return nra;
}
void afisareNrCuNrMaxDeAparitii(int v[], int d) {
	int max = nrMaximDeAparitii(v, d);
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) == max && apartineVector(vt,dt,v[i]) == false) {
			cout << v[i] << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
void afisareCrescatoare(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
int nrMinimDeAparitii(int v[], int d) {
	int nra = 99999999;
	for (int i = 0; i < d; i++) {
		int nr = v[i];
		int nrt = 0;
		for (int j = 0; j < d; j++) {
			if (v[j] == nr) {
				nrt++;
			}
		}
		if (nrt < nra) {
			nra = nrt;
		}
	}
	return nra;
}
void afisareNrCuNrMinDeAparitii(int v[], int d) {
	int min = nrMinimDeAparitii(v, d);
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) == min && apartineVector(vt, dt, v[i]) == false) {
			cout << v[i] << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
int nrPePozitaKDesc(int v[], int d, int k) {
	bubbleSortDesc(v, d);
	for (int i = 0 ; i < d; i++) {
		if (i == k) {
			return v[i];
		}
	}
	return -1;
}
int nrCifreImpare(int n) {
	int nr = 0;
	while (n != 0) {
		int c = n % 10;
		if (c % 2 != 0) {
			nr++;
		}
		n = n / 10;
	}
	return nr;
}
bool estePalidnrom(int n) {
	if (oglindit(n) == n) {
		return true;
	}
	else {
		return false;
	}
}
void afisareInOrdineCrescatoarePalindroameCu6CifreImpare(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (nrCifreImpare(v[i]) == 6 && estePalidnrom(v[i]) == true) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
} 
int primaCifra(int n) {
	int pc = 0;
	while (n != 0) {
		int c = n % 10;
		pc = c;
		n = n / 10;
	}
	return pc;
}
int numarInterior(int n) {
	n = n / 10;
	int nrc = nrCifre(n);
	int pc = primaCifra(n);
	int nrf = n - (pow(10, nrc - 1) * pc);
	return nrf;
}
bool primaCifraEgalCuUltima(int n) {
	int uc = n % 10;
	int pc = primaCifra(n);
	if (pc == uc) {
		return true;
	}
	else {
		return false;
	}
}
void vectorCuNumereInterioareAleNumerelorCuPcUcEgale(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (primaCifraEgalCuUltima(v[i]) == true) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSortDesc(vt, dt);
	afisareVector(vt, dt);
}
int lungimeMaxSecventeCuPcEgala(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		int pc = primaCifra(v[i]);
		int nr = 0;
		for (int j = 0; j < d; j++) {
			if (primaCifra(v[j]) == pc) {
				nr++;
			}
			else if (primaCifra(v[j]) != pc){
				if (nr > max) {
					max = nr;
				}
			}
		}
	}
	return max;
}
int nrCuAparitiiMinime(int v[], int d) {
	int nr = 0;
	int min = nrMinimDeAparitii(v, d);
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v,d,v[i]) == min) {
			nr = v[i];
			return nr;
		}
	}
	return 0;
}
void afisareNumereDivizibileCuN(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] % n == 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareElementeMaiMiciCaN(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] < n) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereCrescatoareNenule(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] >= 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereCrescatoarePeste3Cifre(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) >= 3) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareNumereDescrescatoareSub2Cifre(int v[], int d) {
	bubbleSortDesc(v, d);
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) <= 2) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisarePrefixeNenule(int n) {
	while (n != 0) {
		cout << n << " ";
		n = n / 10;
	}
	cout << endl;
}
void afisareNumerePrimeCrescator(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (numarPrim(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaPanaLaN(int v[], int d, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += v[i];
	}
	return n;
}
void afisarePrimaNSumaPanaLa0(int v[], int d) {
	int n = d - 1;
	while (n >= 0) {
		cout << sumaPanaLaN(v, d, n) << " ";
	}
	cout << endl;
}
void afisareUniceCuNrAparitii(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (apartineVector(v, d, v[i]) == false) {
			cout << v[i] << " " << numarAparitiiVector(v, d, v[i]) << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
void afiarePrimeleNNumereDivCuk(int v[], int d, int n, int k) {
	int cnt = 0;
	for (int i = 0; cnt < k && i < d; i++) {
		if (v[i] % k == 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareCeleMaiMariDouaNumereDeTreiCifre(int v[], int d) {
	int max1 = -1;
	int max2 = -1;
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) == 3 && v[i] > max1) {
			max1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (nrCifre(v[j]) == 3 && v[j] != max1 && v[j] > max2) {
			max2 = v[j];
		}
	}
	cout << max1 << " " << max2 << endl;
}
void afisareCeleMaiMariDouaNumerePrimeDiferite(int v[], int d) {
	int max1 = -1;
	int max2 = -1;
	for (int i = 0; i < d; i++) {
		if (numarPrim(v[i]) == true && v[i] > max1) {
			max1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (numarPrim(v[j]) == true && v[j] != max1 && v[j] > max2) {
			max2 = v[j];
		}
	}
	cout << max1 << " " << max2 << endl;
}
int nrNumerePrime(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		numarPrim(v[i]) == true;
		nr++;
	}
	return nr;
}
bool existaInAmbiiVectori(int v1[], int d1, int v2[], int d2, int n) {
	for (int i = 0; i < d1; i++) {
		for (int j = 0; j < d2; j++) {
			if (v1[i] == n && v2[j] == n) {
				return true;
			}
		}
		return false;
	}
}
void afisareNrDivCu5CareNuExsistaInAmbiiVectori(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (v1[i] % 5 == 0 && existaInAmbiiVectori(v1,d1,v2,d2,v1[i]) == false) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (v2[j] % 5 == 0 && existaInAmbiiVectori(v1, d1, v2, d2, v2[j]) == false) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
bool areCifreEgale(int n) {
	int c2 = -1;
	bool aff = true;
	while (n != 0) {
		int c = n % 10;
		if (c2 == -1) {
			aff = true;
		}
		else if (c != c2) {
			return false;
		}
		c2 = c;
		n = n / 10;
	}
	return aff;
}
void afisareCrescatoareNumereCuToateCifreleEgale(int v[], int d) {
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (areCifreEgale(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
bool areCifraPara(int n) {
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			return true;
		}
		n = n / 10;
	}
	return false;
}
void afisareElementeCuCelPutinOCifraPara(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (areCifraPara(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int nrCuCeiMaiMultiDivizoriInterval1N(int n) {
	int max = -1;
	for (int i = 1; i <= n; i++) {
		if (numarDivizori(i) > max) {
			max = numarDivizori(i);
		}
	}
	return max;
}
void afisareUltimeleDouaElementeImpare(int v[], int d) {
	int u1 = -1;
	int u2 = -1;
	for (int i = d - 1; i >= 0; i++) {
		if (v[i] % 2 == 0) {
			u1 = v[i];
		}
	}
	for (int j = d - 1; j >= 0; j++) {
		if (v[j] % 2 != 0 && v[j] != u1) {
			u2 = v[j];
		}
	}
	cout << u1 << " " << u2 << endl;
}
int nrElementeMultipluLuiKSiAuUcEgalaCuK(int v[], int d, int k) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % k == 0 && (v[i] % 10) == k) {
			nr++;
		}
	}
	return nr;
}
int nrElementeCareApartinIntervalDeterminatDePrimulSiUltimulElement(int v[], int d) {
	int nr = 0;
	int i1 = v[0];
	int i2 = v[d - 1];
	for (int i = 0; i < d; i++) {
		if (v[i] >= i1 && v[i] <= i2) {
			nr++;
		}
	}
	return nr;
}
int pozitiaPrimuluiElementDupaOrdonareaCrescatoareAVectorului(int v[], int d) {
	int poz = -1;
	int pe = v[0];
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] == pe) {
			poz = i;
		}
	}
	return poz;
}
void citireVectorDouble(double v[], double& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
double mediaArtitmeticaElementeVector(double v[], double d) {
	double s = 0;
	double nr = d - 1;
	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	double ma = s / nr;
	return ma;
}
int nrElementeCaMediaAritmeticaAElementelorVectorului(double v[], double d) {
	int nr = 0;
	int ma = mediaArtitmeticaElementeVector(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] >= ma) {
			nr++;
		}
	}
	return nr;
}
int pozitiaLuiKInVectorOrdonatDescrescator(int v[], int d,int k) {
	int poz = -1;
	bubbleSortDesc(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] == k) {
			poz = i;
		}
	}
	return poz;
}
void afisareElementeCareApartinMacarUnuiVector(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (apartineVector(vt,dt,v1[i]) == false) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (apartineVector(vt, dt, v2[j]) == false) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
void afisareNrCareExsistaInAmbiiVectori(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (existaInAmbiiVectori(v1, d1, v2, d2, v1[i]) == true) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (existaInAmbiiVectori(v1, d1, v2, d2, v2[j]) == true) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int elementMaxPoz(int v[], int d) {
	int poz = -1;
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (v[i] > max) {
			max = v[i];
			poz = i;
		}
	}
	return poz;
}
int elementMinPoz(int v[], int d) {
	int poz = -1;
	int min = 999999;
	for (int i = 0; i < d; i++) {
		if (v[i] < min) {
			min = v[i];
			poz = i;
		}
	}
	return poz;
}
double mediaAritmeticaDupaElminareMaxMin(int v[], int& d) {
	int max = elementMaxPoz(v, d);
	int min = elementMinPoz(v, d);
	sterge(v, d, max);
	sterge(v, d, min);
	double s = 0;
	double nr = d - 1;
	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	double ma = s / nr;
	return ma;
}
int nrMinimDinIntervalCareApartineVector(int a, int b, int v[], int d) {
	for (int i = a; i <= b; i++) {
		if (apartineVector(v, d, i) == true) {
			return i;
		}
	}
	return -1;
}
int numarFormatDinCifrelePareDinVector(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			nr = v[i];
			nr = nr * 10;
		}
	}
	return nr;
}
void afisareDescrescaoarePrimiiKMultipliiLuiN(int n, int k) {
	int v[100], d=0;
	int ctr = 0;
	for (int i = n; d < k; i++) {
		if (i % n == 0) {
			v[d] = i;
			d++;
		}
	}
	bubbleSortDesc(v, d);
	afisareVector(v, d);
}
bool esteNumarAproapePrim(int n) {
	bool aff = false;
	for (int i = 0; aff == false; i++) {
		if (numarPrim(i) == true) {
			for (int j = 0; aff == false; j++) {
				if (numarPrim(j) == true && (i * j) == n) {
					aff = true;
				}
			}
		}
	}
	return aff;
}
int celMaiMareNumarAproapePrim(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (esteNumarAproapePrim(v[i]) == true && v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
void afisareMultipliiLuiCDinASiB(int a, int b, int c) {
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int sumaCelorMaiMiciMELemente(int v[], int d, int m) {
	int vt[100], dt = 0;
	int ctr = 0;
	while (ctr < m) {
		int min = 9999;
		for (int i = 0; i < d; i++) {
			if (apartineVector(vt, dt, v[i]) == false && v[i] < min) {
				min = v[i];
			}
		}
		if (min != 9999) {
			vt[dt] = min;
			dt++;
		}
	}
	int s = 0;
	for (int j = 0; j < dt; j++) {
		s += vt[j];
	}
	return s;
}
int primulNumarStrictMaiMareCaX(int x) {
	int nr = 0;
	int cst = 0;
	for (int i = x + 1; cst == 0; i++) {
		if (numarPrim(i) == true) {
			nr = i;
			cst = 1;
		}
	}
	return nr;
}
void afisareCeleMaiMiciDouaElementeCu2Cifre(int v[], int d) {
	int min1 = 999999;
	int min2 = 999999;
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) == 2 && v[i] < min1) {
			min1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (nrCifre(v[j]) == 2 && v[j] != min1 && v[j] > min2) {
			min2 = v[j];
		}
	}
}
int sumaElementeDivizibileCu3(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (i % 3 == 0) {
			s += v[i];
		}
	}
	return s;
}
void afisareElementeCuPrimaSiUltimaCifraEgala(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] < 10) {
			cout << v[i] << " ";
		}
		else if (primaCifraEgalCuUltima(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaDivizorilorPropii(int n) {
	int s = 0;
	for (int x = 1; x < n; x++) {
		if (x != 1 && n % x == 0) {
			s += x;
		}
	}
	return s;
}
void afisareCrescatoareSumaDivizorilorElementelor(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		vt[dt] = sumaDivizorilorPropii(v[i]);
		dt++;
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int ultimaCifraPara(int n) {
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			return c;
		}
		n = n / 10;
	}
	return -1;
}
int celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (ultimaCifraPara(v[i]) != -1) {
			vt[dt] = ultimaCifraPara(v[i]);
			dt++;
		}
	}
	bubbleSort(vt, dt);
	int nr = vectorInNumar(vt, dt);
	return nr;
}
int nrDivizoriPrimi(int n) {
	int nr = 0;
	for (int x = 1; x <= n; x++) {
		if (x != 1 && n % x == 0) {
			if (numarPrim(x) == true) {
				nr++;
			}
		}
	}
	return nr;
}
void afisareElementeCuNumarParDeDivizoriPrimi(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (nrDivizoriPrimi(v[i]) % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void numarInVector(int n, int v[], int& d) {
	while (n != 0) {
		v[d] = n % 10;
		d++;
		n = n / 10;
	}
}
void stergereElementeStrictMaiMariCaN(int n, int v[], int& d) {
	for (int i = 0; i < d; i++) {
		if (v[i] >= n ) {
			sterge(v, d, i);
		}
	}
}
int stergereCifreDinXStrictMaiMariCaY(int x, int y) {
	int v[100], d = 0;
	numarInVector(x, v, d);
	stergereElementeStrictMaiMariCaN(y, v, d);
	int nr = vectorInNumar(v, d);
	return nr;
}
bool esteOrdonatCrescator(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] > v[i + 1]) {
			return false;
		}
	}
	return true;
}
void descompunereNumarInVector(int n, int v[], int& d) {
	while (n != 0) {
		int c = n % 10;
		v[d] = c;
		d++;
		n = n / 10;
	}
}
void afisareVaElementePrime(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (numarPrim(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaDivizori(int n) {
	int s = 0;
	for (int x = 1; x <= n; x++) {
		if (x != 1 && n % x == 0) {
			s += x;
		}
	}
	return s;
}
bool areToateElementeleDistincte(int v[], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (v[i] == v[j]) {
				return false;
			}
		}
	}
	return true;
}
void afisareCrescatoareElementeCareAparDoarOdata(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v,d,v[i]) == 1) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int sumaElementelorImpareDePePozitiiPare(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (i % 2 == 0 && v[i] % 2 != 0) {
			s += v[i];
		}
	}
	return s;
}
int numarMaximDinVector(int v[], int d) {
	bubbleSortDesc(v, d);
	int nr = vectorInNumar(v, d);
	return nr;
}
void afisareElementeCareAuCelPutinKDivizori(int v[], int d, int k) {
	for (int i = 0; i < d; i++) {
		if (numarDivizori(v[i]) >= k) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
bool estePutereALuiK(int n, int k) {
	for (int i = 0; i < 100; i++) {
		if (pow(k, i) == n) {
			return true;
		}
	}
	return false;
}
void afisareNumereCareSuntPuteriALuiK(int v[], int d, int k) {
	for (int i = 0; i < d; i++) {
		if (estePutereALuiK(v[i],k) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaCifre(int n) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		s += c;
		n = n / 10;
	}
	return s;
}
int sumaCifrelorMaximaDinVector(int v[], int d) {
	int scmax = -1;
	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) > scmax) {
			scmax = sumaCifre(v[i]);
		}
	}
	return scmax;
}
void afisareElementeCareAuSumaMaximaDeCifreDinVecor(int v[], int d) {
	int scmax = sumaCifrelorMaximaDinVector(v, d);
	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) == scmax) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void aifsareDivizoriiLuiNDinIntevalulAB(int a, int b, int n) {
	for (int i = a; i <= b; i++) {
		if (n & i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
void afisareCrescatoareElementeCareAparDeCelPutin2Ori(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) >= 2) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
void afisarePerechiCuAceeasiParitate(int v[], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (v[i] % 2 == 0) {
				if (v[j] % 2 == 0) {
					cout << v[i] << " " << v[j] << endl;
				}
			}
			if (v[i] % 2 != 0) {
				if (v[j] % 2 != 0) {
					cout << v[i] << " " << v[j] << endl;
				}
			}
		}
	}
}
bool estePalindrom(int n) {
	if (oglindit(n) == n) {
		return true;
	}
	return false;
}
int celMaiApropiatPalindrom(int n) {
	if (estePalindrom(n) == true) {
		return n;
	}
	else {
		for (int i = n - 1; i > 0; i--) {
			if (estePalindrom(i) == true) {
				return i;
			}
		}
	}
	return 0;
}
int nrElementeCareSuntSumeDeAlteElementeAleVectorului(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			for (int k = 0; k < d; k++) {
				if (v[i] == v[j] + v[k]) {
					nr++;
				}
			}
		}
	}
	return nr;
}
bool areCifreleOrdonateStrictCrescator(int n) {
	int c2 = 999999;
	while (n != 0) {
		int c = n % 10;
		if (c < c2) {
			return false;
		}
		c2 = c;
		n = n / 10;
	}
	return true;
}
void afisareElementeCuCifreleOrdonateStrictCrescator(int v[], int d) {
	
}
int lipireDouaNumere(int a, int b) {
	int n = a * pow(10, nrCifre(b));
	int nf = n + b;
	return nf;
}
void afisareNumereLipiteDinCeiDoiVectori(int v1[], int d1, int v2[], int d2) {
	for (int i = 0; i < d1; i++) {
		for (int j = 0; j < d2; j++) {
			if (v1[i] > v2[j]) {
				cout << lipireDouaNumere(v2[j], v1[i]) << " ";
			}
			if (v2[j] > v1[i]) {
				cout << lipireDouaNumere(v1[i], v2[j]) << " ";
			}
		}
	}
	cout << endl;
}
void afisareElementePare(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
bool intervalulAreMacarUnNumarPrim(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (numarPrim(i) == true) {
			return true;
		}
	}
	return false;
}
void afisareCeleMaiMiciTreiElementeDinVector(int v[], int d) {
	int min1 = 999999;
	int min2 = 999999;
	int min3 = 999999;
	for (int i = 0; i < d; i++) {
		if (v[i] < min1) {
			min1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (v[j] != min1 && v[j] < min2) {
			min2 = v[j];
		}
	}
	for (int k = 0; k < d; k++) {
		if (v[k] != min1 && v[k] != min2 && v[k] < min3) {
			min3 = v[k];
		}
	}
	cout << min1 << " " << min2 << " " << min3 << endl;
}
int ultimaCifraAProdusuluiCelorMaimareiTreiNumereDinVector(int v[], int d) {
	int max1 = -1;
	int max2 = -1;
	int max3 = -1;
	
	for (int k = 0; k < d; k++) {
		if (v[k] != max1 && v[k] != max2 && v[k] > max3) {
			max3 = v[k];
		}
	}
	int prod = max1 * max2 * max3;
	int uc = prod % 10;
	return uc;
}
void afisareElementeleImpareInOrdineCrescSiCelePareInOrdineDesc(int v[],int d) {
	int vt1[100], dt1 = 0;
	int vt2[100], dt2 = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 != 0) {
			vt1[i] = v[i];
			dt1++;
		}
	}
	bubbleSort(vt1, dt1);
	afisareVector(vt1, dt1);
	for (int j = 0; j < d; j++) {
		if (v[j] % 2 == 0) {
			vt2[j] = v[j];
			dt2++;
		}
	}
	bubbleSortDesc(vt2, dt2);
	afisareVector(vt2, dt2);
}
bool areNumarulCelPutinUnSirDe3CifreImpare(int n) {
	int ctr = 0;
	while (n != 0) {
		int c = n % 10;
		if (c % 2 != 0) {
			ctr++;
		}
		else if (c % 2 == 0) {
			ctr = 0;
		}
		if (ctr >= 3) {
			return true;
		}
		n = n / 10;
	}
	return false;
}
int nrDeElementeCuSumaVecinilorMaiMAreCaElementulInSine(int v[], int d) {
	int nr = 0;
	for (int i = 1; i < d; i++) {
		if (v[i - 1] + v[i + 1] > v[i]) {
			nr++;
		}
	}
	return nr;
}
int nrPerechDeElementeCareSuntDivizoriCuEiInsasi(int v[], int d) {
	int nr = 0;
	for (int i = 1; i < d; i++) {
		if (v[i] % v[i + 1] == 0) {
			nr++;
		}
		if (v[i + 1] % v[i] == 0) {
			nr++;
		}
	}
	return nr;
}
void afisareCeaMaiLungaSecventaDeElementeOrdonateCrescator(int v[], int d) {
	int lmax = -1;
	int p1max = 0;
	int p2max = 0;
	for (int i = 0; i < d; i++) {
		int l = 0;
		int pf = 0;
		bool aff = true;
		for (int j = i; j < d; j++) {
			if (v[i] > v[i + 1]) {
				aff = false;
			}
			if (aff == true) {
				l++;
				pf = j;
			}
		}
		if (l > lmax) {
			lmax = l;
			p1max = i;
			p2max = pf;
		}
	}
	for (int k = p1max; k <= p2max; k++) {
		cout << v[k] << " ";
	}
	cout << endl;
}
bool areCifreleOrdonateStrictDescrescatoare(int n) {
	int c2 = -1;
	while (n != 0) {
		int c = n % 10;
		if (c > c2) {
			return false;
		}
		c2 = c;
		n = n / 10;
	}
	return true;
}
int nrElementeCareSuntMaiMariCaVeciniiSai(int v[], int d) {
	int nr = 0;
	for (int i = 1; i < d; i++) {
		if (v[i - 1] < v[i] && v[i + 1] < v[i]) {
			nr = v[i];
		}
	}
	return nr;
}
int cmmmdcAleElementelorDinVector(int v[], int d) {
	for (int x = 1; x < 100 ; x++) {
		bool aff = true;
		for (int i = 0; i < d; i++) {
			if (v[i] % x != 0) {
				aff = false;
			}
		}
		if (aff == true) {
			return x;
		}
	}
}
void afisareElementeCareAparDoarOdata(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) == 1) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void afisareElementulSiNumarulSauDeAparitiiCuNrMaxDeAparitiiInVector(int v[], int d) {
	int max = nrMaximDeAparitii(v, d);
	int cst = 0;
	for (int i = 0; i < d && cst == 0; i++) {
		if (numarAparitiiVector(v, d, v[i]) == max) {
			cout << max << " " << v[i] << endl;
			cst = 1;
		}
	}
}
void afisareElementelePareInOrdineCrescSiCeleImpareInOrdineDesc(int v[], int d) {
	int vt1[100], dt1 = 0;
	int vt2[100], dt2 = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			vt1[i] = v[i];
			dt1++;
		}
	}
	bubbleSort(vt1, dt1);
	afisareVector(vt1, dt1);
	for (int j = 0; j < d; j++) {
		if (v[j] % 2 != 0) {
			vt2[j] = v[j];
			dt2++;
		}
	}
	bubbleSortDesc(vt2, dt2);
	afisareVector(vt2, dt2);
}
int numarDinCifrelPareAleLuiN(int n) {
	int nr = 0;
	int p = 1;
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			nr = nr + (p * c);
			p = p * 10;
			n = n / 10;
		}
	}
	return nr;
}
void afisareElementulPalindormSiNumarulSauDeAparitiiCuNrMaxDeAparitiiInVector(int v[], int d) {
	int max = nrMaximDeAparitii(v, d);
	int cst = 0;
	for (int i = 0; i < d && cst == 0; i++) {
		if (estePalindrom(v[i]) == true && numarAparitiiVector(v, d, v[i]) == max) {
			cout << max << " " << v[i] << endl;
			cst = 1;
		}
	}
}
int elementulDePePozitiaK(int v[], int d, int k) {
	for (int i = 0; i < d; i++) {
		if (i == k) {
			return v[i];
		}
	}
	return -1;
}
int cifraMax(int n) {
	int max = -1;
	while (n != 0) {
		int c = n % 10;
		if (c > max) {
			max = c;
		}
	}
	return max;
}
bool cifreleApartinIntervalului04(int n) {
	int v[5] = { 0,1,2,3,4 };
	int d = 5;
	while (n != 0) {
		int c = n % 10;
		if (apartineVector(v,d,c) == false) {
			return false;
		}
		n = n / 10;
	}
	return true;
}
int celMaiMicNumarDinVector(int v[], int d) {
	bubbleSort(v, d);
	int nr = vectorInNumar(v, d);
	return nr;
}
int nrCifreCareApartinIntervalPlusMinusC(int n, int c) {
	int nr = 0;
	while (n != 0) {
		int c = n % 10;
		if (c >= (c - 1) && c <= (c + 1)) {
			nr++;
		}
		n = n / 10;
	}
	return nr;
}	
void afisarePrimeleNNumerePime(int n) {
	int ctr = 0;
	for (int i = 0; ctr < n; i++) {
		if (numarPrim(i) == true) {
			cout << i << " ";
			ctr++;
		}
	}
}
void afisareNumereCareNuAparInVector(int v[], int d) {
	for (int i = 1; i < elementMax(v, d); i++) {
		if (apartineVector(v, d, i) == false) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int celMaiMicDivizorPropiu(int n) {
	int min = 999999;
	for (int x = 1; x < n; x++) {
		if (n % x == 0 && x < min) {
			min = x;
		}
	}
	return min;
}
double mediaArtitmeticaElementeVectorInt(int v[], int d) {
	double s = 0;
	double nr = d - 1;
	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	double ma = s / nr;
	return ma;
}