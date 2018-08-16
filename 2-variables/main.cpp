#include <iostream>
int main()

{
	std::cout << "its the second program!" << std::endl;

	int age = 21; //my age

	std::cout << "here is my age" << age << std::endl;

	//prompt for users age
	int userAge = -1;

std::cout << "what is your age?" << std::endl;
std::cin >> userAge;

std::cout << "Geez, your age is" << userAge << "youre old" << std::endl;
//A)
int numberA = 5;
numberA = 9;
numberA = 11;
numberA = 14;

std::cout << "A) " << numberA << std::endl;

//B)
int numberB = 10;
numberB = 9;

int thingB = 55;
thingB = 22;

std::cout << "B) " << numberB << std::endl;

//C)
int numberC = 3;
numberC = 7;
numberC = 1;

int somethingC = 23;
somethingC = 21;

numberC = somethingC;

std::cout << "C) " << numberC << std::endl;

//D)
int numberD = 1;
int somethingD = 3;

numberD = somethingD;

std::cout << "D " << somethingD << std::endl;

//E)
int x = 13;

x = x / 2;

std::cout << "E) " << x << std::endl;

//F)
float y = 13;

y = y / 2;

std::cout << "F) " << y << std::endl;

//celsius converter
int celsius = -2;
int farenheight = -1;

std::cin >> celsius;

farenheight = celsius * 1.8 + 32;

std::cout << farenheight << std::endl;
system("pause");

//average of Five
float a, b, c, d, e;
float avg;
avg = a = b = c = d = e = 0.0f;

std::cout << "whats the first vnumber" << std::endl;
std::cin >> a;
std::cout << "whats the second vnumber" << std::endl;
std::cin >> b;
std::cout << "whats the third vnumber" << std::endl;
std::cin >> c;
std::cout << "whats the fourth vnumber" << std::endl;
std::cin >> d;
std::cout << "whats the last vnumber" << std::endl;
std::cin >> e;

avg = (a + b + c + d + e) / 5.0f;

std::cout << "Average of Five)" << std::endl;
std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
std::cout << "avg: " << avg << std::endl;

system("pause");

int x = 13;
int y = 24;

int temp = x;

x = y;
y = x;

std::cout << "Number Swap)" << std::endl;
std::cout << "x is " << x << std::endl;
std::cout << "y is " << y << std::endl;

system("pause");

int age = -1;
std::cout << "how old are you in years" << std::endl;
std::cin >> age;

std::cout << "Youve been alive for" << age << "years" << std::endl;
std::cout << "thats" << age / 10 << "decades" << std::endl;
std::cout << "thats" << age / 20 << "decades" << std::endl;


return 0;
}