#ifndef CUBE_DATA_H
#define CUBE_DATA_H
const float world_loc_cube[]={0.0f,0.0f,0.0f};
const int face_dim_cube = 3;
const int faces_size_cube=144;
const unsigned int p_faces_cube[144]={
1,
1,
1,
1,
2,
2,
1,
1,
3,
3,
1,
2,
4,
1,
2,
3,
5,
2,
2,
4,
6,
3,
2,
5,
6,
1,
3,
6,
1,
2,
3,
7,
3,
3,
3,
2,
7,
1,
4,
8,
1,
2,
4,
7,
5,
3,
4,
9,
7,
1,
5,
8,
4,
2,
5,
10,
2,
3,
5,
11,
3,
1,
6,
12,
4,
2,
6,
10,
6,
3,
6,
5,
1,
1,
1,
1,
7,
2,
1,
13,
2,
3,
1,
11,
4,
1,
2,
3,
8,
2,
2,
14,
5,
3,
2,
9,
5,
1,
7,
15,
1,
2,
7,
7,
6,
3,
7,
5,
5,
1,
8,
15,
8,
2,
8,
14,
7,
3,
8,
13,
7,
1,
5,
8,
8,
2,
5,
14,
4,
3,
5,
16,
3,
1,
9,
12,
2,
2,
9,
1,
4,
3,
9,
16};
const int vertices_size_cube=24;
const float p_vertices_cube[24]={
1.000000f,
-1.000000f,
-1.000000f,
-1.000000f,
1.000000f,
-1.000000f,
1.000000f,
1.000000f,
-1.000000f,
-1.000000f,
1.000000f,
1.000000f,
0.999999f,
-1.000001f,
1.000000f,
1.000000f,
0.999999f,
1.000000f,
-1.000000f,
-1.000000f,
-1.000000f,
-1.000000f,
-1.000000f,
1.000000f};
const int normals_size_cube=27;
const float p_normals_cube[27]={
0.000000f,
0.000000f,
-1.000000f,
-0.000000f,
-0.000000f,
1.000000f,
1.000000f,
0.000000f,
0.000000f,
0.000000f,
-1.000000f,
-0.000001f,
-1.000000f,
0.000000f,
0.000000f,
0.000001f,
1.000000f,
0.000001f,
1.000000f,
-0.000001f,
0.000001f,
-0.000000f,
-1.000000f,
-0.000000f,
0.000000f,
1.000000f,
0.000000f};
#endif // CUBE_DATA_H

