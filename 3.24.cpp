#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;
string HH1 = "  ";
string MM1 = "  ";
int h = 0, m = 0;
bool judge(string HH, string MM) {
	if ((HH[0] != '0' && HH[0] != '1' && HH[0] != '2' && HH[0] != '5' && HH[0] != '8') || (HH[1] != '0' && HH[1] != '1' && HH[1] != '2' && HH[1] != '5' && HH[1] != '8') ||
		(MM[0] != '0' && MM[0] != '1' && MM[0] != '2' && MM[0] != '5' && MM[0] != '8') || (MM[1] != '0' && MM[1] != '1' && MM[1] != '2' && MM[1] != '5' && MM[1] != '8'))return false;
	else return true;
}
void mirror(string& HH, string& MM) {
	string temp = MM;
	if (HH[0] == '0')MM[1] = '0';
	else if (HH[0] == '1')MM[1] = '1';
	else if (HH[0] == '2')MM[1] = '5';
	else if (HH[0] == '5')MM[1] = '2';
	else if (HH[0] == '8')MM[1] = '8';
	if (HH[1] == '0')MM[0] = '0';
	else if (HH[1] == '1')MM[0] = '1';
	else if (HH[1] == '2')MM[0] = '5';
	else if (HH[1] == '5')MM[0] = '2';
	else if (HH[1] == '8')MM[0] = '8';
	if (temp[0] == '0')HH[1] = '0';
	else if (temp[0] == '1')HH[1] = '1';
	else if (temp[0] == '2')HH[1] = '5';
	else if (temp[0] == '5')HH[1] = '2';
	else if (temp[0] == '8')HH[1] = '8';
	if (temp[1] == '0')HH[0] = '0';
	else if (temp[1] == '1')HH[0] = '1';
	else if (temp[1] == '2')HH[0] = '5';
	else if (temp[1] == '5')HH[0] = '2';
	else if (temp[1] == '8')HH[0] = '8';
 
}
void tita(string& HH, string& MM) {
	int HHnum = stoi(HH);
	int MMnum = stoi(MM);
	if (MMnum + 1 == m) {
		MM = "00";
		if (HHnum + 1 == h)HH = "00";
		else {
			HHnum++;
			if(HHnum<10)HH="0"+ to_string(HHnum);
			else HH = to_string(HHnum);
		}
	}
	else {
		MMnum++;
		if(MMnum<10)MM="0"+ to_string(MMnum);
		else MM = to_string(MMnum);
	}
}
int main() {
	int t = 1;
	cin >> t;
	while (t--) {
 
		scanf("%d%d", &h, &m);
		string input;
		cin >> input;
		int i;
		for (i = 0; i < input.length(); i++) {
			if (input[i] == ':')break;
			HH1[i] = input[i];
		}
		for (int j = 0; j < input.length() - i-1; j++) {
			MM1[j] = input[i + j + 1];
		}
		int HHin = stoi(HH1);
		int MMin = stoi(MM1);
		int flag = false;
		if (judge(HH1, MM1)) {
			string HH_temp = HH1; string MM_temp = MM1;
			mirror(HH_temp, MM_temp);
			int HH = stoi(HH_temp);
			int MM = stoi(MM_temp);
			if (HH < h && MM < m)cout << input << endl;
			else {
				while (!flag) {
					tita(HH1, MM1);
					if (judge(HH1, MM1)) {
						string HHtemp = HH1; string MMtemp = MM1;
						mirror(HHtemp, MMtemp);
						int HHn = stoi(HHtemp);
						int MMn = stoi(MMtemp);
						if (HHn < h && MMn < m) { cout << HH1 << ":" << MM1 << endl; flag = true; }
					}
				}
			}
		}
		else {
			while (!flag) {
				tita(HH1, MM1);
				if (judge(HH1, MM1)) {
					string HHtemp = HH1; string MMtemp = MM1;
					mirror(HHtemp, MMtemp);
					int HHn = stoi(HHtemp);
					int MMn = stoi(MMtemp);
					if (HHn < h && MMn < m) { cout << HH1 << ":" << MM1 << endl; flag = true; }
				}
			}
		}
	}
	return 0;
}