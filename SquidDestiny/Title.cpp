# include "Title.h"

void Title::init()
{
	Graphics::SetBackground(Palette::Red);

	windowCenter = Vec2(Window::Width() / 2, Window::Height() / 2);
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
	FontAsset(L"ikamodoki")(L"クリックして\nつぎのシーンへ！").drawCenter(windowCenter);
}