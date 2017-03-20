# include "GameMain.h"

void GameMain::init()
{
	Graphics::SetBackground(Palette::Blue);
}

void GameMain::update()
{
	if (Input::MouseL.clicked)
	{
		changeScene(SceneName::Title);
	}
}

void GameMain::draw() const
{
    background.draw( );
}