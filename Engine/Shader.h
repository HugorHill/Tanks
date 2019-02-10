#pragma once
#include <glew\glew.h>
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <map>

class Shader
{
	public:
		Shader() {};
		Shader(std::string file,void* p);
		~Shader() {};
		void start();
		void stop();
		void load_f(std::string, float);
		void load_i(std::string, int);
		void load_vec(std::string, glm::vec2);
		void load_vec(std::string, glm::vec3);
		void load_mat(std::string, glm::mat2);
		void load_mat(std::string, glm::mat3);
		void load_mat(std::string, glm::mat4);
	private:
		GLuint shader_program;
};

