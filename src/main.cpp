#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <SDL3/SDL.h>

int main()
{
	//variables
	bool running = true;
	SDL_Event event;


	SDL_Window* window = SDL_CreateWindow("Welcome to AmberinoEngine", 600, 600, SDL_WINDOW_OPENGL);
	
	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_EVENT_QUIT)
			{
				running = false;
			}
		}
	}
	return 0;
}
