
#include <iostream>

#include <string>

using namespace std;

// Program: the purpose of this program is to be a virtual ice cream store 

// Process: the program uses input and out put funtions cin and cout respectively and switch statments as well as loops 

// Results: the results are someone is able to order an ice cream pick a cone and flavor and pay for it 
// Class: CS2010
// Section: 1005
// Term: Spring/Fall 2024
// Author: Brendan Eye 

// Reflection: I enjoyed the project it tought me to better use switch statments

int main()
{
	//ice cream flavors cost 

	float rockyCost = 2.50f;

	float stormyCost = 3.25f;

	float blizzerdCost = 3.75f;

	float superCellCost = 4.25f;

	float paymentOwed;

	int iceCreamFlavor = 0;

	// init cone type 

	int coneType = 0;

	string coneName;

	cout << "please pick a cone type 1 for waffle 2 for sugger 3 to quit:";

	cin >> coneType;

	switch (coneType)
	{
	case 1:
		
		coneName = " waffle cone ";

		break;

	case 2:

		coneName = " sugger cone ";

		break;

	case 3:

		cout << "godbye";

		return 0;

	default:

			cout << "you were suposed to put 1-3";
		return 1;
	
	}

	cout << "what flavor ice cream do you want";

	string flavorName;

	float iceCreamCost;

	cout << "1 for rocky 2 for stormy 3 for blizzard 4 for super cell 5 to quit" << endl;

	cin >> iceCreamFlavor;

	switch (iceCreamFlavor)
	{
		
	case 1:

		flavorName = " rocky ";

		iceCreamCost = rockyCost;

		cout << "your flavor is" << flavorName << "your cone type is" << coneName << endl;

		cout << "the cost is $" << iceCreamCost;

		break;

	case 2:

		flavorName = " stormy ";

		iceCreamCost = stormyCost;

		cout << "your flavor is" << flavorName << "your cone type is" << coneName << endl;

		cout << "the cost is $" << iceCreamCost;

		break;


	case 3:

		flavorName = " blizzard ";

		iceCreamCost = blizzerdCost;

		cout << "your flavor is " << flavorName << "your cone type is" << coneName << endl;

		cout << "the  cost is $" << iceCreamCost;

		break;

	case 4:

		flavorName = " super cell ";

		iceCreamCost = superCellCost;

			cout << "your flavor is" << flavorName << "your cone type is" << coneName << endl;

			cout << "the cost is $" << iceCreamCost;
	 
	case 5:
	  
		cout << "goodbye";

		return 1;

	default:

		cout << "you were suposed to put 1-5";

		return 0;

	}

	bool keepRunning = true;

	while (keepRunning)
	{
		
		cout << " please pay " << iceCreamCost;

		cin >> paymentOwed;

		paymentOwed = iceCreamCost - paymentOwed;

		cout << paymentOwed;

		if (paymentOwed > 0)
		{
			cout << "you still owe " << paymentOwed << "please pay rest of bill " << endl;

			cin >> paymentOwed;

		}

		if (paymentOwed == 0)
		{

			cout << "thanks for your business";

			keepRunning = false;

			continue;
		}

		else if (paymentOwed < 0)
		{
			paymentOwed = paymentOwed * -1;

			cout << "here is your change thank you " << paymentOwed;

			keepRunning = false;

			continue;
		}
	}


}