#include <iostream>
#include <json/json.h>

int main()
{
	Json::Value root;
	std::cin >> root;

	std::string my_encoding = root.get("test", "").asString();

	std::cout << my_encoding;
	std::cout << "Hello World\n";

	std::cin.get();
}