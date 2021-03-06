#include <iostream>
#include <vector>

using namespace std;

class Shape{ //Abstract Base Class
private:
	//Attributtes commons to all shapes
public:
	virtual void draw() =0; //Pure virtual function
	virtual void rotate() =0; //Pure virtual function
	virtual ~Shape(){};
};

class OpenShape : public Shape{ //Abstract Class
public:
	virtual ~OpenShape(){};
};

class ClosedShape : public Shape{ //Abstract Class
public:
	virtual ~ClosedShape(){};
};


class Circle : public ClosedShape{ //Concrete Class
public:
	virtual void draw() override{
		cout << "Drawing a circle" << endl;
	}
	virtual void rotate() override{
		cout << "Rotating a circle" << endl;
	}
	virtual ~Circle(){};
};

class Square : public ClosedShape{ //Concrete Class
public:
	virtual void draw() override{
		cout << "Drawing a Square" << endl;
	}
	virtual void rotate() override{
		cout << "Rotating a Square" << endl;
	}
	virtual ~Square(){};
};

class Line : public OpenShape{
public:
	virtual void draw() override{ //Concrete Class
		cout << "Drawing a Line" << endl;
	}
	virtual void rotate() override{
		cout << "Rotating a Line" << endl;
	}
	virtual ~Line(){};
};

void screenRefresh(const vector<Shape *> &);
int main(){
//	Shape s;
//	Shape *p = new Shape();
//	ClosedShape cs;
//	OpenShape os;
//Cant instantiate abstract classes

//	Circle c;
//	c.draw();
//We can do this but it is static binding
	Shape *p1 = new Circle();
	Shape *p2 = new Line();
	Shape *p3 = new Square();
	vector<Shape *> shapes = {p1, p2, p3};

	screenRefresh(shapes);

	delete p1;
	delete p2;
	delete p2;

	return 0;
}

void screenRefresh(const vector<Shape *> &shapes){
	cout << "Refreshing the screen" << endl;
	for(const auto shape: shapes)
			shape-> draw();
}




