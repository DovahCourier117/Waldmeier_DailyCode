#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include<allegro5/allegro_font.h>

int main() {//start main


	al_init();
	al_init_primitives_addon();
	al_init_font_addon();



	int width = 800;
	int height = 600;

	ALLEGRO_DISPLAY* display = al_create_display(width, height);
	ALLEGRO_FONT* font = al_create_builtin_font();



	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_filled_circle(width / 2, height / 2, 300, al_map_rgb(255, 0, 0));
	al_draw_filled_circle(width / 2, height / 2, 100, al_map_rgb(205, 0, 0));
	al_draw_filled_circle(width / 2, height / 2, 10, al_map_rgb(155, 0, 0));
	al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Is this art?");

	al_flip_display();
	al_rest(5.0);
	return 0;
}//end main 