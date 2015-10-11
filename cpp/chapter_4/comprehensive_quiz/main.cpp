#include <iostream>
#include <string>

enum class MonsterType {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster {
	MonsterType type;
	std::string name;
	int health;
};

std::string convertMonsterType(MonsterType type);
void printMonster(Monster monster); 

int main() {
	Monster torg = {MonsterType::OGRE, "Torg", 145};
	Monster blurp = {MonsterType::SLIME, "Blurp", 23};

	printMonster(torg);
	printMonster(blurp);

	return 0;
}


std::string convertMonsterType(MonsterType type) {
	if(type == MonsterType::OGRE)
		return "Ogre";
	else if(type == MonsterType::DRAGON)
		return "Dragon";
	else if(type == MonsterType::ORC)
		return "Orc";
	else if(type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	else if(type == MonsterType::SLIME)
		return "Slime";
}

void printMonster(Monster monster) {
	std::cout << "This "  << convertMonsterType(monster.type);
	std::cout << " is named " << monster.name;
	std::cout << " and has " << monster.health << " health\n";
}
