#include <iostream>
#include <fstream>
#include <sstream>
#include "json.h"
using namespace std;
using namespace xin::json;

int main() {

	ifstream fin("./test.json");
	stringstream ss;
	ss << fin.rdbuf();
	const string & str = ss.str();
	Json v;
	v.parse(str);
	std::cout << v.str() <<endl;

	bool isLogin = v["data"]["isLogin"];
	int current_level = v["data"]["level_info"]["current_level"];

	cout << "isLogin:" << isLogin <<endl;
	cout << "current_level:" << current_level <<endl;

/* 	const string & str = "{\"a\" : 1, \"b\" : 2, \"c\" : 3}";
	Json v;
	v.parse(str);
	std::cout << v.str() <<endl;
 */

	/*
	Json arr;
	arr[0] = true;
	arr[1] = 123;
	arr[2] = 1.23;
	arr[3] = "hello world";

	Json obj;
	obj["bool"] = true;
	obj["int"] = 123;
	obj["double"] = 1.23;
	obj["arr"] = arr;

//	std::cout << obj.has("str") << std::endl;
//	std::cout << obj.has("str123") << std::endl;

//	obj.remove("str");
	std::cout << obj.str() << std::endl;

	obj.clear(); 
*/

	/*
	for(auto it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << (*it).str() << std::endl;
	}
	*/

	/*
	Json obj;
	obj["bool"] = true;
	obj["int"] = 123;
	obj["double"] = 1.23;
	obj["str"] = "hello world";
	std::cout << obj.str() <<std::endl;
	*/	

	/*
	Json arr;
	arr[0] = true;
	arr[1] = 123;
	arr.append(1.23);
	arr.append("hello world");

	std::cout << arr.str() <<std::endl;
	
	bool b = arr[0];
	int i = arr[1];
	double f = arr[2];
	const string & s = arr[3];
	*/
		
	/*
	Json v1;
	Json v2 = true;
	Json v3 = 123;
	Json v4 = 1.23;
	Json v5 = "hello world";
	
	bool b = v2;
	int i = v3;
	double f = v4;
	const string & s = v5;

	std::cout << "YAZI JSON" << std::endl;
	*/
	return 0;
}