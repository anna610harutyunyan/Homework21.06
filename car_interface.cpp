#include <iostream>
class Car_interface
{
public:
	virtual void change_mirrors_position() = 0;
	virtual void change_speed() = 0;
	virtual void lights() = 0;
	virtual void wiper() = 0;
	virtual void conditioner() = 0;
	virtual void signal() = 0;
	virtual void steering_wheel() = 0;
	virtual void open_window() = 0;
	virtual void close_window() = 0;
	virtual void stop() = 0;
	virtual void door() = 0;
	virtual void close_door() = 0;


};

int main(int argc, char** argv)
{

	return 0;
}