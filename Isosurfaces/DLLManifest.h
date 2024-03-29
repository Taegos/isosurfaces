#include "stdafx.h";
#define DLLEXPORT __declspec(dllexport)

typedef unsigned char byte;

struct Vector3 {
	float x;
	float y;
	float z;
};

struct Voxels {
	bool*** data;
	int size;
};

struct Triangle {
	Vector3 p1;
	Vector3 p2;
	Vector3 p3;
};

struct Mesh {
	Triangle* triangles;
	int length;
};

extern "C" {
	DLLEXPORT void marching_cubes(Voxels, void*(Mesh));
}