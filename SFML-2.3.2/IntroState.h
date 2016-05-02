#pragma once
#include "GameScene.h"
#include "GameEngine.h"

class GameEngine;

// Instancia de um estado introdut�rio do jogo
class IntroState : public GameScene {
public:
	void init() override;
	void clean_up() override;

	void pause() override;
	void resume() override;

	void HandleEvents(GameEngine* game) override;
	void Draw(GameEngine* game) override;
	void update(GameEngine* game) override;

	static IntroState* Instance();

protected:	
	IntroState() {};
	~IntroState() {};
private:		
	static IntroState* intro_state_;	
	sf::RenderTexture render_texture_;
	sf::Texture texture_;
	sf::Sprite sprite_;
};