class Point
{
private:
	int x, y;
public:
	Point();
	Point(int x, int y);
	void set_x(int x);
	void set_y(int y);
	void User_Input();
	int get_x();
	int get_y();
	void display_Point();
	~Point();
};