#ifndef STATE_MAPPER_H
#define STATE_MAPPER_H

#include "newParser.h"
#include <map>
#include <set>

namespace mappers
{
	class StateMapper: commonItems::parser
	{
	public:
		StateMapper();
		StateMapper(std::istream& theStream);
		std::set<int> getAllProvincesInState(int province) const;

	private:
		void registerKeys();
		std::map<int, std::set<int>> stateProvincesMap;
	};
}

#endif // STATE_MAPPER_H