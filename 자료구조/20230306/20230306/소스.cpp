#include <iostream>
#include <time.h>
#include <string>
using namespace std;


int main()
{
	/*int money, price;
	cout << "������ �ִ� ��: ";
	cin >> money;
	cout << "��������: ";
	cin >> price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����" << money / price << "��" << endl;
	cout << "��� ���� ��" << money % price << "��" << endl;*/
	//cout << rand() << endl;					//�Ź� ���� ���� ���´�.
	srand((unsigned int)time(NULL));		//�õ尪 ����
	//int randomnum = rand();
	//cout << randomnum << endl;				//�Ź� �ٸ� ���� ���´�

	//�����̱����α׷�
	//int number;
	//int random = rand();
	//char name[20] = {};
	//cout << "�� �ο��� ����:";
	//cin >> number;
	//cout << "������ �̸��� �� �ο����� �°� �����ϼ���" << endl;
	//for (int i = 0; i < number; i++) {
	//	cin >> name[i];
	//}
	//cout << "�̱� ���: " << name[random % number];

	//char str1[] = { 'h','e','l','l','o' };
	//cout << str1 << endl;
	//cout << sizeof(str1) << endl;

	//char str[] = "c++";				//ū ����ǥ�� ��� ǥ���ϸ� ���� �ڵ�����
	//cout << sizeof(str);			//���� ���� �ڸ��� �������Ѵ�

	////getline()������ ���Ե� ���ڿ�
	//string name, address;
	//cout << "�̸��� �Է��Ͻÿ�: ";
	//getline(cin, name);
	//cout << "�ּҸ� �Է��Ͻÿ�: ";
	//getline(cin, address);
	//cout << address << "�� ��� " << name << endl;
	////cin.ignore(): cin�� ����ϰ� getline�� ����Ҷ� ���


	//���� ��ġ ã��
	/*string str = "When in Rome, do as the Romans.";
	cout << str.find("Rome");*/

	//Ư�� ���� �����ϱ�
	/*string number;
	cin >> number;
	number.erase(number.find('-'), 1);
	cout << number << endl;*/

	//�ع� �Ÿ� ���ϱ�
	/*string DNA1, DNA2;
	int a = 0;
	cin >> DNA1 >> DNA2;
	for (int i = 0; i < DNA1.size(); i++) {
		if (DNA1[i] != DNA2[i]) {
			a++;
		}
	}
	cout << "�ع� �Ÿ���: " << a;*/

	//���
	string str, input, answer;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		answer.push_back('_');
	}

	while (str != answer)
	{
		cout << answer << endl;
		cout << "���ڸ� �Է��Ͻÿ�: ";
		cin >> input[0];
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == input[0]) {
				answer[i] = input[0];
			}
		}
	}
	cout << "�����߽��ϴ�.!" << endl;
}