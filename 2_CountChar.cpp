/*
д��һ�����򣬽���һ������ĸ��������ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	char cha;
	while (cin >> str >> cha)
	{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		tolower(cha);
		int Count = count(str.begin(), str.end(), cha);
		printf("%d", Count);
	}
	return 0;
}