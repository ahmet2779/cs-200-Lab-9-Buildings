#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Room
{
	float width, height;

	string name;

	float GetArea()
	{
		return width*height;
	}

	float GetPerimeter()
	{
		return (2 * width) + (2 * height);
	}

};



struct Building
{
	string address;

	Room rooms[10];

	int totalRooms;

	Building()
	{
		address = "not set";
		totalRooms = 0;
	}

	void AddRoom(string newName, float newWidth, float newHeight)
	{
		Room newRoom;
		newRoom.width = newWidth;
		newRoom.height = newHeight;
		newRoom.name = newName;

		rooms[totalRooms] = newRoom;
		totalRooms++;
		
	}



};



int main()
{
	
	
	Building bldg;

	bool done = false;
	while (!done)
	{
		cout << "1. Set Building address" << endl;
		cout << "2. Add Room" << endl;
		cout << "3. View all building information" << endl;
		cout << "4. Quit" << endl;

		int choice;
		cin >> choice;
		cin.ignore();

		if (choice == 1)
		{
			cout << "What is the address of the building?" << endl;
			string address;

			getline(cin, bldg.address);

		}
		
		else if (choice == 2)
		{
			cout << "What is the width of the room?" << endl;
			float width;
			cin >> width;

			cout << "What is the height of the room?" << endl;
			float height;
			cin >> height;
			cin.ignore();

			cout << "What is the name of the room?" << endl;
			string name;
			getline(cin, name);

			bldg.AddRoom(name, width, height);

			
		}
		
		else if (choice == 3)
		{
			cout << "----------------------------" << endl;
			cout << "The Building address is: " <<bldg.address << endl;
			cout << "----------------------------" << endl;
			cout << "The Building has " << bldg.totalRooms << endl;
			cout << "----------------------------" << endl;
			
			for (int i = 0; i < bldg.totalRooms; i++)
			{
				cout << "The Room name is " << bldg.rooms[i].name << endl;
				cout << "----------------------------" << endl;
				cout << "The Room height is " << bldg.rooms[i].height << endl;
				cout << "----------------------------" << endl;
				cout << "The Room width is " << bldg.rooms[i].width << endl;
				cout << "----------------------------" << endl;
				cout << "The Room area is " << bldg.rooms[i].GetArea() << endl;
				cout << "----------------------------" << endl;
				cout << "The Room perimeter is " << bldg.rooms[i].GetPerimeter() << endl;
				cout << "----------------------------" << endl;
			}

			
		}
		
		else if (choice == 4)
		{
			done = true;
		}
	}
	
	


	return 0;
}
