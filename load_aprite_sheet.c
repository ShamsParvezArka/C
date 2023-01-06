#include <stdio.h>
#include <raylib.h>
#include <raymath.h>

#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 500

int main ()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "sprite sheets");
	SetTargetFPS(60);

	Texture2D player = LoadTexture("assets/Run.png");

	float player_position_x = (float) SCREEN_WIDTH / 2;
	float player_position_y = (float) SCREEN_HEIGHT / 2;
	Rectangle frame_rectangle = {0.0f, 0.0f, (float) player.width / 7, (float) player.height};

	int current_frame   = 0;
	float frame_counter = 0.0f;
	int frame_speed     = 8;
	
	while (!WindowShouldClose()) {

		Vector2 position = {player_position_x, player_position_y};

		if (IsKeyDown(KEY_D)) {
			frame_counter += 1.0f;
			player_position_x += 0.5;

			if (frame_counter >= (60.0f / frame_speed)) {
				frame_counter = 0;
				current_frame++;

				if (current_frame > 5) {
					current_frame = 0;
				}
				frame_rectangle.x = current_frame * (float) player.width / 7;
			}
		}

		BeginDrawing();
		ClearBackground(GRAY);
		DrawTextureRec(player, frame_rectangle, position, WHITE);
		EndDrawing();

	}

	UnloadTexture(player);
	CloseWindow();
	return 0;
}
