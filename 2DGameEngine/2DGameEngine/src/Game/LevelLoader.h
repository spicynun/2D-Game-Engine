#pragma once
#include "../ECS/ECS.h"
#include "../AssetManager/AssetStore.h"
#include <SDL.h>
#include <sol/sol.hpp>
#include <memory>

class LevelLoader
{

public:
	LevelLoader();
	~LevelLoader();

	void LoadLevel(sol::state& lua, std::unique_ptr<Registry>& registry, const std::unique_ptr<AssetStore>& assetStore, SDL_Renderer* renderer, int level);

}
;