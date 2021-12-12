#include <iostream>
using namespace std;

int main(){
	
	/*
	  Nama  : Siti Hafijah Zahra Siregar
	  NPM   : 2157051005
	  Kelas : B 
	*/
	
	int N, input;
	float jumlah = 0;

	cin >> N;
    //kalau pake while
	// int i = 1;
	// while(i <= N) {
	// 	cin >> input;
	// 	jumlah = jumlah + input; //jumlah += input;
	// 	i++;
	// }
	
    //kalau pake do while
	// int i = 1;
	// do{
	// 	cin >> input;
	// 	jumlah = jumlah + input; //jumlah += input;
	// 	i++;
	// }while(i <= N);

	for(int i = 1; i <= N; i++){
		cin >> input;
		jumlah = jumlah + input; //jumlah += input;
	}

	cout << "Jumlah = " << jumlah << endl;
	cout << "Rata-rata = " << jumlah/N;


	return 0;
}
