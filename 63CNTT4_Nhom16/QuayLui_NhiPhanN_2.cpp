//Nhi phan bat dau tu 11
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int n, dem, b[20];
ifstream inp;
ofstream out ("btk_bin.out");

void Khoitao(){
	inp.open("btk_bin.inp");
	inp >> n;
	dem = 0;
}

void In(){
	dem++;
	out << setw(3) << dem << ". ";
	out << "11";
	for (int i = 1; i <= n - 2; i++)
		out << b[i];
	out << endl;
}

void Sinh(int k){
	for (int i = 0; i <= 1; i++){
		b[k] = i;
		if (k == n - 2) In();
		else Sinh(k + 1);
	}
}

int main() {
	Khoitao();
	Sinh(1);
	return 0;
}

