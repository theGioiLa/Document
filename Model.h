#pragma once
#include "GLES2\gl2.h"
#include "../Utilities/utilities.h"
#include "Vertex.h"

class Model {
	Vertex* m_pVertices;
	int* m_pIndex;
	GLint m_Id;

public:
	unsigned int m_nIndices, m_nVertices;
	GLuint m_vboId, m_iboId;
	GLint positionAttribute;
	GLint mvpUniform;
	char* m_Info;

	Model(GLuint nVertices, GLuint nIndices);

	Model(GLint id) { 
		m_Id = id;
		m_Info = new char[80];
	}

	Model() {}
	~Model();

	int Init(GLint program);
	void BindData();
	int BindInfo();
	void CleanUp();
	void SetVertices(Vertex* vertices) { m_pVertices = vertices; }
};