#include "THello.h"


void THello::Draw(Graphics^ AGraphics, int Width, int Height)
{


	StringFormat^ format =  gcnew StringFormat();

	format->Alignment = StringAlignment::Center;


	Font font("Arial", _fontSize);

	String^ text = gcnew String("Hello World!");

	int textLength = text->Length;


	float center = Width / 2;

	float startPosition = center - (_fontSize * (textLength / 2));
	
	for (int i = 0; i < textLength; i++) {
		
		Rectangle displayRectangle =
			Rectangle(Point(startPosition + (_fontSize *i), _fontSize), Size(_fontSize *2, _fontSize * 2));

		Color color = GetRandomColor();

		SolidBrush brush(color);


		AGraphics->DrawString(text[i].ToString(), % font, % brush, (RectangleF)displayRectangle, format);
		
	}

}

Color THello::GetRandomColor()
{
	return Color::FromArgb(rand() % 255, rand() % 255, rand() % 255);
}
