/*
#include <iostream>
#include <map>

using namespace std;

void main()
{
	struct NNN
	{
		int a;
		int b;
		int c;
		int d;
	};

	NNN OOO;

	map<int, NNN> MAP;

	for (int i = 0; i < 1000000; ++i)
	{
		MAP.insert(make_pair(i, OOO));
	}

	cout << MAP.size() << endl;

	getchar();



	MAP.clear();

	cout << "¸Ê »èÁ¦" << endl;

	cout << MAP.size() << endl;

	getchar();
}
*/

/* Array and Pointer
#include <iostream>
#include <vector>

using namespace std;

void main()
{
int array[5];

int* intptr;

cout << array << ", " << &array << ", " << &array[0] << endl;

cout << intptr << ", " << &intptr << endl;


vector<int> integersV;

int* intAddress1 = nullptr;
int* intAddress2 = nullptr;

integersV.push_back(0);

intAddress1 = &integersV[0];

integersV.push_back(1);

intAddress2 = &integersV[0];

cout << *intAddress1 << endl;
cout << *intAddress2 << endl;

for (float i = 0, j = 0; i < 5; ++i, ++j)
{
cout << i + j << endl;
}
}
*/

/* "static_cast" and virtual function
#include <iostream>

using namespace std;

void main()
{
class Base
{
public:
void a() { cout << "Base::a\n"; }
virtual void b() { cout << "Base::b\n"; }
};

class Derived : public Base
{
public:
void a() { cout << "Derived::a\n"; }
virtual void b() { cout << "Derived::b\n"; };
};

class shit
{};

Derived d;

Base* b = static_cast<Base*> (&d);
//Base* b = new d;
Base* bb = (Base*)(&d);

Base bbb = static_cast<Base> (d);
Base bbbb = (Base)(d);

d.a();
d.b();

b->a();
b->b();

bb->a();
bb->b();

bbb.a();
bbb.b();

bbbb.a();
bbbb.b();
}
*/

/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
unsigned int triangularWordCount = 0;

int** address = new int*[4];

for(unsigned int i=0; i<4; ++i)
{
address[i] = new int[4];
}

address[3][3] = 4;

cout << address[3][3];
}
*/

/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void main()
{
char* text[3] = { "abc", "def", "ghi" };

printf("%s\n", text[0]); //abc
printf("%s\n", *text); //abc

printf("%c\n", (*text[0])); //a
printf("%c\n", (*text[1])); //d
printf("%c\n", (text[1][1])); //e

printf("%x\n", text[0]); //address of "abc"
printf("%x\n", *text); //address of "abc"

printf("%x\n", &text[0]); //address of text
printf("%x\n", text); //address of text
printf("%x\n", &text); //address of text
}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void main()
{
	FILE* fileAddress;
	unsigned int player1WinCount = 0;
	unsigned int player2WinCount = 0;
	char seperator[] = " \n\0";
	char buffers[32];
	char* bufferAddress;

	fileAddress = fopen("poker.txt", "r+");

	while (!feof(fileAddress))
	{
		bufferAddress = fgets(buffers, sizeof(buffers), fileAddress);
		cout << bufferAddress << endl;

		bufferAddress = strtok(bufferAddress, seperator);

		//cout << *"\0" << *(bufferAddress + 2) << endl; // space is printed

		while (bufferAddress)
		{
			cout << bufferAddress << endl;

			bufferAddress = strtok(nullptr, seperator);
		}
	}

	fclose(fileAddress);
}
*/