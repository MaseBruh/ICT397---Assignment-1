#ifndef _CAMERA_H
#define _CAMERA_H
#pragma once

#include "Math.h"

struct vec3
{
	float x;
	float y;
	float z;
};

class Camera
{
private:
protected:

public:
	Camera();
	Camera(vec3 *newPos);
	void Update();
	void SetPos(float a, float b, float c);
	void SetLA(float a, float b, float c);
	void SetAcc(float a, float b, float c);
	void SetVel(float a, float b, float c);
	void AddVel(float a, float b, float c);
	//void SetTerrain(BruteForce ter);

	vec3 pos;
	vec3 lookAt;
	vec3 accel;
	vec3 vel;
	float yaw;
	float pitch;

	//BruteForce terrain;
};

#endif