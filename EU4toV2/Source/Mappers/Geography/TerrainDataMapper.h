#ifndef TERRAIN_DATA_MAPPER_H
#define TERRAIN_DATA_MAPPER_H

#include "newParser.h"
#include <map>
#include <optional>

namespace mappers
{
	class TerrainDataMapper: commonItems::parser
	{
	public:
		TerrainDataMapper();
		TerrainDataMapper(std::istream& theStream);
		const std::map<int, std::string>& getTerrainMap() const { return terrainMap; }
		std::optional<std::string> getTerrainForID(int provinceID) const;

	private:
		void registerKeys();
		std::map<int, std::string> terrainMap;
	};
}

#endif // TERRAIN_DATA_MAPPER_H
