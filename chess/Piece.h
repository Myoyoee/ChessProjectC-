#include <string>

using namespace std;


class Piece
{
public:
	Piece();
	virtual ~Piece();
	virtual void move() = 0;
	virtual Piece& operator=(Piece&) = 0;


protected:
	char _type;
	string _location;
	bool color;
	virtual bool isValid() = 0;

};

