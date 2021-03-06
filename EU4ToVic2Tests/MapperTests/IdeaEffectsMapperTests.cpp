#include "gtest/gtest.h"
#include "../EU4toV2/Source/Mappers/IdeaEffects/IdeaEffectMapper.h"
#include <sstream>



TEST(Mappers_IdeaEffectMapperTests, getEnforceFromIdeaReturnsEmptyForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getEnforceFromIdea("missingIdea");
	ASSERT_EQ(investment, "");
}


TEST(Mappers_IdeaEffectMapperTests, getEnforceFromIdeaDefaultsToEmpty)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getEnforceFromIdea("specifiedIdea"), "");
}


TEST(Mappers_IdeaEffectMapperTests, getEnforceFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tenforce = absolute_monarchy";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getEnforceFromIdea("specifiedIdea"), "absolute_monarchy");
}

TEST(Mappers_IdeaEffectMapperTests, getArmyFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getArmyFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getArmyFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getArmyFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getArmyFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tarmy = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getArmyFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getNavyFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getNavyFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getNavyFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getNavyFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getNavyFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tnavy = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getNavyFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getCommerceFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getCommerceFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getCommerceFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getCommerceFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getCommerceFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tcommerce = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getCommerceFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getCultureFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getCultureFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getCultureFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getCultureFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getCultureFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tculture = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getCultureFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getIndustryFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getIndustryFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getIndustryFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getIndustryFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getIndustryFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tindustry = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getIndustryFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getLibertyFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getLibertyFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLibertyFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLibertyFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLibertyFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tliberty = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLibertyFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getEqualityFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getEqualityFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getEqualityFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getEqualityFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getEqualityFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tequality = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getEqualityFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getOrderFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getOrderFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getOrderFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getOrderFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getOrderFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\torder = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getOrderFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getLiteracyFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getLiteracyFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLiteracyFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLiteracyFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLiteracyFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tliteracy = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLiteracyFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getLiberalFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getLiberalFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLiberalFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLiberalFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getLiberalFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tliberal = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getLiberalFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getReactionaryFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getReactionaryFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getReactionaryFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getReactionaryFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getReactionaryFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\treactionary = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getReactionaryFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getSlaveryFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getSlaveryFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getSlaveryFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getSlaveryFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getSlaveryFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tslavery = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getSlaveryFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getUpper_house_compositionFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getUpper_house_compositionFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getUpper_house_compositionFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getUpper_house_compositionFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getUpper_house_compositionFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tupper_house_composition = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getUpper_house_compositionFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getVote_franchiseFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getVote_franchiseFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getVote_franchiseFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getVote_franchiseFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getVote_franchiseFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tvote_franchise = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getVote_franchiseFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getVoting_systemFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getVoting_systemFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getVoting_systemFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getVoting_systemFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getVoting_systemFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tvoting_system = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getVoting_systemFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getPublic_meetingsFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getPublic_meetingsFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPublic_meetingsFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPublic_meetingsFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPublic_meetingsFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tpublic_meetings = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPublic_meetingsFromIdea("specifiedIdea"), 1);
}



TEST(Mappers_IdeaEffectMapperTests, getPress_rightsFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getPress_rightsFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPress_rightsFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPress_rightsFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPress_rightsFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tpress_rights = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPress_rightsFromIdea("specifiedIdea"), 1);
}


TEST(Mappers_IdeaEffectMapperTests, getTrade_unionsFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getTrade_unionsFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getTrade_unionsFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getTrade_unionsFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getTrade_unionsFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\ttrade_unions = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getTrade_unionsFromIdea("specifiedIdea"), 1);
}




TEST(Mappers_IdeaEffectMapperTests, getPolitical_partiesFromIdeaReturnsFiveForMissingIdea)
{
	std::stringstream input;
	mappers::IdeaEffectMapper theMapper(input);

	auto investment = theMapper.getPolitical_partiesFromIdea("missingIdea");
	ASSERT_EQ(investment, 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPolitical_partiesFromIdeaDefaultsToFive)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPolitical_partiesFromIdea("specifiedIdea"), 5);
}


TEST(Mappers_IdeaEffectMapperTests, getPolitical_partiesFromIdeaCanBeSetForIdea)
{
	std::stringstream input;
	input << "specifiedIdea ={\n";
	input << "\tpolitical_parties = 1";
	input << "}";
	mappers::IdeaEffectMapper theMapper(input);

	ASSERT_EQ(theMapper.getPolitical_partiesFromIdea("specifiedIdea"), 1);
}
