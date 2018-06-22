#include "stdafx.h"

string startUp() 
{
	//gets the users name and returns it
	string name;
	cout << " Enter your Name : " << endl;
	cin >> name;
	cout << "Welcome to the Program " << name << " !" << endl;
	return name;
}


void pretzle()
{
	cout << "Ingredients:\n\n";
	cout << "1 and 1 / 2 cups(360ml) warm water(lukewarm-- no need to take temperature)\n";
	cout << "1 packet active dry or instant yeast(2 and 1 / 4 teaspoons)\n";
	cout << "1 teaspoon salt\n";
	cout << "1 Tablespoon brown sugar\n";
	cout << "1 Tablespoon unsalted butter, melted and slightly cool\n";
	cout << "3 and ¾ - 4 cups(460 - 500g) all - purpose flour, plus more for work surface\n";
	cout << "coarse sea salt for sprinkling\n";
	

	cout << "½ cup(120g) baking soda\n";
	cout << "9 cups(2, 160ml) water\n\n\n";
	cout << "Directions :\n\n";
	cout << "Whisk the yeast into warm water.Allow to sit for 1 minute.Whisk in salt, brown sugar, and melted butter.Slowly add 3 cups of flour,\n";
	cout << "1 cup at a time.Mix with a wooden spoon(or dough hook attached to stand mixer) until dough is thick.Add 3 / 4 cup more flour until the dough is no longer sticky.\n";
	cout << "If it is still sticky, add 1 / 4 - 1 / 2 cup more, as needed.Poke the dough with your finger - if it bounces back, it is ready to knead.\n";
	cout << "Turn the dough out onto a floured surface.Knead the dough for 3 minutes and shape into a ball.Cover lightly with a towel and allow to rest for 10 minutes. (Meanwhile, I like to get the water + baking soda boiling as instructed in step 6.)\n";
	cout << "Preheat oven to 400°F(204°C).Line 2 baking sheets with parchment paper or silicone baking mats.Set aside.\n";
	cout << "With a sharp knife or pizza cutter, cut dough into 1 / 3 cup sections.\n";
	cout << "Roll the dough into a 20 - 22 inch rope.Take the ends and draw them together so the dough forms a circle.Twist the ends, then bring them towards yourself and press them down into a pretzel shape.\n";
	cout << "Bring baking soda and 9 cups of water to a boil in a large pot.Drop 1 - 2 pretzels into the boiling water for 20 - 30 seconds.\n";
	cout << "Any more than that and your pretzels will have a metallic taste.Using a slotted spatula,\n";
	cout << "lift the pretzel out of the water and allow as much of the excess water to drip off.Place pretzel onto prepared baking sheet.Sprinkle each with coarse sea salt.Repeat with remaining pretzels.\n";
	cout << "Bake for 12 - 15 minutes or until golden brown.\n";
}


void weatherRock(string conditions) 
{
	int good = 0;
	string weatherConditions[4][4] = 
	{
		{"dry","it is sunny"},
		{ "wet","it is raining" },
		{ "white","it is snowing" },
		{ "swinging","it is windy" }
	};
	for(int i = 0; i < 4; i++) 
	{
		if (weatherConditions[i][0] == conditions) 
		{
			cout << weatherConditions[i][1] << endl;
		}
	}
}