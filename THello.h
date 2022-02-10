#pragma once

#include <string>

using namespace System;
using namespace System::Drawing;
using namespace std;

class THello
{
public:
	void Draw(Graphics^ AGraphics, int Width, int Height);
private:
	int _fontSize = 30;
	Color GetRandomColor();
};

