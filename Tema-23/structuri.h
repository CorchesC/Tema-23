#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Jucator {
	int nrTricou;
	string marimeTricou;
};
struct Echipe {
	int nrJucatori;
	Jucator juc[4];
};