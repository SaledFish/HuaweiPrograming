/*
�����ַ������һ�����ʵĳ��ȣ������Կո������
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int LastWordLength = 0;
		int AlphaStart = str.size() - 1;
		for (; AlphaStart >= 0; AlphaStart--)
			if (isalpha(str[AlphaStart]))
				break;
		for (int i = AlphaStart; i >= 0; --i)
			if (isalpha(str[i]))
				LastWordLength++;
			else
				break;
		printf("%d", LastWordLength);
	}
	return 0;
}