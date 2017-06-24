#include <iostream>

using namespace std;

class Shape
{
	public:
		Shape(){}
		virtual ~Shape(){};
		virtual double GetArea() = 0;
		virtual double GetPerim() = 0;
		virtual void Draw() = 0;
		
	private:
};

void Shape::Draw()
{
	cout << "Abstract drawing mechanism! " << endl;
}

class Circle : public Shape
{
	public:
		Circle(int radius):itsRadius(radius){}
		
		virtual ~Circle(){};
		double GetArea(){
			return 3.14 * itsRadius * itsRadius;
		}
		
		double GetPerim(){
			return 2 * 3.14 * itsRadius;
		}
		void Draw();
		
	private:
		int itsRadius;
		int itsCircumference;
};

void Circle::Draw()
{
	cout <<  "Circle drawing routine here!!\n";
	Shape::Draw();
}

class Rectangle : public Shape
{
	public:
		Rectangle(int len, int width):itsLength(len), itsWidth(width){};
		
		virtual ~Rectangle(){};
		
		double GetArea(){
			return itsLength * itsWidth;
		}
		
		double GetPerim(){
			return 2 * itsLength + 2*itsWidth;
		}
		
		virtual int GetLength(){
			return itsLength;
		}
		virtual int GetWidth(){
			return itsWidth;
		}
		
		void Draw();
		
	private:
		int itsWidth;
		int itsLength;
};

void Rectangle::Draw(){
	for(int i = 0; i < itsLength; i++){
		for(int j = 0; j < itsWidth; j++)
			cout << "X ";
		cout << endl;
	}
	
	Shape::Draw();
}

class Square : public Rectangle
{
	public:
		Square(int len);
		Square(int len, int width);
		virtual ~Square(){}
		double GetPerim(){
			return 4 * GetLength();
		}
};

Square::Square(int len):Rectangle(len, len)
{
	
}

Square::Square(int len, int width):Rectangle(len, width){
	if(GetLength() != GetWidth())
		cout << "Error, not a square...." << endl;
}

int main()
{
	Shape *sp;
	
	sp = new Circle(5);
	sp->Draw();
	delete sp;
	
	sp = new Rectangle(4, 6);
	sp->Draw();
	delete sp;
	
	sp = new Square(5);
	sp->Draw();
	delete sp;
	
	return 0;
}





































