#pragma once
#include "Vect.h"
#include "Rect.h"
#include "Graphics.h"

class Ball
{
public:
	//constructors
	Ball(const Vect<float>& topleft, float dimension, const Vect<float>& speed, Color c);
	Ball(const Vect<float>& topleft, float dimension, float speed_x,float speed_y, Color c);
	Ball(float x1, float y1, float dimension,const Vect<float>& speed, Color c);
	Ball(float x1, float y1, float dimension, float speed_x, float speed_y, Color c);
	
	//functions
	Rect<float> GetHitBox() const;
	void Move(float delta_time);
	void Draw(Graphics& gfx);
private:
	Vect<float> topleft;
	Vect<float> speed;
	Color c;
	float dimension;
};