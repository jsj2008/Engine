/*
 * Window.h
 *
 *  Created on: 18 авг. 2014 г.
 *      Author: snickers
 */

#ifndef WINDOW_H_
#define WINDOW_H_

#include <string>
#include <iostream>

#include <SDL2/SDL.h>
#include "Render/Camera.h"


class Window {
public:

	static SDL_Window* GetWindow();
	static SDL_Renderer* GetRenderer();
	static Camera* GetCamera();
	static int GetWidth();
	static int GetHeight();

	static const std::string& GetTitle();

	static bool SetMode(int _w, int _h, bool _full_screen, std::string _title = "boldtemple Game Engine");
	static void SetWidth(const int& _w);
	static void SetHeight(const int& _h);

	static void SetInterpolation(const float& value);
	static float GetInterpolation();

	static bool IsInitialised();

	static void OnCleanUp();

	/* more Window functions are there https://wiki.libsdl.org/CategoryVideo */

private:
	Window();
	~Window();
	static Camera camera;
	static SDL_Window* window;
	static SDL_Renderer* renderer;
	static std::string title;
	static int w,h;
	static bool full_screen;

	static bool Init();
};

#endif /* WINDOW_H_ */
