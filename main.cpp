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

			cout << "What is the name of the room?" << endl;
			string name;
			getline(cin, name);

			void AddRoom(string name, float width, float height);

			
		}
		
		else if (choice == 3)
		{
			cout << bldg.address << endl;
			cout << bldg.totalRooms << endl;
			
			for (int i = 0; i < bldg.totalRooms; i++)
			{
				cout << bldg.rooms[i].name << endl;
				cout << bldg.rooms[i].height << endl;
				cout << bldg.rooms[i].width << endl;
				cout << bldg.rooms[i].GetArea() << endl;
				cout << bldg.rooms[i].GetPerimeter() << endl;
			}

			
		}
		
		else if (choice == 4)
		{
			done = true;
		}
	}
	
	


	return 0;
}
