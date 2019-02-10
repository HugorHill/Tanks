#pragma once
#include "MemoryManager.h"


class Scene
{
	public:
		Scene() : engine(NULL) {};
		Scene(void* _engine):engine(_engine) {};
		~Scene();
		void push_gameObject(GameObject* obj); // ���������� ������� � �����
		void calculate(); // ������� �����
	private:
		void* engine; //��������� �� ������, ������� ������ �����
		std::vector<GameObject*> gameObjects; // ������ ���� ������������ �������� �� �����
};