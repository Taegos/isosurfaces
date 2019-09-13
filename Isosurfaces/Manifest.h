#define DLLEXPORT __declspec(dllexport)

extern "C" {
	DLLEXPORT void marching_cubes(bool** map);

	DLLEXPORT void marching_squares(bool*** map);
	DLLEXPORT void dual_contouring(bool*** map);
	DLLEXPORT void manifold_dual_contouring(bool*** map);
}