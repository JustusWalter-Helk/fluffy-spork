#include <iostream>
#include <string>

#include "ResourceManager.h"
#include "JsonDataTypes.h"

using namespace std;

int main()
{
	biome biomes[];
	string path = "Resources";
	load_biomes(path, &biomes);

	cout << biomes;

	cin.get();
}