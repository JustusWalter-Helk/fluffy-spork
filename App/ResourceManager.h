#pragma once

#include <fstream>
#include <json\json.h>
#include <filesystem>
#include <iostream>

#include "JsonDataTypes.h"

using namespace std;
//namespace fs = std::filesystem;

void load_biomes(string path, biome& biomes[]);
