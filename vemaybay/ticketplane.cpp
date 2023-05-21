#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
void khoitao(char A[][6], int m, int n) {
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 6; j++) {
			A[i][j] = '*';
		}
	}
}
void xuat(char A[][6], int m, int n) {
	cout << setw(12) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
	for (int i = 0; i < 13; i++) {
		cout << "Hang" << setw(4) << i + 1;
		for (int j = 0; j < 6; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
}
void xuat1(char A[][6], int m, int n) {
	cout << setw(12) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Hang" << setw(4) << i + 1;
		for (int j = 0; j < 6; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
}
void xuat2(char A[][6], int m, int n) {
	cout << setw(12) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
	for (int i = 2; i < 7; i++) {
		cout << "Hang" << setw(4) << i + 1;
		for (int j = 0; j < 6; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
}
void xuat3(char A[][6], int m, int n) {
	cout << setw(12) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
	for (int i = 7; i < 13; i++) {
		cout << "Hang" << setw(4) << i + 1;
		for (int j = 0; j < 6; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
}
void datve(char A[][6], int m, int n, int& hang, char& ghe) {
	do {
		cout << "Chon ve hang: ";
		cin >> hang;
		cout << "Chon ve ghe: ";
		cin >> ghe;
		if (ghe > 'Z') {
			ghe = ghe - 32;
		}
		if (hang < 1 || hang>13 || ghe < 'A' || ghe >'F') {
			cout << "Nhap sai. Nhap lai \n";
		}
	} while (hang < 1 || hang>13 || ghe < 'A' || ghe >'F');
	hang = hang - 1;
	ghe = (int)ghe - 65;
}
void ktve(char A[][6], int m, int n, int hang, char ghe) {
	if (A[hang][ghe] == '*') {
		cout << "\n Ban dat ve thanh cong";
		A[hang][ghe] = 'X';
	}
	else
		cout << "\n Ban dat ve khong thanh cong";
}

void menu() {
	cout << "\n1. Chon hang thuong gia";
	cout << "\n2. Chon hang pho thong";
	cout << "\n3. Chon hang tiet kiem";
	cout << "\nChon 1,2 hoac 3: ";
}

int main() {
	char A[13][6];
	int hang, chon; char ghe, TT;
	khoitao(A, 13, 6);
	do {
		system("cls");
		cout << "Chuong trinh dat ve may bay\n";
		xuat(A, 13, 6);
		menu();
		cin >> chon;
		switch (chon) {
		case 1:
			cout << "\nBan dang chon ve hang thuong gia: \n";
			xuat1(A, 13, 6);
			datve(A, 13, 6, hang, ghe);
			if (hang >= 0 && hang < 2) {
				ktve(A, 13, 6, hang, ghe);
			}
			else cout << "Ban chon sai hang! ";
			break;
		case 2:
			cout << "\nBan dang chon ve hang pho thong: \n";
			xuat2(A, 13, 6);
			datve(A, 13, 6, hang, ghe);
			if (hang >= 2 && hang < 7) {
				ktve(A, 13, 6, hang, ghe);
			}
			else cout << "Ban chon sai hang! ";
			break;
		case 3:
			cout << "\nBan dang chon ve hang pho thong: \n";
			xuat3(A, 13, 6);
			datve(A, 13, 6, hang, ghe);
			if (hang >= 7 && hang < 13) {
				ktve(A, 13, 6, hang, ghe);
			}
			else cout << "Ban chon sai hang! ";
			break;
		default:
			cout << "\nBan chon sai!, Chon 1,2 hoac 3";
		}
		cout << "\nBan co tiep tuc khong> (Y/N): ";
		cin >> TT;

	} while (TT == 'Y' || TT == 'y');
	system("cls");
	xuat(A, 13, 6);
	system("pause");
	return 0;
}
