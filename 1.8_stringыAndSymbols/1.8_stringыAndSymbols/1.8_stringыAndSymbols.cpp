#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int firstDot = s.find_first_of('.');
	int secondDot = s.find_first_of('.', firstDot + 1);
	int thirdDot = s.find_first_of('.', secondDot + 1);
	int fourthDot = s.find_first_of('.', thirdDot + 1);
	for (auto now : s) {
		if (s[0] >= '0' && s[0] <= '9'  ) continue;
	}
	


	cout << stoi(s) ;
}

/*
1.  Дана строка, содержащая пробелы. Найдите, сколько в ней слов 
	(слово – это последовательность непробельных символов, слова разделены
	одним пробелом, первый и последний символ строки – не пробел).




2. По данной строке определите, является ли она палиндромом.
	string s1, s2 = "";
	getline(cin, s1);
	for (int i = s1.size() - 1; i >= 0; i--) {
		s2 += s1[i];
	}
	if (s1 == s2) cout << "yes";
	else cout << "no";

3. Найдите в данной строке самое длинное слово и выведите его.
	string s1, s2 = "", s3 = "";
	getline(cin, s1);
	s1 += ' ';
	for (auto now : s1) {
		if (now != char(32)) {
			s2 += now;
		}
		else if (s2.size() > s3.size()) {
			s3 = s2;
			s2.clear();
		}
		else s2.clear();
	}
	cout << s3;

4. В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
	который принято записывать в виде четырех чисел, каждое из которых может
	принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
	127.0.0.0
	192.168.0.1
	255.0.255.255
	Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
*/