# include "GameMain.h"

void GameMain::init()
{
	Graphics::SetBackground(Palette::Blue);

	windowCenter = Vec2(Window::Width() / 2, Window::Height() / 2);
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

	FontAsset(L"ikamodoki")(L"Ç»ÇÒÇ…Ç‡Ç»Ç¢\nÇ»ÇÒÇ…Ç‡Ç»Ç¢\nÇ‹Ç¡ÇΩÇ≠\nÇ»ÇÒÇ…Ç‡Ç»Ç¢ÅI").drawCenter(windowCenter);
}