#include <iostream>
#include <time.h>
#include <string>
using namespace std;


int main()
{
	/*int money, price;
	cout << "가지고 있는 돈: ";
	cin >> money;
	cout << "사탕가격: ";
	cin >> price;
	cout << "최대로 살 수 있는 캔디의 개수" << money / price << "개" << endl;
	cout << "사고 남은 돈" << money % price << "원" << endl;*/
	//cout << rand() << endl;					//매번 같은 값이 나온다.
	srand((unsigned int)time(NULL));		//시드값 설정
	//int randomnum = rand();
	//cout << randomnum << endl;				//매번 다른 값이 나온다

	//랜덤뽑기프로그램
	//int number;
	//int random = rand();
	//char name[20] = {};
	//cout << "총 인원수 설정:";
	//cin >> number;
	//cout << "참여자 이름을 총 인원수에 맞게 기입하세요" << endl;
	//for (int i = 0; i < number; i++) {
	//	cin >> name[i];
	//}
	//cout << "뽑기 결과: " << name[random % number];

	//char str1[] = { 'h','e','l','l','o' };
	//cout << str1 << endl;
	//cout << sizeof(str1) << endl;

	//char str[] = "c++";				//큰 따음표로 묵어서 표현하면 널이 자동대입
	//cout << sizeof(str);			//널을 위한 자리를 만들어야한다

	////getline()공백이 포함된 문자열
	//string name, address;
	//cout << "이름을 입력하시오: ";
	//getline(cin, name);
	//cout << "주소를 입력하시오: ";
	//getline(cin, address);
	//cout << address << "에 사는 " << name << endl;
	////cin.ignore(): cin을 사용하고 getline을 사용할때 사용


	//문자 위치 찾기
	/*string str = "When in Rome, do as the Romans.";
	cout << str.find("Rome");*/

	//특정 문자 삭제하기
	/*string number;
	cin >> number;
	number.erase(number.find('-'), 1);
	cout << number << endl;*/

	//해밍 거리 구하기
	/*string DNA1, DNA2;
	int a = 0;
	cin >> DNA1 >> DNA2;
	for (int i = 0; i < DNA1.size(); i++) {
		if (DNA1[i] != DNA2[i]) {
			a++;
		}
	}
	cout << "해밍 거리는: " << a;*/

	//행맨
	string str, input, answer;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		answer.push_back('_');
	}

	while (str != answer)
	{
		cout << answer << endl;
		cout << "글자를 입력하시오: ";
		cin >> input[0];
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == input[0]) {
				answer[i] = input[0];
			}
		}
	}
	cout << "성공했습니다.!" << endl;
}