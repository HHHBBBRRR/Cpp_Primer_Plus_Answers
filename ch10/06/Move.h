//Move.h
#ifndef MOVE_H
#define MOVE_H
 
class Move
{
private:
	double x;
	double y;
public:
	Move();
	Move(double a, double b = 0.0);
 
	void showmove()const;
	Move add(const Move& m)const;
	void reset(double a = 0.0, double b = 0.0);
};
 
#endif // !MOVE_H
