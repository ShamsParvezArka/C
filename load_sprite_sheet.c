#include <raylib.h>

#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 600

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "reperation");
	SetTargetFPS(60);

	Texture2D player = LoadTexture("assets/Run.png");

	float frame_width = (float) player.width / 7;
	float frame_height = (float) player.height;
	Rectangle frame = {0.0f, 0.0f, frame_width, frame_height};

	float player_position_x = (float) SCREEN_WIDTH / 2;
	float player_position_y = (float) SCREEN_HEIGHT / 2;
	Vector2 player_position = {player_position_x, player_position_y};

	while (!WindowShouldClose()) {
		ClearBackground(RAYWHITE);
		BeginDrawing();
		DrawTextureRec(player, frame, player_position, WHITE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
