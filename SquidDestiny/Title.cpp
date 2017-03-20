# include "Title.h"

void Title::init()
{
	Graphics::SetBackground(Palette::Red);

	windowCenter = Vec2(Window::Width() / 2, Window::Height() / 2);

	background = Texture(L"Texture/Background/Title/sea.png");
	// ...Title/の中にsea.pngが無かったら仮画像を表示
	if (!background)
	{
		background = Texture(L"Texture/Background/Title/sea_temp.png");
	}
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
	background.draw();

	FontAsset(L"ikamodoki")(L"イカのさだめ").drawCenter({ windowCenter.x, 50 }, Palette::Black);

	// 同じフォントサイズだけど白は膨張して見える
	FontAsset(L"ikamodoki")(L"クリックして\nつぎのシーンへ！").drawCenter(windowCenter);
}