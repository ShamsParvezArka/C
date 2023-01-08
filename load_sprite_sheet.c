#include <raylib.h>

#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 600

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "reperation");
	SetTargetFPS(60);

	Texture2D texture = LoadTexture("assets/Run.png");

	//Define source size and pick that area form the texture
	float source_width = (float) texture.width / 7;
	float source_height = (float) texture.height;
	Rectangle source_rec = {0.0f, 0.0f, source_width, source_height};

	//Define texture position and wrap it up in a 2D-Vector
	float texture_position_x = (float) SCREEN_WIDTH / 2;
	float texture_position_y = (float) SCREEN_HEIGHT / 2;
	Vector2 texture_position = {texture_position_x, texture_position_y};

	while (!WindowShouldClose()) {
		ClearBackground(RAYWHITE);
		BeginDrawing();
			DrawTextureRec(texture, source_rec, texture_position, WHITE);
		EndDrawing();
	}

	UnloadTexture(texture);
	CloseWindow();

	return 0;
}
