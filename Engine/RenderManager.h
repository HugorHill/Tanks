#pragma once
#include <glew\glew.h>
#include <GLFW\glfw3.h>
#include <map>
#include <string>


class RenderManager
{
	public:
		RenderManager() : engine(NULL) {};
		RenderManager(void* ptr) : engine(ptr) {};
		~RenderManager() {};
		void init(int w, int h);
		void updateScreen();
		
	private:
		void* engine; // ��������� �� ������
};