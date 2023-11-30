#include <fstream>

#include "ResourceManager.h"

void load_biomes(string path, biome &biomes[]) {
	int biomesIndex = 0;
	for (const auto& entry : std::filesystem::directory_iterator(path)) {
		Json::Reader reader;
		Json::Value root;

		string data;

		ifstream file(entry.path());

		if (file) {
			ostringstream ss;
			ss << file.rdbuf();
			data = ss.str();
		}

		reader.parse(data, root, false);

		biome currentBiome;

		currentBiome.name = root["name"].asString();
		currentBiome.minLength = root["minLength"].asInt();
		currentBiome.maxLength = root["maxLength"].asInt();
		currentBiome.spawnChance = root["spawnChance"].asFloat();

		biomes[biomesIndex] = currentBiome;

		biomesIndex++;
	}
}