/*******************************************************************************
* AUTHORS		: Zac Campos & Sebastian Hooshmand
* STUDENT ID	: 1058476
* LAB #13		: Output - Geometry
* CLASS			: CS1A
* SECTION		: MW 8am
* DUE DATE		: 3/12/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* Output - Geometry
* -----------------------------------------------------------------------------
* This program will output the area of a triangle, rectangle,
* and circle with dimensions inputted by the user.
* -----------------------------------------------------------------------------
* INPUT:
* 		<Height and base of the triangle, width and height of the rectangle,
* 		and the radius of the circle.>
*
* OUTPUT:
* 	<This program will output the area of each of the objects>
******************************************************************************/


int main()
{
	/***************************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING and PI
	* -------------------------------------------------------------------------
	* PROGRAMMER	: Programmer's Name
	* CLASS			: Student's Course
	* SECTION		: Class Days and Times
	* LAB_NUM		: Lab Number (specific to this lab)
	* LAB_NAME		: Title of the Lab
	**************************************************************************/
	const char		PROGRAMMER[]	= "Zac Campos";
	const char		CLASS[]			= "CS1A";
	const char		SECTION[]		= "MW: 8am";
	const int		LAB_NUM			= 5;
	const char		LAB_NAME[]		= "Eclipse Tutorial";
	const float		PI				= 3.14159;
	const int		ALIGN			= 36;

	// variable declarations go here
	float height				= 0;
	float base					= 0;
	float areaOfTriangle		= 0;

	float width					= 0;
	float heightRect			= 0;
	float areaOfRectangle		= 0;

	float radius				= 0;
	float areaOfCircle			= 0;


	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "*  " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	* INPUT - describe input here
	**************************************************************************/
	cout << left << setw(ALIGN) << "Enter the height of the triangle:";
	cin  >> height;

	cout << setw(ALIGN) << "Enter the base of the triangle:";
	cin  >> base;

	cout << endl;

	/***************************************************************************
	* INPUT -
	**************************************************************************/
	cout << setw(ALIGN)<< "Enter the width of the rectangle: ";
	cin  >> width;

	cout << setw(ALIGN) << "Enter the height of the rectangle: ";
	cin  >> heightRect;

	cout << endl;

	/***************************************************************************
	* INPUT -
	**************************************************************************/
	cout << setw(ALIGN) << "Enter the radius of the circle: ";
	cin  >> radius;

	cout << endl;


	/***************************************************************************
	* PROCESSING - describe processing here
	**************************************************************************/
	areaOfTriangle	= (height * base) / 2;

	/***************************************************************************
	* PROCESSING - describe processing here
	**************************************************************************/
	areaOfRectangle	= width * heightRect;

	/***************************************************************************
	* PROCESSING - describe processing here
	**************************************************************************/
	areaOfCircle	= PI * radius * radius;

	/***************************************************************************
	* OUTPUT - describe input here
	**************************************************************************/
	cout << setw(18) << right << "Triangle Area" << setw(19) << "Rectangle Area" << setw(16) << "Circle Area" << endl;
	
	cout << setw(18) << areaOfTriangle << setw(19) << areaOfRectangle << setw(16) << areaOfCircle << endl;
	
	cout << setprecision(3);
	cout << setw(18) << areaOfTriangle << setw(19) << areaOfRectangle << setw(16) << areaOfCircle << endl;
	
	cout << setprecision(3) << showpoint;
	cout << setw(18) << areaOfTriangle << setw(19) << areaOfRectangle << setw(16) << areaOfCircle << endl;
	
	cout << fixed << setprecision(3);
	cout << setw(18) << areaOfTriangle << setw(19) << areaOfRectangle << setw(16) << areaOfCircle << endl;
	
	cout << fixed << setprecision(5);
	cout << setw(18) << areaOfTriangle << setw(19) << areaOfRectangle << setw(16) << areaOfCircle << endl;


	int a = 0;

	cin >> a;

	return 0;
}
