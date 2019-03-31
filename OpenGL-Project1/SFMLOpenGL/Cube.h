#ifndef CUBE_H
#define CUBE_H

#include <gl/glew.h>

//Cube Vertices
/*
		  (-1.0f, 1.0f, -1.0f)          (1.0f, 1.0f, -1.0f)
		          [7]                          [6]
		          #-----------------------------#
		         /|                            /|
		        / |                           / |
	  (-1.0f, 1.0f, 1.0f)           (1.0f, 1.0f, 1.0f)
		  [3] /                         [2] /
		     #-----------------------------#    |
		     |    |                        |    |
		     |    |                        |    |
		     |   [4]                       |   [5]
		  (-1.0f, -1.0f, -1.0f)         (1.0f, -1.0f, -1.0f)
		     |    #-----------------------------#
		     |   /                         |   /
		     |  /                          |  /
		     | /                           | /
		     |/                            |/
		     #-----------------------------#
		    [0]                           [1]
	(-1.0f, -1.0f, 1.0f)         (1.0f, -1.0f, 1.0f)
*/

const int CUBE_VERTICES	= 24;	// Total Number of Vertices
const int CUBE_INDICES	= 12;	// Total Number of Indexes
const int CUBE_UVS		= 48;	// Total Number of UVs
const int COLORS		= 24;	// Total Number of Colors

static const GLfloat vertices[] =
{
	// Front Face
	-1.00f, -1.00f,  1.00f,	// [0]	// ( 0)
	 1.00f, -1.00f,  1.00f,	// [1]	// ( 1)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 2)
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 3)

	// Top Face
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 4)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 5)
	 1.00f,  1.00f, -1.00f,	// [6]	// ( 6)
	-1.00f,  1.00f, -1.00f,	// [7]	// ( 7)

	// Back Face
	 1.00f, -1.00f, -1.00f,	// [5]	// ( 8)
	-1.00f, -1.00f, -1.00f, // [4]	// ( 9)
	-1.00f,  1.00f, -1.00f,	// [7]	// (10)
	 1.00f,  1.00f, -1.00f,	// [6]	// (11)

	// Bottom Face
	-1.00f, -1.00f, -1.00f, // [4]	// (12)
	 1.00f, -1.00f, -1.00f, // [5]	// (13)
	 1.00f, -1.00f,  1.00f, // [1]	// (14)
	-1.00f, -1.00f,  1.00f, // [0]	// (15)

	// Left Face
	-1.00f, -1.00f, -1.00f, // [4]	// (16)
	-1.00f, -1.00f,  1.00f, // [0]	// (17)
	-1.00f,  1.00f,  1.00f, // [3]	// (18)
	-1.00f,  1.00f, -1.00f, // [7]	// (19)

	// Right Face
	 1.00f, -1.00f,  1.00f, // [1]	// (20)
	 1.00f, -1.00f, -1.00f, // [5]	// (21)
	 1.00f,  1.00f, -1.00f, // [6]	// (22)
	 1.00f,  1.00f,  1.00f, // [2]	// (23)
};

static const GLfloat colors[] = {
	
	// Front Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Top Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Back Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	// Bottom Face
	0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
	0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
	0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
	0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

	// Left Face
	1.0f, 1.0f, 0.0f, 1.0f, // [4]	// (16)
	1.0f, 1.0f, 0.0f, 1.0f, // [0]	// (17)
	1.0f, 1.0f, 0.0f, 1.0f, // [3]	// (18)
	1.0f, 1.0f, 0.0f, 1.0f, // [7]	// (19)

	// Right Face
	1.0f, 0.0f, 1.0f, 1.0f, // [1]	// (20)
	1.0f, 0.0f, 1.0f, 1.0f, // [5]	// (21)
	1.0f, 0.0f, 1.0f, 1.0f, // [6]	// (22)
	1.0f, 0.0f, 1.0f, 1.0f, // [2]	// (23)
};

static GLfloat uvs[2 * 4 * 6] = {
	// Front Face
	0.0, 0.25,
	0.25, 0.25,
	0.25, 0.5,
	0.0, 0.5,

	0.0, 0.0,
	0.25, 0.0,
	0.25, 0.25,
	0.0, 0.25,

	0.5, 0.25,
	0.75, 0.25,
	0.75, 0.5,
	0.5, 0.5,

	0.0, 0.5,
	0.25, 0.5,
	0.25, 0.75,
	0.0, 0.75,

	0.75, 0.25,
	1.0, 0.25,
	1.0, 0.5,
	0.75, 0.5,

	0.25, 0.25,
	0.5, 0.25,
	0.5, 0.5,
	0.25, 0.5,
};


static const GLuint indices[] =
{
	// Front Face
	0, 1, 2,
	2, 3, 0,

	// Top Face
	4, 5, 6,
	6, 7, 4,

	// Back Face
	8, 9, 10,
	10, 11, 8,

	// Bottom Face
	12, 13, 14,
	14, 15, 12,

	// Left Face
	16, 17, 18,
	18, 19, 16,

	// Right Face
	20, 21, 22,
	22, 23, 20
};

static const GLfloat particleVertices[] =
{
	// Front Face
	-0.2f, -0.2f,  0.2f,	// [0]	// ( 0)
	0.2f, -0.2f,  0.2f,	// [1]	// ( 1)
	0.2f,  0.2f,  0.2f,	// [2]	// ( 2)
	-0.2f,  0.2f,  0.2f,	// [3]	// ( 3)

	// Top Face
	-0.2f,  0.2f,  0.2f,	// [3]	// ( 4)
	0.2f,  0.2f, 0.2f,	// [2]	// ( 5)
	0.2f,  0.2f, -0.2f,	// [6]	// ( 6)
	-0.2f,  0.2f, -0.2f,	// [7]	// ( 7)

	// Back Face
	0.2f, -0.2f, -0.2f,	// [5]	// ( 8)
	-0.2f, -0.2f, -0.2f, // [4]	// ( 9)
	-0.2f,  0.2f, -0.2f,	// [7]	// (10)
	0.2f,  0.2f, -0.2f,	// [6]	// (11)

	// Bottom Face
	-0.2f, -0.2f, -0.2f, // [4]	// (12)
	0.2f, -0.2f, -0.2f, // [5]	// (13)
	0.2f, -0.2f,  0.2f, // [1]	// (14)
	-0.2f, -0.2f,  0.2f, // [0]	// (15)

	// Left Face
	-0.2f, -0.2f, -0.2f, // [4]	// (16)
	-0.2f, -0.2f,  0.2f, // [0]	// (17)
	-0.2f,  0.2f,  0.2f, // [3]	// (18)
	-0.2f,  0.2f, -0.2f, // [7]	// (19)

	// Right Face
	0.2f, -0.2f,  0.2f, // [1]	// (20)
	0.2f, -0.2f, -0.2f, // [5]	// (21)
	0.2f,  0.2f, -0.2f, // [6]	// (22)
	0.2f,  0.2f,  0.2f, // [2]	// (23)
};


#endif

