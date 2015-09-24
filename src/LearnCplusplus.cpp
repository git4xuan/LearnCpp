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
#include<string>
#include<vector>

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
/*
 *
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	//string name;  //使用string这个定义，注意！！需要使用std::string
	std::string name;
	std::string book;
	std::string tax;
	char bingo[101];
};

int main()
{
	Sales_item item;

	std::string book("wowowowowowowo using book");//可以这样初始化，但是不能这样的赋值
	item.book = "sadfsadfsadf";  //这是赋值的方法
	//item.bingo = "rilsdfsdf";
	//只要是到了结构里面，就不能直接赋值了。
	//tax 默认为空串

	scanf("%s" , item.bingo);
	printf("%s" , item.bingo);

	std::cin >> item.name;
	std::cout << item.name << " \12  "<<  item.book <<std::endl;

	//printf("%s");
	//当使用了string这个的时候，只能用cout的方式进行输出了，这就是所用string的代价
  //
	return 0 ;
}
*/
//----------------------------------------------
/*
typedef int ElemType ;  //使用Typedef进行ElemType。。。
extern int other ; //只是将其他的地方的定义other用了，这里只是声明other不是定义other
int j ; //!!!!声明并定义j ，

struct Sales_item {
	ElemType ISBN;
	int number ;
	int price;
};

int main()
{
	Sales_item item;
	int _ ;   // you  can use _
	int  i = 1012;
	int &out = i ;
	//std::cin >> item.ISBN >> _ ;
	//std::cout << item.ISBN << std::endl;
	//std::cin >> out ;
	std::cout  << out << std::endl;
	i =2342342;//引用的特点
	std::cout  << out << std::endl;

	int *pi ;// *声明的一部分

	*pi = out ; // *  一个解引用符
	double *ptr = nullptr;
	double *ptr2 = NULL; // using cstdlib!!!
	//赋值永远改变的是等号左边的对象！！
	return 0 ;
}

*/

//自定义数据结构
/*
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0 ;
	double revenue = 0.0 ;
};

*/
//-----------------------------------------------------
//使用string
/*
int main(){
	string s1 ;
	string s2(s1);
	string s3 = s2 ;
	string s4("value");
	string s5 = "value2" ;
	string s6(3, 'd');  //分清拷贝初始化和直接初始化的关系

	string word1 , word2 ;

//	while(cin >> word1 ) //一直读，空格结束，直到文件末尾，EOF没有用！！
	//	cout << "tag "  <<  word1 << endl;

	//   cout << "\12   " << endl;
	//string 字符串的比较和Y型拉链字符串比较，合并！
	 // cin >> s5  不能cin 之后没有endl ， 除非使用while的方式

	 //   s5 =  "baodu" + "vallll" + s4  ; //错误，这里不能字符串直接相加，两个qian面的。。需要有s4放在前面作为一个转换的方式来解决
	    s5 = s4 + "agfas" +  "baodu" + "vallll"; //正确

	while(getline(cin, word2)){ //getline 保留空白符，在换行符凑腿《停止（读进来后丢弃），直接getline，有返回
		if(!word2.empty())  // line.empty 如果字符串为空，就返回true,此处，这里加上后，直接enter就不会显示tag。
			cout <<  "tag2 "  << word2 << endl;
		cout << word2.size() << endl;
		//有size就不使用int ， 是一个无符号整形数！！
	}//end while
	 //直接enter ，还是有tag2出来，后面没有了。

	while(cin >> s5){
		if(s5 == "book")
			cout << "book start " << s5 << endl;
		else if(s5 == "perfume")
			cout << "perfume sdfsdf "  << s5 << endl;
		else
			cout << "Error!" << endl;
		}

	return 0 ;

}

*/

//-----------------------------------vector=================

int main() {
string val;
vector<int> ivec;
vector<string> istring;
vector<vector<string>> file;




vector<string> s1;
vector<string> s2(s1);
vector<string> s5 = {"ballll"};  //至少要用大括号将其括起
vector<string> s3{3,"fa"};  //注意，这里的可用的部分使用大括号的，不是小括号，小括号是拷贝的时候使用
vector<string> s4 = {"a,b,b," , "asdfsadf " , "sadf ba"};

//  for(vector<string> i  = 0 ; i < 20 ; i++)
// 如果不是int的话，要使用专门的iterator才行，int的话，可以直接加到vector<int>的值上
/*
for (int i = 0 ; i != 20 ; i++)
{
	ivec.push_back(i);
}
cout << ivec << endl;
*/
cout << "me <<"  << endl;
cout << s4[0] << endl; //cout 的时候，不能直接cout s4 ， 需要下标输出单个内部的值
auto e = s4.end();
for(auto it = s4.begin();it != e ;++it){  //auto 省时省力，，，不过是一个迭代器， 相当于从一个位置移动到另一个位置的方法
	// < 使用较少，但是 ！= 是所有的定义的数据结构都是会使用

	cout << *it << endl;  // 使用指针的方式才能正确的输出
}
for(vector<string>::iterator it = s4.begin();it != s4.end() ;++it){  //auto 省时省力，，，不过是一个迭代器， 相当于从一个位置移动到另一个位置的方法
	// < 使用较少，但是 ！= 是所有的定义的数据结构都是会使用

	cout << *it << endl;  // 使用指针的方式才能正确的输出
}

}


































