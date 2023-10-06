#include <iostream>
#include "shape.cpp"
#include "gameconsole.cpp"

using namespace std;

int main()
{

/*
//SHAPE-TEST//

	Triangle * My_Triangle = new Triangle(3,4,5);
	Rectangle * My_Rectangle = new Rectangle (1,2);
	Circle * My_Circle = new Circle(1);
	Box * My_Box = new Box(2,3,4);
	Cone * My_Cone = new Cone(2,3);
	Cylinder * My_Cylinder = new Cylinder (2,3);
	Sphere * My_Sphere = new Sphere(1);
	
	cout << "Triangle perimeter " << My_Triangle->perimeter()<<endl;
	cout << "Triangle area " << My_Triangle->area()<<endl;
	cout << "Rectangle perimeter " << My_Rectangle->perimeter()<<endl;
	cout << "Rectangle area " << My_Rectangle->area()<<endl;
	cout << "Circle perimeter " << My_Circle->perimeter()<<endl;
	cout << "Circle area " << My_Circle->area()<<endl;
	cout << "Box volume " << My_Box->volume()<<endl;
	cout << "Box area " << My_Box->area()<<endl;	
        cout << "Cone volume " << My_Cone->volume()<<endl;
	cout << "Cone area " << My_Cone->area()<<endl;		
	cout << "Cylinder volume " << My_Cylinder->volume()<<endl;
	cout << "Cylinder area " << My_Cylinder->area()<<endl;	
        cout << "Sphere volume " << My_Sphere->volume()<<endl;
	cout << "Sphere area " << My_Sphere->area()<<endl;


    Triangle * My_Triangle2 = new Triangle(1,3.5,4);
	Rectangle * My_Rectangle2 = new Rectangle (2,3.5);
	Circle * My_Circle2 = new Circle(1.1);
	Box * My_Box2 = new Box(2,3.5,4);
	Cone * My_Cone2 = new Cone(2,3.5);
	Cylinder * My_Cylinder2 = new Cylinder (2.5,3);
	Sphere * My_Sphere2 = new Sphere(1.1);
	
	cout << "Triangle perimeter " << My_Triangle2->perimeter()<<endl;
	cout << "Triangle area " << My_Triangle2->area()<<endl;
	cout << "Rectangle perimeter " << My_Rectangle2->perimeter()<<endl;
	cout << "Rectangle area " << My_Rectangle2->area()<<endl;
	cout << "Circle perimeter " << My_Circle2->perimeter()<<endl;
	cout << "Circle area " << My_Circle2->area()<<endl;
	cout << "Box volume " << My_Box2->volume()<<endl;
	cout << "Box area " << My_Box2->area()<<endl;	
        cout << "Cone volume " << My_Cone2->volume()<<endl;
	cout << "Cone area " << My_Cone2->area()<<endl;		
	cout << "Cylinder volume " << My_Cylinder2->volume()<<endl;
	cout << "Cylinder area " << My_Cylinder2->area()<<endl;	
        cout << "Sphere volume " << My_Sphere2->volume()<<endl;
	cout << "Sphere area " << My_Sphere2->area()<<endl;  

//SHAPE-TEST//
*/

//GAMECONSOLE_TEST//

int i = 0;
int x;

GameConsole * consoles[5];

cin >> x;

switch(x) {
	case 1: consoles[i] = new N64(); break;
	case 2: consoles[i] = new NintendoSwitch(); break;
	case 3: consoles[i] = new Playstation4(); break;
}
cout << consoles[i]->getMedium() << endl;

cin >> x;
switch(x) {
	case 1: consoles[i] = new N64(); break;
	case 2: consoles[i] = new NintendoSwitch(); break;
	case 3: consoles[i] = new Playstation4(); break;
}
cout << consoles[i]->getMedium() << endl;


//GAMECONSOLE_TEST//

    return 0;

}