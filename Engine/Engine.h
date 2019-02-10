#pragma once
#include <glew\glew.h>
#include <GLFW\glfw3.h>
#include <map>
#include <string>
#include "Defines.h"
#include "RenderManager.h"
#include "MemoryManager.h"
#include "Scene.h"


#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glfw3.lib")
#pragma comment(lib, "glew32.lib")


class Engine
{
	friend class Scene;
	friend class RenderManager;
	public:
		Engine() {};
		~Engine();
		void init(); // ������������� ���� ���������� ��� ���������� ������
		void create_var(std::string name, int size); // �������� ����� ���������� ���������� ��� ������
		void push_scene(Scene* scene); // �������� ����� � ������
		void run(); // ���������������� ������ ������������ ����� ������
		MemoryManager mm;
		RenderManager rm;
	private:
		GLFWwindow* window;
		std::map<std::string, void*> variables;
		std::vector<Scene*> scenes;
		int current_scene;
};