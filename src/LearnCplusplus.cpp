//============================================================================
// Name        : LearnCplusplus.cpp
// Author      : hrl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//  可以通过输入EOF的方式 终止  使用cin。。。速度慢
/*
int main() {
	//学习C++的一些基本特性
	int sum = 0;
	int value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is : "  << sum << std::endl;

	return 0;
}
*/
//-----------------------------------使用struct
/*
struct Sales_item {
	int ISBN;
	int number ;
	int price;
}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法
	std::cin >> item.ISBN;
	std::cout << item.ISBN << std::endl;
	return 0 ;
}

*/
//这里注意那个&s 没有 &  ， 还有，  使用char ISBN   ，后面就不用[]
/*
struct Sales_item {
	char ISBN[101];
	int number ;
	int price;
}item;//item 可做为一个赋值

int main() {


	scanf("%s %d" , item.ISBN , &item.number) ;
	printf("%s %d" , item.ISBN , item.number);

}

*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	int price;
	bool Isout;//使用 bool 不使用boolean,,boolean是java 再用。。。

}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法

	Sales_item moreitem;
	moreitem.Isout = true;//这里需要使用小写的方式。。。。
	std::cin >> item.ISBN;
	std::cout << item.ISBN << "   " <<moreitem.Isout << std::endl;
	return 0 ;
}

*/

/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	char16_t name;//0x400b58  像这样的才是合适的类型赋值
}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法
	std::cin >> item.name;
	std::cout << item.name << std::endl;
	return 0 ;
}

*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	char name[101];//c++11的
}item;//item 可做为一个赋值

int main()
{

	//item.name = 'one world use single ';  这种方式是错误的的。。单引号表示一个字符，双引号才是char[]字符串
	// item.name = "one sgnle!!";  还是错误，这里的字符串是const char[12]  固定且定长！！！！



	std::cout << item.name << "\7\40\115\0\\" << std::endl;
	std::cout << "\x61\x40\x41\x31\n\12" << std::endl;//16进制和ascii码需要注意。。。
	std::cout << L'a'  << u8"hi!"  <<  1E-3F << "\n" << std::endl;
	std::cout <<  u"aaaa"  << endl;
	return 0 ;
}
*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	float name;
}item;

int main()
{

	scanf("%f",&item.name);
	printf("%6.2f",item.name);  //注意输入和出的方式，只是输出才对精确度要求，输入不要。
	return 0 ;
}
*/

struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	//string name;  //使用string这个定义，注意！！需要使用std::string
	std::string name;
	std::string book;
	char bingo[101];
};

int main()
{
	Sales_item item;

	std::string book("wowowowowowowo using book");//可以这样初始化，但是不能这样的赋值
	item.book = "sadfsadfsadf";  //这是赋值的方法
	//item.bingo = "rilsdfsdf";
	//只要是到了结构里面，就不能直接赋值了。
	scanf("%s" , item.bingo);
	printf("%s" , item.bingo);

	std::cin >> item.name;
	std::cout << item.name << " \12  "<<  item.book <<std::endl;

	//printf("%s");
	//当使用了string这个的时候，只能用cout的方式进行输出了，这就是所用string的代价

	return 0 ;
}














































