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
void sol51() {
	//Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte de la tastatură un număr natural nenul n(n≤999) şi numerele din fişierul bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier care sunt divizibile cu n.Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisareNumereDivizibileCuN(v, d, n);
}
void sol52() {
	//Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisareElementeMaiMiciCaN(v, d, n);
}
void sol53() {
	//Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de numere întregi, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, toate numerele naturale nenule din fişier.Dacă nu există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereCrescatoareNenule(v, d);
}
void sol54() {
	//Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult 100 de numere naturale, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre. Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereCrescatoarePeste3Cifre(v, d);
}
void sol55() {
	//Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult 100 de numere naturale, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre.Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereDescrescatoareSub2Cifre(v, d);
}
void sol56() {
	//Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre (n≥10)şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a valorii lor.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisarePrefixeNenule(n);
}
void sol57() {
	//Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n (n≤100)şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va determina şi va afişa pe ecran toate numerele prime din şirul citit.Numerele determinate se vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor.Dacă nu există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumerePrimeCrescator(v, d);
}
void sol58() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional a.Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe următoarea linie a ecranului suma primelor n - 1 elemente şi aşa mai departe, astfel încât ultima linie afişată să conţină doar primul element al tabloului.
	int v[100], d = 0;
	citireVector(v, d);
	afisarePrimaNSumaPanaLa0(v, d);
}
void sol59() {
	// Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale acestuia în şir.Valorile afişate sunt separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareUniceCuNrAparitii(v, d);
}
void sol60() {
	//Scrieţi definiţia completă a subprogramului sub cu doi parametri: n (număr natural,0 < n≤50) şi k(număr natural, 0 < k≤20).Subprogramul determină afişarea pe o linie nouă a ecranului, în ordine descrescătoare, a primelor n numere naturale nenule divizibile cu k
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afiarePrimeleNNumereDivCuk(v, d, n, k);
}
void sol61() {
	//Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi determină, folosind un algoritm eficient din punct de vedere timpului de executare, cele mai mari două numere de trei cifre care nu se află în fişier.Cele două numere vor fi afişate pe ecran în ordine descrescătoare, cu un spaţiu între ele.Dacă nu pot fi determinate două astfel de numere, programul va afişa pe ecran valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMariDouaNumereDeTreiCifre(v, d);
}
void sol62() {
	//Scrieţi definiţia completă a subprogramului sub cu trei parametri: n (număr natural,5 < n≤30000), a şi b; subprogramul furnizează prin intermediul parametrilor a şi b cele mai mari două numere prime distincte mai mici decât n.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMariDouaNumerePrimeDiferite(v, d);
}
void sol63() {
	//) Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n (0<n<25) şi apoi n numere naturale nenule cu maximum 9 cifre fiecare.Programul calculează, folosind apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrNumerePrime(v, d);
	cout << nr << endl;
}
void sol64() {
	//Fişierele text NR1.TXT şi NR2.TXT conţin, separate prin câte un spaţiu, mai multe numere întregi de cel mult 9 cifre fiecare.Fiecare dintre fişiere conţine cel mult 100 de valori şi numerele din fiecare fişier sunt ordonate strict crescător.Se cere să se afişeze pe ecran, în ordine crescătoare, numerele divizibile cu 5 care se găsesc doar în unul din cele două fişiere.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareNrDivCu5CareNuExsistaInAmbiiVectori(v1, d1, v2, d2);
}
void sol65() {
	//Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20), apoi un şir de n numere naturale, având fiecare exact 5 cifre.Dintre cele n numere citite, programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine crescătoare, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareNumereCuToateCifreleEgale(v, d);
}
void sol66() {
	//Pe prima linie a fişierului text BAC.IN se găsesc, separate prin câte un spaţiu, mai multe numere naturale de cel mult 9 cifre fiecare.Scrieţi programul C / C++ care citeşte numerele din acest fişier, utilizând apeluri ale subprogramului P elimină toate cifrele impare din fiecare dintre aceste numere şi apoi scrie în fişierul text BAC.OUT numerele astfel obţinute, separate prin câte un spaţiu.Dacă un număr din fişierul BAC.IN nu conţine nicio cifră pară nenulă, acesta nu va mai apărea deloc în fişierul de ieşire.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuCelPutinOCifraPara(v, d);
}
void sol67() {
	//Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	bubbleSort(v, d);
	afisareVector(v, d);
}
void sol68() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤32000) şi afişează pe ecran numărul natural din intervalul închis[1, n] care are cei mai mulţi divizori. Dacă există mai multe numere cu această proprietate se va afişa cel mai mic dintre ele.
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	int maxD = nrCuCeiMaiMultiDivizoriInterval1N(n);
	cout << maxD << endl;
}
void sol69() {
	//În fişierul text BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe numere naturale de cel mult 6 cifre fiecare.Se cere să se determine şi să se afişeze pe ecran, separate printr - un spaţiu, ultimele două numere impare(nu neapărat distincte) din fişierul BAC.IN.Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se
	int v[100], d = 0;
	citireVector(v, d);
	afisareUltimeleDouaElementeImpare(v, d);
}
void sol70() {
	//Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât 1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural(k≤9). Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k şi au ultima cifră egală cu k.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	int nr = nrElementeMultipluLuiKSiAuUcEgalaCuK(v, d, k);
	cout << nr << endl;
}
void sol71() {
	//Scrieţi definiţia completă a subprogramului interval care are doi parametri a şi n, prin care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât 1000 şi respectiv numărul efectiv de elemente din tabloul unidimensional. Subprogramul returnează numărul de elemente din tabloul unidimensional care aparţin intervalului închis determinat de primul şi respectiv ultimul element al tabloulu
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrElementeCareApartinIntervalDeterminatDePrimulSiUltimulElement(v, d);
}
void sol72() {
	//În fişierul numere.txt pe prima linie este memorat un număr natural n (n≤10000), iar pe linia următoare un şir de n numere naturale distincte două câte două, separate prin câte un spaţiu, cu maximum 4 cifre fiecare.Se cere afişarea pe ecran a poziţiei pe care s - ar găsi primul element din şirul aflat pe linia a doua a fişierului, în cazul în care şirul ar fi ordonat crescător.Numerotarea poziţiilor elementelor în cadrul şirului este de la 1 la n.Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	int poz = pozitiaPrimuluiElementDupaOrdonareaCrescatoareAVectorului(v, d);
	cout << poz << endl;
}
void sol73() {
	//Scrieţi definiţia completă a subprogramului count care are doi parametri, a şi n, prin care primeşte un tablou unidimensional cu maximum 100 de numere reale şi respectiv numărul efectiv de elemente din tablou.Subprogramul returnează numărul de elemente din tabloul a care sunt mai mari sau cel puţin egale cu media aritmetică a tuturor elementelor din tablou.
	double v[100], d = 0;
	citireVectorDouble(v, d);
	int nr = nrElementeCaMediaAritmeticaAElementelorVectorului(v, d);
	cout << nr << endl;
}
void sol74() {
	//În fişierul numere.txt este memorat un şir de maximum 10000 numere naturale, distincte două câte două, cu maximum 4 cifre fiecare, separate prin câte un spaţiu.Pentru un număr k citit de la tastatură, se cere afişarea pe ecran a poziţiei pe care se va găsi acesta în şirul de numere din fişier, dacă şirul ar fi ordonat descrescător, sau mesajul nu există, dacă numărul k nu se află printre numerele din fişier.Alegeţi un algoritm eficient de rezolvare din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	pozitiaLuiKInVectorOrdonatDescrescator(v, d, k);
}
void sol75() {
	//În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre, iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.În fişierul nr2.txt este memorată pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.
	//Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict crescătoare, a tuturor numerelor aflate pe a doua linie în cel puţin unul dintre cele două fişiere.În cazul în care un număr apare în ambele fişiere, el va fi afişat o singură dată. Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareElementeCareApartinMacarUnuiVector(v1, d1, v2, d2);
}
void sol76() {
	//În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre, iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.În fişierul nr2.txt este memorată pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.
	//Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict crescătoare, a tuturor numerelor aflate pe a doua linie atât în primul cât şi în al doilea fişier. Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareNrCareExsistaInAmbiiVectori(v1, d1, v2, d2);
}
void sol77() {
	//Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n, (3≤n≤100), apoi cele n elemente distincte ale unui tablou unidimensional x. Fiecare dintre aceste elemente este un număr natural având cel mult patru cifre.Folosind apeluri utile ale subprogramului p, programul calculează şi afişează pe ecran media aritmetică a elementelor care ar rămâne în tabloul x dacă s - ar elimina valoarea minimă şi valoarea maximă din tablou. Valoarea afişată va avea cel mult 3 cifre după virgulă.
	int v[100], d = 0;
	citireVector(v, d);
	double ma = mediaAritmeticaDupaElminareMaxMin(v, d);
	cout << ma << endl;
}
void sol78() {
	//Scrieţi un program C/C++, eficient din punct de vedere al timpului de executare, care afişează pe ecran cel mai mic număr întreg din intervalul închis[a, b] care se găseşte în şirul dat.Dacă nu există un astfel de număr, programul afişează textul NU.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = nrMinimDinIntervalCareApartineVector(a, b, v, d);
	cout << nr << endl;
}
void sol79() {
	//Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 reprezintă cifra unităţilor numărului, a1 cifra zecilor etc. Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din cifrele pare reţinute în tabloul a sau valoarea - 1 dacă în tablou nu există nicio cifră pară. Scrieţi definiţia completă a subprogramului f.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = numarFormatDinCifrelePareDinVector(v, d);
	cout << nr << endl;
}
void sol80() {
	//Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale nenule n şi k (n≤100, k≤100) şi afişează pe ecran, separaţi prin câte un spaţiu, în ordine descrescătoare, cei mai mici k multipli naturali nenuli ai numărului n.
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareDescrescaoarePrimiiKMultipliiLuiN(n,k);
}
void sol81() {
	// Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe următoarea linie n numere întregi din intervalul[-1000; 1000], separate prin câte un spaţiu. Scrieţi un program C / C++ care citeşte din fişierul NUMERE.IN numărul natural n, construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu aceeaşi  valoare.Elementele tabloului obţinut se afişează pe ecran, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	stergereElementeDuplicate(v, d);
	afisareVector(v, d);
}
void sol82() {
	//Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul, cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN.În cazul în care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul determinat, iar în caz contrar mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	int max = celMaiMareNumarAproapePrim(v, d);
}
void sol83() {
	//Scrieţi definiţia completă a subprogramului multipli, cu trei parametri a,b,c (a≤b), numere naturale din intervalul[1, 10000] ce returnează numărul numărul multiplilor lui c din intervalul[a; b].
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	cout << "Introduceti c: " << endl;
	int c;
	cin >> c;
	afisareMultipliiLuiCDinASiB(a, b, c);
}
void sol84() {
	//Scrieţi definiţia completă a subprogramului suma care primeşte ca parametru un tablou unidimensional x cu cel mult 100 de elemente, numere reale, un număr natural n ce reprezintă numărul efectiv de elemente ale tabloului x(n≤100), şi un număr natural m(n≥m). Subprogramul returnează suma obţinută din cele mai mici m elemente ale tabloului x.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	int s = sumaCelorMaiMiciMELemente(v, d, m);
	cout << s << endl;
}
void sol85() {
	//Scrieţi definiţia completă a subprogramului nr_prim care are ca parametru un număr natural x şi returnează cel mai mic număr prim, strict mai mare decât x.
	cout << "Introduceti x: " << endl;
	int x;
	cin >> x;
	int nr = primulNumarStrictMaiMareCaX(x);
	cout << nr << endl;
}
void sol86() {
	//În fişierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100), numerele de pe aceeaşi linie fiind despărţite prin câte un spaţiu, fiecare număr având cel mult 9 cifre.Să se determine cele mai mici două valori având exact două cifre fiecare, memorate în fişier şi să se afişeze pe ecran aceste valori, despărţite printr - un spaţiu.Dacă în fişier nu se află două astfel de valori, pe ecran se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMiciDouaElementeCu2Cifre(v, d);
}
void sol87() {
	//Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100 de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr natural ce reprezintă numărul efectiv de elemente ale tabloului x(n≤100).Scrieţi definiţia completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna 0.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementeDivizibileCu3(v, d);
}
void sol88() {
	//Fişierul text numere.in conţine pe prima linie un număr natural n (0<n<1000), iar pe a doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu. Scrieţi un program C / C++ care citeşte toate numerele din fişier şi afişează pe ecran, separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se termină cu aceeaşi cifră.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuPrimaSiUltimaCifraEgala(v, d);
}
void sol89() {
	//)Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi n numere naturale(cu cel mult 4 cifre fiecare).Programul determină, folosind apeluri utile ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareSumaDivizorilorElementelor(v, d);
}
void sol90() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C / C++ care citeşte numerele din fişier şi afişează pe ecran, folosind apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu ultimele cifre pare ale fiecărui element, dacă acestea există.Alegeţi o metodă de rezolvare eficientă ca timp de executare.Dacă toate numerele de pe a doua linie a fişierului au numai cifre impare, programul va afişa mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(v,d);
}
void sol91() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a doua linie a fişierului se află un şir format din n numere naturale nenule, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre.Scrieţi un program C / C++ care citeşte numerele din fişier şi care afişează pe ecran, folosind apeluri utile ale subprogramului nrdiv, prima şi ultima valoare din şirul celor n numere citite, care au un număr par de divizori primi.Numerele afişate vor fi separate printr - un spaţ
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuNumarParDeDivizoriPrimi(v, d);
}
void sol92() {
	//Scrieţi în limbajul C/C++ definiţia completă a subprogramul Del care are doi parametri: x, un număr întreg de cel mult 9 cifre, şi y, un număr natural nenul de o cifră.Subprogramul determină eliminarea tuturor cifrelor lui x mai mari strict decât y şi furnizează numărul obţinut tot prin intermediul parametrului x.Dacă toate cifrele lui x sunt mai mari strict decât y, atunci x va primi valoarea - 1.
	cout << "Introduceti x: " << endl;
	int x;
	cin >> x;
	cout << "Introduceti y: " << endl;
	int y;
	cin >> y;
	int nr = stergereCifreDinXStrictMaiMariCaY(x,y);
	cout << nr << endl;
}
void sol93() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n≤1000, iar pe a doua linie a fişierului se află un şir de n numere naturale nenule, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre.Scrieţi un program C / C++ care afişează pe ecran, în ordine crescătoare, numerele aflate pe a doua linie a fişierului.Numerele vor fi afişate pe o singură linie, iar între două numere se va lăsa un spaţiu.Se vor folosi apeluri utile ale subprogramului inter.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoare(v, d);
}
void sol95() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre.Scrieţi un program C / C++ care citeşte valorile din fişier şi care afişează pe ecran mesajul DA dacă toate elementele pare din şir sunt în ordine crescătoare şi mesajul NU în caz contrar
	int v[100], d = 0;
	citireVector(v, d);
	bool aff = esteOrdonatCrescator(v, d);
	aff == true
		?
		cout << "Este crescator" << endl
		:
		cout << "Nu este crescator" << endl;
}
void sol96() {
	//Considerăm un număr natural nenul n>99 cu cel mult 9 cifre. Din n se obţine un şir de valori prin eliminarea succesivă a ultimei cifre, apoi a ultimelor două cifre, apoi a ultimelor trei cifre etc., până ce se obţine un număr de două cifre, ca în exemplu.Să se realizeze un program C / C++ care citeşte de la tastatură numărul n şi care, folosind apeluri utile ale subprogramul pr, afişează pe ecran, separate prin câte un spaţiu, doar valorile prime din şirul numerelor obţinute din n, prin procedeul descris mai sus.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	citireVector(v, d);
	descompunereNumarInVector(n, v, d);
	afisareVaElementePrime(v, d);
}
void sol97() {
	// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n<10000) şi care, folosind apeluri ale subprogramului sdiv verifică dacă suma divizorilor lui n este un număr prim.În caz afirmativ, programul va afişa pe ecran mesajul Da şi în caz contrar va afişa mesajul NU.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int s = sumaDivizori(n);
	numarPrim(s) == true
		?
		cout << "Suma divizorilor este numar prim" << endl
		:
		cout << "Suma divizorilor nu este numar prim" << endl;
}
void sol98() {
	//Scrieţi un subprogram DIST, cu doi parametri, care primeşte prin intermediul parametrului a un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre fiecare, şi prin intermediul parametrului n un număr natural nenul, n < 100, ce reprezintă numărul de elemente din tablou.Subprogramul returnează valoarea 1 dacă toate elementele tabloului a sunt distincte/
	int v[100], d = 0;
	citireVector(v, d);
	areToateElementeleDistincte(v, d) == true
		?
		cout << "Vectorul are toate elementele distincte." << endl
		:
		cout << "Vectorul nu are toate elementele distincte." << endl;
}
void sol99() {
	//Scrieţi un program C/C++ care determină în mod eficient din punct de vedere al timpului de executare, cea mai mare cifră dintre cele situate pe a doua linie a fişierului, precum şi numărul de apariţii ale acesteia.Cele două numere vor fi afişate pe o singură linie a ecranului, separate printr - un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	int max = elementMax(v, d);
	int nr = numarAparitiiVector(v, d, max);
	cout << nr << endl;
}
void sol100() {
	//Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului de executare, numerele ce apar o singură dată în a doua linie a fişierului.Aceste numere vor fi afişate pe ecran în ordine crescătoare, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDoarOdata(v, d);
}
void sol101() {
	//Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin intermediul primului parametru, n, un număr natural nenul(1≤n≤100) şi prin intermediul celui de - al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1 la n, numere întregi de cel mult 4 cifre fiecare.Subprogramul returnează suma tuturor numerelor impare aflate pe poziţii pare din tablou.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementelorImpareDePePozitiiPare(v, d);
	cout << s << endl;
}
void sol102() {
	//Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua linie a fişierului numere.txt.Numărul determinat se va afişa pe ecran.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = numarMaximDinVector(v, d);
	cout << nr << endl;
}
void sol103() {
	//Scrieţi un program C/C++, eficient atât din punct de vedere al timpului de executare, care afişează pe ecran toate numerele situate pe a doua linie a fişierului, în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	bubbleSort(v, d);
	afisareVector(v, d);
}
void sol104() {
	//Fişierul bac.txt conţine pe prima linie un număr natural n (n≤100), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare.Scrieţi programul C / C++ care citeşte de la tastatură un număr natural k(k≤25), construieşte în memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareElementeCareAuCelPutinKDivizori(v, d, k);
}
void sol105() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural k (k<50) precum şi numerele din fişierul bac.txt şi afişează pe ecran, cu câte un spaţiu între ele, toate numerele de pe a doua linie a fişierului care sunt puteri ale lui k.Un număr natural x este putere a lui k dacă există un număr natural y astfel încât x = k^y. Dacă nu există un asemenea număr pe a doua linie a fişierului, se afişează pe ecran mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareNumereCareSuntPuteriALuiK(v, d, k);
}
void sol106() {
	//Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<25), apoi un şir de n numere naturale nenule cu cel mult 9 cifre fiecare şi care afişează pe ecran, separate prin câte un spaţiu, numerele din şir care au suma cifrelor maximă, folosind apeluri utile ale subprogramului cif
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCareAuSumaMaximaDeCifreDinVecor(v, d);
}
void sol107() {
	//Fişierul text bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare. Scrieţi un program C / C++ care determină şi scrie în fişierul bac.out toate numerele de pe a doua linie a fişierului care apar o singură dată pe această linie.Numerele determinate se vor afişa în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDoarOdata(v, d);
}
void sol108() {
	//Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale nenule a, b şi n, cu cel mult 3 cifre fiecare şi care afişează pe ecran toţi divizorii lui n din intervalul închis determinat de a şi b folosind apeluri utile ale subprogramului divxy.Intervalul închis determinat de a şi b este[a, b] dacă a < b sau[b, a] dacă b≤a.Numerele afişate sunt separate prin câte un spaţiu.Dacă nu există niciun astfel de număr se afişează mesajul NU EXISTA
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	aifsareDivizoriiLuiNDinIntevalulAB(a, b, n);
}
void sol109() {
	//Fişierul bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare. Scrieţi un program C / C++ care determină şi scrie în fişierul bac.out, toate numerele, citite de pe a doua linie a fişierului bac.in, care apar de cel puţin două ori.Numerele determinate se vor scrie în ordine crescătoare, pe aceeaşi linie, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDeCelPutin2Ori(v, d);
}
void sol110() {
	//Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a doua linie n numere naturale nenule, separate prin câte un spaţiu, fiecare număr având maximum 4 cifre.Scrieţi un program C / C++ care citeşte toate numerele din fişierul text date.in, construieşte în memorie un tablou unidimensional a, cu cele n elemente din fişier şi afişează pe ecran perechile(ai, aj), 1≤i < j≤n, cu proprietatea că elementele fiecăreia dintre aceste perechi au aceeaşi paritate.Fiecare pereche se va afişa pe câte o linie a ecranului, elementele perechii fiind separate prin câte un spaţiu.În cazul în care nu există nicio pereche, se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiCuAceeasiParitate(v, d);
}
void sol111() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n de minimum două şi maximum 8 cifre şi afişează pe ecran un număr palindrom cu valoarea cea mai apropiată de valoarea lui n citită.În cazul în care există două astfel de numere, se va afişa cel mai mic dintre ele.Se vor folosi apeluri utile ale subprogramului inv. Spunem că un număr natural x este palindrom dacă numărul format din cifrele lui x considerate de la stânga către dreapta este acelaşi cu numărul format din cifrele lui x considerate de la dreapta către stânga.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int pal = celMaiApropiatPalindrom(n);
	cout << pal << endl;
}
void sol112() {
	//Scrieţi un program C/C++ care citeşte numerele din fişier şi determină câte dintre comopnentele şirului citit pot fi scrise ca sumă a altor două numere din acelaşi şir. Rezultatul obţinut se va afişa pe ecran.În cazul în care nu există niciun astfel de element, se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrElementeCareSuntSumeDeAlteElementeAleVectorului(v, d);
	cout << nr << endl;
}
void sol113() {
	//Se consideră fişierul text date.in ce conţine pe prima linie un număr natural nenul n (n≤100), iar pe a doua linie n numere naturale, separate prin câte un spaţiu, fiecare număr având maximum 8 cifre nenule.Scrieţi un program C / C++ care citeşte toate numerele din fişierul text date.in şi afişează pe ecran, despărţite prin câte un spaţiu, numerele situate pe a doua linie a fişierului, formate numai din cifre distincte ordonate strict crescător, folosind apeluri utile ale subprogramului cifre.În cazul în care nu există niciun astfel de număr se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuCifreleOrdonateStrictCrescator(v, d);
}
void sol114() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100) şi 2 * n numere naturale de maximum 3 cifre; primele n reprezintă elementele tabloului unidimensional a, iar următoarele n elementele tabloului unidimensional b; fiecare tablou are elementele numerotate începând de la 1. Programul construieste în memorie şi afişează pe ecran, cu spaţii între ele, cele n elemente ale unui tablou unidimensional c, în care orice element ci(1≤i≤n) se obţine conform definiţiei următoare :
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareNumereLipiteDinCeiDoiVectori(v1, d1, v2, d2);
}
void sol115() {
	//Fişierul text numere.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte toate numerele din fişier şi scrie pe ecran toate numerele pare citite, ordonate crescător.Dacă fişierul numere.txt nu conţine niciun număr par, atunci se va afişa pe ecran mesajul nu exista.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementePare(v, d);
}
void sol116() {
	//Scrieţi un programul C/C++ în care se citesc de la tastatură două numere naturale nenule de cel mult 4 cifre, a şi b(a < b), şi, prin apeluri utile ale subprogramului numar, se verifică dacă intervalul închis[a, b] conţine cel puţin un număr prim.Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz contrar, mesajul NU.
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	bool aff = intervalulAreMacarUnNumarPrim(a, b);
	aff == true
		?
		cout << "Are macar un element prim" << endl
		:
		cout << "Nu are nici un element prim" << endl;
}
void sol117() {
	//Fişierul text BAC.TXT conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte toate numerele din fişierul BAC.TXT şi scrie pe ecran, în ordine descrescătoare, cele mai mici 3 numere citite.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMiciTreiElementeDinVector(v, d);
}
void sol118() {
	//Fişierul text BAC.TXT conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte toate numerele din fişierul BAC.TXT şi scrie pe ecran, în ordine descrescătoare, cele mai mici 3 numere citite.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	numarPrim(n) == true
		?
		cout << "Suma divizorilor este numar prim" << endl
		:
		cout << "Suma divizorilor nu este numar prim" << endl;
}
void sol119() {
	//Fişierul text bac.txt conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program C / C++ care citeşte numerele din fişier şi scrie pe ecran ultima cifră a produsului celor mai mari 3 numere citite.
	int v[100], d = 0;
	citireVector(v, d);
	int uc = ultimaCifraAProdusuluiCelorMaimareiTreiNumereDinVector(v, d);
	cout << uc << endl;
}
void sol120() {
	//Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un număr natural x(x > 1), şi, prin apeluri utile ale subprogramului divizor, verifică dacă x este număr prim.Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz contrar mesajul NU.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	numarPrim(n) == true
		?
		cout << "Suma divizorilor este numar prim" << endl
		:
		cout << "Suma divizorilor nu este numar prim" << endl;
}
void sol121() {
	//Fişierul text bac.txt conţine, pe prima sa linie, 100 de numere naturale de cel mult 4 cifre fiecare, numerele fiind ordonate crescător şi separate prin câte un spaţiu, iar pe a doua linie un singur număr natural x. Scrieţi un program C / C++ care citeşte toate numerele dinfişier şi verifică dacă x se află în şirul celor 100 de numere aflate pe prima linie a fişierului. În caz afirmativ, se va afişa pe ecran mesajul DA, altfel se va afişa mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti numarul: " << endl;
	int x;
	cin >> x;
	apartineVector(v,d,x) == true
		?
		cout << "Numarul " << x << " apartine vectorului" << endl
		:
		cout << "Numarul " << x << " nu apartine vectorului" << endl;
}
void sol122() {
	// Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un număr natural nenul de cel mult 4 cifre, n, şi prin apeluri utile ale subprogramului radical, verifică dacă n este pătrat perfect.Programul va afişa pe ecran în caz afirmativ mesajul DA, iar în caz contrar mesajul NU.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	patratPerfect(n) == true
		?
		cout << "Numarul " << n << " este patrat perfect" << endl
		:
		cout << "Numarul " << n << " nu este patrat perfect" << endl;
}
void sol123() {
	//Fişierul date.in conţine un şir de cel mult 10000 numere naturale (printre care cel puţin un număr par şi cel puţin un număr impar), cu cel mult 2 cifre fiecare, separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte numerele din fişierul date.in şi scrie în fişierul text date.out valorile distincte citite, separate prin câte un spaţiu, respectându - se regula : pe prima linie vor fi scrise numerele impare în ordine crescătoare, iar pe linia a doua numerele pare, în ordine descrescătoare.Alegeţi o metodă eficientă din punctul de vedere al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeleImpareInOrdineCrescSiCelePareInOrdineDesc(v, d);
}
void sol124() {
	//Subprogramul verif primeşte prin singurul său parametru, x, un număr natural nenul cu cel mult 9 cifre şi returnează valoarea 1 dacă numărul conţine cel puţin o secvenţă de 3 cifre impare alăturate şi 0 în caz contrar.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	areNumarulCelPutinUnSirDe3CifreImpare(n) == true
		?
		cout << "Numarul " << n << " are un sir ce cel putin 3 numere impare" << endl
		:
		cout << "Numarul " << n << " nu are un sir ce cel putin 3 numere impare" << endl;
}
void sol125() {
	//Fişierul text date.in conţine un şir de cel puţin două şi cel mult 10000 de numere naturale având maximum 6 cifre fiecare, numere separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte toate numerele din fişier şi afişează numărul de ”noduri“ ale şirului citit, folosind un algoritm eficient din punctul de vedere al memoriei utilizate
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrDeElementeCuSumaVecinilorMaiMAreCaElementulInSine(v, d);
	cout << nr << endl;
}
void sol126() {
	//Subprogramul diviz primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale nenule, fiecare dintre acestea având cel mult patru cifre.Elementele tabloului numerotate de la 1 la n.
	//Subprogramul returnează o valoare egală cu numărul de perechi(ai, aj), 1≤i < j≤n, în care ai este divizor al lui aj, sau aj este divizor al lui ai. Scrieţi definiţia completă a subprogramului diviz, în limbajul C / C++.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrPerechDeElementeCareSuntDivizoriCuEiInsasi(v, d);
	cout << nr << endl;
}
void sol127() {
	//Scrieţi un program C/C++ care citeşte numerele din fişierul date.txt şi determină cea mai lungă secvenţă ordonată strict descrescător, formată din valori citite consecutiv din fişier.Numerele din secvenţa găsită vor fi afişate pe ecran, pe o linie, separate prin câte un spaţiu.Dacă sunt mai multe secvenţe care respectă condiţia impusă, se va afişa doar prima dintre acestea.Alegeţi o metodă de rezolvare eficientă din punctul de vedere al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeaMaiLungaSecventaDeElementeOrdonateCrescator(v, d);
}
void sol128() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n format din exact 6 cifre şi verifică, utilizând apeluri ale subprogramului sfx, dacă acest număr are toate cifreleîn ordine strict descrescătoare. Programul va afişa mesajul Da în caz afirmativ şi mesajul Nu în caz contrar.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	areCifreleOrdonateStrictDescrescatoare(n) == true
		?
		cout << "Are cifrele ordonate in ordine strict descrescatoare" << endl
		:
		cout << "Nu are cifrele ordonate in ordine strict descrescatoare" << endl;
}
void sol129() {
	// Fişierul text date.in conţine un şir de cel mult 10000 de numere naturale având maximum 6 cifre fiecare, numere separate prin câte un spaţiu.Scrieţi un program C / C++ care citeşte toate numerele din fişier şi afişează numărul de ”poli“ ai şirului citit, folosind un algoritm eficient din punctul de vedere al memoriei utilizate.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrElementeCareSuntMaiMariCaVeciniiSai(v, d);
	cout << nr << endl;
}
void sol130() {
	//Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte prin intermediul parametrului n un număr natural nenul(1≤n≤10000), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre aceste valori având cel mult 9 cifre.Subprogramul returnează cel mai mare divizor comun al elementelor tabloului a.
	int v[100], d = 0;
	citireVector(v, d);
	int cmmdc = cmmmdcAleElementelorDinVector(v, d);
	cout << cmmdc << endl;
}
void sol131() {
	//Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte prin intermediul parametrului n un număr natural nenul(1≤n≤10000), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre aceste valori având cel mult 9 cifre.Subprogramul returnează numărul de numere prime din tablou.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrNumerePrime(v, d);
	cout << nr << endl;
}
void sol132() {
	//Scrieţi un program C/C++ care, utilizând o metodă eficientă din punct de vedere al timpului de executare şi al spaţiului de memorie, afişează pe ecran elementele distincte ale şirului aflat pe a doua linie a fişierului.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCareAparDoarOdata(v, d);
}
void sol133() {
	//Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat afişează pe ecran, separate printr - un spaţiu, lungimea maximă a unui platou, precum şi valoarea care formează platoul.În cazul în care sunt mai multe platouri de aceeaşi lungime se va afişa valoarea cea mai mare care formează unul dintre aceste platouri.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementulSiNumarulSauDeAparitiiCuNrMaxDeAparitiiInVector(v, d);
}
void sol134() {
	//Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din punct de vedere al timpului de executare, afişează pe ecran, separate prin câte un spaţiu, în ordine crescătoare, numerele pare de pe a doua linie a fişierului, urmate de cele impare în ordine descrescătoare.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementelePareInOrdineCrescSiCeleImpareInOrdineDesc(v, d);
}
void sol135() {
	//Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte prin parametrul n un număr natural nenul de cel mult 9 cifre şi furnizează prin parametrul x numărul obţinut prin alăturarea cifrelor pare ale lui n considerate de la dreapta către stânga.Dacă n nu conţine nicio cifră pară, x primeşte valoarea 0.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nrf = numarDinCifrelPareAleLuiN(n);
	cout << nrf << endl;
}
void sol136() {
	//Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat, afişează pe ecran, cu un spaţiu între ele, valoarea care apare de cele mai multe ori în fişier şi de câte ori apare ea.Dacă există mai multe valori care apar de un număr maxim de ori, se va afişa cea mai mică dintre ele.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementulSiNumarulSauDeAparitiiCuNrMaxDeAparitiiInVector(v, d);
}
void sol137() {
	//Scrieţi programul C/C++ care citeşte numerele din fişierul NUMERE.IN şi, folosind apeluri utile ale subprogramului Palindrom determină în mod eficient, din punct de vedere al memoriei utilizate şi al timpului de executare, care este cel mai mare număr palindrom citit şi de câte ori apare el în fişierul NUMERE.IN.Programul scrie în fişierul text NUMERE.OUT numărul astfel determinat precum şi numărul de apariţii ale acestuia, pe rânduri diferite.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementulPalindormSiNumarulSauDeAparitiiCuNrMaxDeAparitiiInVector(v, d);
}
void sol138() {
	//Scrieţi un program C/C++ care citeşte de la tastatură valoarea numărului natural k şi, prin apeluri utile ale funcţiei Ecuatie, determină valoarea elementului ce se află pe poziţia k în şirul s, folosind un algoritm eficient din punctul de vedere al spaţiului de memorie alocat şi al timpului de executare.Valoarea astfel determinată se va scrie în fişierul text sir.out
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti pozitia k: " << endl;
	int k;
	cin >> k;
	int num = elementulDePePozitiaK(v, d, k);
	cout << num << endl;
}
void sol139() {
	//Scrieţi definiţia completă a subprogramului Cifra, cu doi parametri, n şi x, care primeşte prin intermediul parametrului n un număr natural de cel mult nouă cifre şi furnizează prin parametrul x cea mai mare cifră a numărului transmis prin parametrul n.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int max = cifraMax(n);
	cout << max << endl;
}
void sol140() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, n < 1000000000, şi afişează pe ecran mesajul Da în cazul în care numărul citit este format doar din cifre aparţinând mulţimii{ 0,1,2,3,4 } şi afişează mesajul Nu în caz contrar
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cifreleApartinIntervalului04(n) == true
		?
		cout << "Toate cifrele apartin intervalului [0,4]" << endl
		:
		cout << "Nu toate cifrele apartin intervalului [0,4]" << endl;
}
void sol141() {
	//Scrieţi un program C/C++ care citeşte de pe prima linie a fişierului text NUMERE.IN un număr natural n(10 < n < 1000), iar de pe a doua linie n cifre despărţite prin câte un spaţiu, dintre care cel puţin una nenulă, şi afişează pe ecran cel mai mic “număr mare” format cu toate cele n cifre din fişier.Alegeţi o metodă eficientă din punct de vedere al utilizării memoriei.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = celMaiMicNumarDinVector(v, d);
	cout << nr << endl;
}
void sol142() {
	//Scrieţi definiţia completă a funcţiei UltimaCifra care primeşte prin cei doi parametri a şi b câte un număr natural(0 < a < 1000000, 0 < b < 1000000), calculează în mod eficient din punct de vedere al timpului de executare şi returnează ultima cifră a numărului a^b(a la puterea b).
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int pwr = pow(a, b);
	int uc = pwr % 10;
	cout << uc << endl;
}
void sol143() {
	//Scrieţi definiţia completă a unui subprogram s cu trei parametri care primeşte prin intermediul parametrului n un număr natural de maximum 9 cifre, prin intermediul parametrului c o cifră şi furnizează prin intermediul parametrului k numărul de cifre ale numărului n care aparţin intervalului[c - 1, c + 1].
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti c: " << endl;
	int c;
	cin >> c;
	int nr = nrCifreCareApartinIntervalPlusMinusC(n, c);
	cout << nr << endl;
}
void sol144() {
	//Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe următoarea linie n numere naturale din intervalul[1, 100] separate prin câte un spaţiu. Se cere să se citescă din fişier toate numerele şi să se afişeze pe ecran numărul sau numerele care apar de cele mai multe ori printre numerele citite de pe a doua linie a fişierului.Numerele afişate vor fi separate prin câte un spaţiu.Alegeţi un algoritm de rezolvare eficient atât din punctul de vedere al timpului de executare cât şi al gestionării memoriei. .
	int v[100], d = 0;
	citireVector(v, d);
	afisareNrCuNrMaxDeAparitii(v, d);
}
void sol145() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (3<n<10000) şi afişează pe ecran, despărţite prin câte un spaţiu, primele n numerele prime, folosind apeluri utile ale subprogramului prim.
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	afisarePrimeleNNumerePime(n);
}
void sol146() {
	//Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe următoarea linie n numere naturale din intervalul[1, 100].Se cere să se citescă din fişier toate numerele şi să se afişeze pe ecran, în ordine descrescătoare, toate numerele care apar pe a doua linie a fişierului şi numărul de apariţii ale fiecăruia.
	//Dacă un număr apare de mai multe ori, el va fi afişat o singură dată.Fiecare pereche „valoare - număr de apariţii” va fi afişată pe câte o linie a ecranului, numerele fiind separate printr - un spaţiu, ca în exemplu. Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	elementeCuNumarDeAparitii(v, d);
}
void sol147() {
	//Se citeşte de pe prima linie a fişierului numere.in un număr natural n (0<n<10000) şi, de pe a doua linie a fişierului, n numere naturale din intervalul[1, 100] şi se cere să se afişeze pe ecran, despărţite prin câte un spaţiu, numărul sau numerele întregi din intervalul [1, 100] care nu apar printre numerele citite.Dacă pe a doua linie a fişierului apar toate numerele din intervalul precizat, se va afişa mesajul NU LIPSESTE NICIUN NUMAR. Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	afisareNumereCareNuAparInVector(v, d);
}
void sol148() {
	//Fişierul text bac.in conţine cel mult 1000 de numere naturale cu cel mult patru cifre fiecare, despărţite prin câte un spaţiu.Scrieţi programul C / C++ care citeşte numerele din fişier şi afişează pe ecran, în ordine crescătoare, acele numere din fişier care au toate cifrele egale.Dacă fişierul nu conţine niciun astfel de număr, se va afişa pe ecran mesajul NU EXISTA. afisareCrescatoareNumereCuToateCifreleEgale
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareNumereCuToateCifreleEgale(v, d);
}
void sol149() {
	//Scrieţi definiţia completă a unui subprogram divi cu doi parametri, care primeşte prin intermediul parametrului n un număr natural nenul cu cel mult 6 cifre şi returnează prin intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul în care n nu are niciun divizor propriu.De exemplu, pentru n = 15, d va avea valoarea 3.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int min = celMaiMicDivizorPropiu(n);
	cout << min << endl;
}
void sol150() {
	//Scrieţi în C/C++ definiţia completă a subprogramului medie care are doi parametri:
	// -n, prin care primeşte un număr natural(1≤n≤100);
	// -v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale, fiecare element având cel mult patru cifre. Subprogramul returnează media aritmetică a elementelor din tablou.
	int v[100], d = 0;
	citireVector(v, d);
	double ma = mediaArtitmeticaElementeVectorInt(v, d);
	cout << ma << endl;
}