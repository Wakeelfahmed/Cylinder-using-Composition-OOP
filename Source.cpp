#include<iostream>
#include"cylinder.h"
using namespace std;
int main()
{
	int UI_Input, Input1, Input2, Cylinders_Counter = 0, i = 1;
	Cylinder Cylinders[50];
	cout << "Press 1 to create a Cylinder" << endl;
	cin >> UI_Input;
	Validate_Input(1, UI_Input, 1);
	while (UI_Input == 1 || UI_Input == 2 || UI_Input == 3 || UI_Input == 4)
	{
		switch (UI_Input)
		{
		case 1:	//Create Cylinder
			Cylinders_Counter++;
			cout << "Enter deatils of Cylinder " << Cylinders_Counter << endl;
			Cylinders[Cylinders_Counter].user_Input();
			break;
		case 2:	//view Cylinder details
			for (i = 1; i <= Cylinders_Counter; i++)
				cout << "Press \'" << i << "\' to view Cylinder: " << i << endl;
			cin >> Input1;
			Validate_Input(1, Input1, i);
			Cylinders[Input1].display();
			break;
		case 3:	//Compute Area
			for (i = 1; i <= Cylinders_Counter; i++)
				cout << "Press \'" << i << "\' to Compute Area of: Cylinder " << i << endl;
			cin >> Input1;
			Validate_Input(1, Input1, i);
			cout << "Area of Cylinder " << Input1 << " is:" << Cylinders[Input1].ComputeArea() << "cm" << char(253) << endl;
			break;
		case 4:	//Cylinder comparison
			for (i = 1; i <= Cylinders_Counter; i++)
				cout << "Press \'" << i << "\' to select: Cylinder " << i << endl;
			cout << "Select the 1st Cylinder:";
			cin >> Input1;
			Validate_Input(1, Input1, i);
			cout << "Select the 2nd Cylinder:";
			cin >> Input2;
			Validate_Input(1, Input2, i);
			if (Cylinders[Input1] == Cylinders[Input2])
				cout << "Both Cylinders are equal" << endl;
			else if (Cylinders[Input1] > Cylinders[Input2])
				cout << "Cylinder " << Input1 << " > Cylinder " << Input2 << endl;
			else
				cout << "Cylinder " << Input2 << " > Cylinder " << Input1 << endl;
			break;
		}//End of switch
		cout << "\nPress 1 to create a Cylinder\t" << "Press 2 to view cylinders details" << endl
			<< "Press 3 to compute Area\t\t"; if (Cylinders_Counter >= 2)cout << "Press 4 to Compare Cylinders" << endl; 
		cout << "Press 5 to exit" << endl;
		cin >> UI_Input;
		if (Cylinders_Counter < 2)
			while (UI_Input == 4)
				cin >> UI_Input;
		Validate_Input(1, UI_Input, 5);
	}//End of while
}	//End of main
