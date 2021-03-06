# include "GameMain.h"

void GameMain::init()
{
	Graphics::SetBackground(Palette::Blue);

	windowCenter = Vec2(Window::Width() / 2, Window::Height() / 2);

	background = Texture(L"Texture/Background/GameMain/sea.png");
	if (!background)
	{
		background = Texture(L"Texture/Background/sea_temp.png");
	}

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
    background.draw();

	FontAsset(L"ikamodoki")(L"なんにもない\nなんにもない\nまったく\nなんにもない！").drawCenter(windowCenter);
}