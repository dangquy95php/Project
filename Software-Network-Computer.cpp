#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
#include <iomanip>
void informationtacgialan2(){
	char information[40] = { "\t\t\t""|""     ""I""n""f""o""r""m""t""i""o""n"" ""o""f"" ""P""r""o""g""r""a""m""m""e""r"" ""    ""|" };
	char name[40] = { "\t\t\t""|"" ""N""a""m""e"":""|""        ""D""A""N""G"" "" Q""U""Y""          ""|" };
	char lop[40] = { "\t\t\t""|"" ""C""l""a""s""s"":""|""        ""1""3""s""e""1""1""1""           ""|" };
	char job[40] = { "\t\t\t""|"" ""S""t""u""d""y"" ""i""n"":""|"" ""L""a""c"" ""H""o""n""g"" ""U""n""i""v""e""r""S""i""t""y""   ""|" };
	char email[40] = { "\t\t\t""|"" ""E""m""a""i""l"":""|"" ""d""a""n""g""""q""u""y""1""3""s""e""1""1""1""@""y""a""h""o""o"".""c""o""m"" ""|" };
	cout << " " << "\n\t\t\t+----------------------------------+\n";
	for (char i = 0; i < 40; i++)
		cout << information[i];
	cout << " " << "\n\t\t\t+------+---------------------------+\n";
	for (char i = 0; i < 40; i++)
		cout << name[i];
	cout << " " << "\n\t\t\t+------++--------------------------+\n";
	for (char i = 0; i < 40; i++)
		cout << lop[i];
	cout << " " << "\n\t\t\t+-------+--+-----------------------+\n";
	for (char i = 0; i < 40; i++)
		cout << job[i];
	cout << " " << "\n\t\t\t+-------+--+-----------------------+\n";
	for (char i = 0; i < 40; i++)
		cout << email[i];
	cout << " " << "\n\t\t\t+-------+--------------------------+";
}
void informationtacgia(){
	char information[40] = { "\t\t\t""|""     ""I""n""f""o""r""m""t""i""o""n"" ""o""f"" ""P""r""o""g""r""a""m""m""e""r"" ""    ""|" };
	char name[40] = { "\t\t\t""|"" ""N""a""m""e"":""|""        ""D""A""N""G"" "" Q""U""Y""          ""|" };
	char lop[40] = { "\t\t\t""|"" ""C""l""a""s""s"":""|""        ""1""3""s""e""1""1""1""           ""|" };
	char job[40] = { "\t\t\t""|"" ""S""t""u""d""y"" ""i""n"":""|"" ""L""a""c"" ""H""o""n""g"" ""U""n""i""v""e""r""S""i""t""y""   ""|" };
	char email[40] = { "\t\t\t""|"" ""E""m""a""i""l"":""|"" ""d""a""n""g""""q""u""y""1""3""s""e""1""1""1""@""y""a""h""o""o"".""c""o""m"" ""|" };
	cout << " " << "\n\t\t\t+----------------------------------+\n";
	for (char i = 0; i < 40; i++){
		system("COLOR 0a");
		cout << information[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------+---------------------------+\n";
	for (char i = 0; i < 40; i++){
		system("COLOR 01");
		cout << name[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------++--------------------------+\n";
	for (char i = 0; i < 40; i++){
		system("COLOR 02");
		cout << lop[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+-------+--+-----------------------+\n";
	for (char i = 0; i < 40; i++){
		system("COLOR 0c");
		cout << job[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+-------+--+-----------------------+\n";
	for (char i = 0; i < 40; i++){
		system("COLOR 03");
		cout << email[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+-------+--------------------------+\n";
}
void infomationchuongtrinh(){
	char namechuongtrinh[45] = {"\t\t\t""|"" ""G""i""o""i"" ""t""h""i""e""u"" ""p""h""a""n"" ""m""e""m"" ""t""i""n""h"" ""d""i""a"" ""c""h""i"" ""I""P""V""4"" ""|"};
	char phongcach[45] = {"\t\t\t""|"" ""P""h""o""n""g"" ""c""a""c""h"":""|""         ""C""++""              ""|"};
	char phienban[45] = {"\t\t\t""|"" ""P""h""i""e""n"" ""b""a""n"":"" ""|""         ""1.0.0""            ""|"};
	char yearxuathanh[45] = {"\t\t\t""|"" ""N""a""m"" ""SX"":""    ""|""         ""11""/""6""/2015""        ""|"};
	cout << " "<<"\n\t\t\t+---------------------------------------+\n";
	for (int i = 0; i < 45; i++){
		cout << namechuongtrinh[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------------+--------------------------+\n";
	for (int i = 0; i < 45; i++){
		cout << phongcach[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------------+--------------------------+\n";
	for (int i = 0; i < 45; i++){
		cout << phienban[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------------+--------------------------+\n";
	for (int i = 0; i < 45; i++){
		cout << yearxuathanh[i];
		Sleep(50);
	}
	cout << " " << "\n\t\t\t+------------+--------------------------+\n";
	Sleep(1000);
	system("cls");
	informationtacgialan2();
}
void matkhau(){
	char *user, n = 50;
	user = new char[n];
	char user1[20] = "DANG QUY";
	string pass = "";
	char ch;
	char pass1[50] = "ai biet";
	int count = 0;
	cout << "\n\n";
	system("COLOR 02");
	cout << "\t\t+------------------------------------------------+\n";
	cout << "\t\t|    May I! Ban hay Input information de Login   |\n";
	cout << "\t\t+------------------------------------------------+\n";
	do{
		cout << " " << "\t\t\t  +----------+--------------+\n";
		cout << " " << "\t\t\t  |   User:  |   ";
		cin.getline(user, 15); cout << "\b";
		cout << " " << "\t\t\t  +----------+--------------+\n";
		cout << " " << "\t\t\t  | Password:|   ";
		ch = _getch();
		while (ch != 13){
			pass.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << "\b";
		cout << " " << "\n\t\t\t  +----------+--------------+\n";
		if (strcmp(user, user1) != 0 || (pass != pass1)){
			cout << " \t\t\t  |Input False::Input Again:|";
			cout << " " << "\n\t\t\t  +----------+--------------+\n";
			count++;
			pass = "";
		}
		if (count == 3)
			break;
	} while (strcmp(user, user1) != 0 || (pass != pass1));
	if (count != 3){
		system("cls");
		cout << " " << "\n\t\t+---------------------------------------------+";
		cout << " " << "\n\t\t| Xin Chuc Mung! Ban Da Dang Nhap Thanh Cong: |";
		cout << " " << "\n\t\t+---------------------------------------------+";
		cout << " " << "\n\t\t\t  +----------+--------------+\n";
		cout << " " << "\t\t\t  |   User:  |   DANG QUY   |";
		cout << " " << "\n\t\t\t  +----------+--------------+\n";
		cout << " " << "\t\t\t  | Password:|   *******    |";
		cout << " " << "\n\t\t\t  +----------+--------------+\n";
		Sleep(1000);
	}
	else
	{
		cout << " " << "  +------------------------------------------------------------------------+";
		cout << "\n   | Neu Biet Password thi Input! Chu khong biet dung co Input...Vo Ich Lam |\n";
		cout << " " << "  +----------------------------+---------------+---------------------------+\n";
		cout << "\t\t\t\t| SEE YOU AGAIN |";
		cout << " " << "\n\t\t\t\t+---------------+\n";
		_getch();
		exit(1);
	}
	delete[]user;
}
void doinhiphan(int b[], int inputnember){
	int songuyen = inputnember, j = 8;
	if (songuyen == 0)
	for (int i = 1; i < 9; i++)
		b[i] = 0;
	while (songuyen != 0){
		b[j] = songuyen % 2;
		songuyen = songuyen / 2;
		if (songuyen == 0){
			for (int i = j - 1; i >= 1; i--)
				b[i] = 0;
		}
		j--;
	}
}
void nhapoctex(int &Octex1, int &Octex2, int &Octex3, int &Octex4, int &Pefix){
	cout << "Nhap IP adress: ";
	do{
		cout << "\nInput Octex 1: "; cin >> Octex1;
	} while (Octex1 < 0 || Octex1 > 255);
	do{
		cout << "Input Octex 2: "; cin >> Octex2;
	} while (Octex2 < 0 || Octex2 > 255);
	do{
		cout << "Input Octex 3: "; cin >> Octex3;
	} while (Octex3 < 0 || Octex3 > 255);
	do{
		cout << "Input Octex 4: "; cin >> Octex4;
	} while (Octex4 < 0 || Octex4 > 255);
	do{
		cout << "Input PEFIX: "; cin >> Pefix;
	} while (Pefix < 0 || Pefix> 32);
}
void doioctex(int a1[], int b[], int Octex1, int Octex2, int Octex3, int Octex4){
	doinhiphan(b, Octex1);
	for (int i = 8; i >= 1; i--)
		a1[i] = b[i];
	doinhiphan(b, Octex2);
	for (int i = 16; i >= 9; i--)
		a1[i] = b[i - 8];
	doinhiphan(b, Octex3);
	for (int i = 24; i >= 17; i--)
		a1[i] = b[i - 16];
	doinhiphan(b, Octex4);
	for (int i = 32; i >= 25; i--)
		a1[i] = b[i - 24];
}
void gangiatripefix(int sobyte[], int Pefix, int tongpefix1, int tongpefix2, int tongpefix3, int tongpefix4, int mangmd[], int octex1, int octex2, int octex3, int octex4){
	cout << endl;
	for (int i = 1; i <= Pefix; i++)
	if (i <= Pefix)
		sobyte[i] = 1;
	for (int j = Pefix + 1; j <= 32; j++){
		sobyte[j] = 0;
	}
	for (int i = 1; i <= 32; i++){
		if (i <= 8 && sobyte[i] == 1)
			tongpefix1 += mangmd[i];
		else if (i >= 9 && i <= 16 && sobyte[i] == 1)
			tongpefix2 += mangmd[i - 8];
		else if (i >= 17 && i <= 24 && sobyte[i] == 1)
			tongpefix3 += mangmd[i - 16];
		else if (i >= 25 && sobyte[i] == 1)
			tongpefix4 += mangmd[i - 24];
	}
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
	for (int i = 1; i <= 32; i++){
		if (sobyte[i] == 1 && i <= 8)
			dem1++;
		else if (i >= 9 && i <= 16 && sobyte[i] == 1)
			dem2++;
		else if (i >= 17 && i <= 24 && sobyte[i] == 1)
			dem3++;
		else if (i >= 25 && sobyte[i] == 1)
			dem4++;
	}system("cls");
	cout << "   " << "\n\t      +---------------+---------------+-----------------+";
	cout << "   " << "\n\t      |  IP ADDRESS   |  [ PEFIX= " << setw(2) << Pefix << "] | " << setw(3) << tongpefix1 << "." << setw(3) << tongpefix2 << "." << setw(3) << tongpefix3 << "." << setw(3) << tongpefix4 << " |";
	cout << "   " << "\n\t      |---------------|---------------|-----------------|";
	cout << "   " << "\n\t      |" << setw(3) << octex1 << "." << setw(3) << octex2 << "." << setw(3) << octex3 << "." << setw(3) << octex4 << "|  [N, n][H, h] | ";
	if (dem1 == 0){ cout << "H"; cout << '.'; cout << 'H'; cout << '.'; cout << 'H'; cout << '.'; cout << 'H'; }
	if (dem1 == 8)cout << 'N';
	if (dem2 == 8){ cout << "."; cout << 'N'; }
	if (dem3 == 8){ cout << "."; cout << 'N'; }
	if (dem4 == 8){ cout << "."; cout << 'N'; }
	if (dem1 != 0 && dem1 != 8){
		for (int i = 1; i <= dem1; i++)
			cout << 'n';
		for (int j = dem1 + 1; j <= 8; j++)
			cout << 'h';
		cout << "."; cout << 'H'; cout << '.'; cout << 'H'; cout << '.'; cout << 'H';
	}
	else if (dem2 != 0 && dem2 != 8){
		cout << '.';
		for (int i = 1; i <= dem2; i++)
			cout << 'n';
		for (int j = dem2 + 1; j <= 8; j++)
			cout << 'h';
		cout << '.'; cout << 'H'; cout << '.'; cout << 'H';
	}
	else if (dem3 != 0 && dem3 != 8){
		cout << '.';
		for (int i = 1; i <= dem3; i++)
			cout << 'n';
		for (int j = dem3 + 1; j <= 8; j++)
			cout << 'h';
		cout << '.'; cout << 'H';
	}
	else if (dem4 != 0 && dem4 != 8){
		cout << '.';
		for (int i = 1; i <= dem4; i++)
			cout << 'n';
		for (int j = dem4 + 1; j <= 8; j++)
			cout << 'h';
	}cout << "   " << "\n\t      |---------------+---------------+-----------------|";
}
void and(int a1[], int network[], int sobyte[]){
	for (int i = 1; i <= 32; i++){
		if ((a1[i] != 0) && (sobyte[i]) != 0)//chuyen octex1,2,3,4 ve nhi phan va gan vai mang a1[]
			network[i] = 1;
		else network[i] = 0;
	}
}
void giatrinetwork(int network[], int mangmd[], int &sumoctex1, int &sumoctex2, int &sumoctex3, int &sumoctex4, int octex1, int octex4, int Pefix){
	for (int i = 1; i <= 32; i++){
		if (i <= 8 && network[i] == 1)
			sumoctex1 += mangmd[i];
		else if (i >= 9 && i <= 16 && network[i] == 1)
			sumoctex2 += mangmd[i - 8];
		else if (i >= 17 && i <= 24 && network[i] == 1)
			sumoctex3 += mangmd[i - 16];
		else if (i >= 25 && network[i] == 1)
			sumoctex4 += mangmd[i - 24];
	}
	cout << "   " << "\n\t      |                                                 |";
	Sleep(100);
	system("color 0a");
	Sleep(100);
	system("color 0b");
	Sleep(100);
	system("color 0c");
	Sleep(100);
	system("color 0d");
	Sleep(100);
	system("color 02");
	Sleep(100);
	system("color 05");
	Sleep(100);
	system("color 02");
	Sleep(100);
	cout << "" << "\n+-------------|---------------+---------------+---------------+-+-------------+";
	cout << "" << "\n| [IP/PEFIX]  |    NETWORK    |   BROADCAST   |   FIRST HOST  |   LAST HOST   |";
	cout << "" << "\n|-------------|---------------|---------------|---------------|---------------|";
	cout << endl << "|[" << setw(3) << octex1 << ".." << setw(3) << octex4 << "/" << setw(2) << Pefix << "]|" << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << sumoctex3 << "." << setw(3) << sumoctex4 << "|";
}
int tinhoctexBroadcast(int mangmd[], int Pefix, int tongbroadcast){
	for (int i = Pefix + 1;; i++){
		if (i >= Pefix + 1 && i % 8 != 1 && i <= 8 || Pefix == 0)
			tongbroadcast += mangmd[i];
		else if (i >= Pefix + 1 && i % 8 != 1 && i >= 9 && i <= 16)
			tongbroadcast += mangmd[i - 8];
		else if (i >= Pefix + 1 && i % 8 != 1 && i >= 17 && i <= 24)
			tongbroadcast += mangmd[i - 16];
		else if (i >= Pefix + 1 && i % 8 != 1 && i >= 25)
			tongbroadcast += mangmd[i - 24];
		if (i % 8 == 0 || i == 33 || Pefix == 8 || Pefix == 16 || Pefix == 24)
			break;
	}
	return tongbroadcast;
}
void timhostnetworkbroadcast(int &sumoctex1, int &sumoctex2, int &sumoctex3, int &sumoctex4, int &octex1, int &octex2, int &octex3, int &octex4, int pefix, int tongbroadcast){
	cout << "" << "\n|-------------+---------------+---------------+---------------+---------------|";
	cout << "" << "\n|                             |                                               |";
	cout << "" << "\n|";
	//so sanh tim ra broadcast
	int demhost = 0;
	if (octex1 == sumoctex1 + tongbroadcast){
		if (octex2 == sumoctex2){
			if (octex3 == sumoctex3){
				if ((octex4 == sumoctex4) && pefix != 32){
					cout << "          BROADCAST          |";
					demhost++;
				}
				else if ((octex4 == sumoctex4) && pefix == 32){
					cout << "          BROADCAST          |";
					demhost++;
				}
			}
		}
	}
	if (octex1 == sumoctex1){
		if (octex2 == sumoctex2 + tongbroadcast){
			if (octex3 == sumoctex3){
				if ((octex4 == sumoctex4) && pefix != 32){
					cout << "          BROADCAST          |";
					demhost++;
				}
			}
		}
	}
	if (octex1 == sumoctex1){
		if (octex2 == sumoctex2){
			if (octex3 == sumoctex3 + tongbroadcast){
				if ((octex4 == sumoctex4) && pefix != 32){
					cout << "           BROADCAST           |";
					demhost++;
				}
			}
		}
	}
	if (octex1 == sumoctex1){
		if (octex2 == sumoctex2){
			if (octex3 == sumoctex3){
				if ((octex4 == sumoctex4 + tongbroadcast) && pefix != 32){
					cout << "          BROADCAST          |";
					demhost++;
				}
			}
		}
	}
	//so sanh tim ra network
	if (octex1 == sumoctex1&&octex2 == sumoctex2&&octex3 == sumoctex3&&octex4 == sumoctex4&&pefix != 32){
		cout << "           NETWORK           |";
		demhost++;
	}
	if (demhost == 0)
		cout << "            HOST             |";
	//tim private...public...multicasl address
	if (octex1 >= 224 && octex1 <= 239)
		cout << "               MULTICAST ADDRESS               |";
	else if (octex1 == 10)
		cout << "                PRIVATE ADDRESS                |";
	else if (octex1 == 172 && octex2 >= 16 && octex2 <= 31)
		cout << "                PRIVATE ADDRESS                |";
	else if (octex1 == 192 && octex2 == 168)
		cout << "                PRIVATE ADDRESS                |";
	else cout << "                PUBLIC ADDRESS                 |";
	cout << "" << "\n|                             |                                               |";
	cout << "" << "\n+-----------------------------+-----------------------------------------------+\n";
}
void Broadcast(int mangmd[], int Pefix, int &sumoctex1, int &sumoctex2, int &sumoctex3, int &sumoctex4, int full, int tongbroadcast){
	if (Pefix <= 8)
		cout << setw(3) << tongbroadcast + sumoctex1 << "." << setw(3) << full << "." << setw(3) << full << "." << setw(3) << full << "|";
	else if (Pefix >= 9 && Pefix <= 16)
		cout << setw(3) << sumoctex1 << "." << setw(3) << tongbroadcast + sumoctex2 << "." << setw(3) << full << "." << setw(3) << full << "|";
	else if (Pefix >= 17 && Pefix <= 24)
		cout << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << tongbroadcast + sumoctex3 << "." << setw(3) << full << "|";
	else if (Pefix >= 25 && Pefix <= 32)
		cout << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << sumoctex3 << "." << setw(3) << tongbroadcast + sumoctex4 << "|";
	//first
	cout << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << sumoctex3 << "." << setw(3) << sumoctex4 + 1 << "|";

	//last
	if (Pefix <= 8)
		cout << setw(3) << tongbroadcast + sumoctex1 << "." << setw(3) << full << "." << setw(3) << full << "." << setw(3) << full - 1 << "|";
	else if (Pefix >= 9 && Pefix <= 16)
		cout << setw(3) << sumoctex1 << "." << setw(3) << tongbroadcast + sumoctex2 << "." << setw(3) << full << "." << setw(3) << full - 1 << "|";
	else if (Pefix >= 17 && Pefix <= 24)
		cout << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << tongbroadcast + sumoctex3 << "." << setw(3) << full - 1 << "|";
	else if (Pefix >= 25 && Pefix <= 32)
		cout << setw(3) << sumoctex1 << "." << setw(3) << sumoctex2 << "." << setw(3) << sumoctex3 << "." << setw(3) << tongbroadcast + sumoctex4 - 1 << "|";
}
void mycolor(){
	Sleep(100);
	system("color 0a");
	Sleep(100);
	system("color 0b");
	Sleep(100);
	system("color 0c");
	Sleep(100);
	system("color 0d");
	Sleep(100);
	system("color 02");
	Sleep(100);
	system("color 05");
	Sleep(100);
	system("color 02");
	Sleep(100);
}
void main(){
	int *chuaoctex = new int[33], *b = new int[33], *network = new int[33];
	int Octex1, Octex2, Octex3, Octex4, Pefix;
	int sumoctex1 = 0, sumoctex2 = 0, sumoctex3 = 0, sumoctex4 = 0;
	int *ganPefix = new int[33];
	int mangmd[] = { 1, 128, 64, 32, 16, 8, 4, 2, 1 };
	int tongpefix1 = 0, tongpefix2 = 0, tongpefix3 = 0, tongpefix4 = 0;
	int tongbroadcast = 0;
	int kq, full = 255;
	int chon = 1;
	informationtacgia();
	infomationchuongtrinh();
	matkhau();
	do{
		system("cls");
		nhapoctex(Octex1, Octex2, Octex3, Octex4, Pefix);
		doioctex(chuaoctex, b, Octex1, Octex2, Octex3, Octex4);
		gangiatripefix(ganPefix, Pefix, tongpefix1, tongpefix2, tongpefix3, tongpefix4, mangmd, Octex1, Octex2, Octex3, Octex4);
		and(chuaoctex, network, ganPefix);
		giatrinetwork(network, mangmd, sumoctex1, sumoctex2, sumoctex3, sumoctex4, Octex1, Octex4, Pefix);
		kq = tinhoctexBroadcast(mangmd, Pefix, tongbroadcast);
		Broadcast(mangmd, Pefix, sumoctex1, sumoctex2, sumoctex3, sumoctex4, full, kq);
		timhostnetworkbroadcast(sumoctex1, sumoctex2, sumoctex3, sumoctex4, Octex1, Octex2, Octex3, Octex4, Pefix, kq);
		mycolor();
		Octex1 = NULL; Octex2 = NULL; Octex3 = NULL; Octex4 = NULL; Pefix = NULL;
		sumoctex1 = NULL; sumoctex2 = NULL; sumoctex3 = NULL; sumoctex4 = NULL;
		tongpefix1 = NULL; tongpefix2 = NULL; tongpefix3 = NULL; tongpefix4 = NULL; tongbroadcast = NULL; kq = NULL;
		cout << "\nBan muon thuc hien tiep thi nhan phim:" << "[ENTER]";
		int t = _getch();
		if (t != 13) exit(0); 
	} while (chon == 1);
	system("pause");
}