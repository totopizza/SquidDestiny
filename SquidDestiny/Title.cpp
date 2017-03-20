# include "Title.h"

void Title::init()
{
	Graphics::SetBackground(Palette::Red);
}

void Title::update()
{
	if (Input::MouseL.clicked)
	{
		changeScene(SceneName::GameMain);
	}
}

void Title::draw() const
{

}