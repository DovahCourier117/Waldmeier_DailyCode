#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {


	al_init();
	al_init_primitives_addon();

	int width = 800;
	int height = 600;

	ALLEGRO_DISPLAY* display = al_create_display(width, height);




	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_filled_rectangle(100, 100, width - 100, height - 100, al_map_rgb(255, 255, 255));
	al_draw_filled_circle(width / 2, height / 2, 100, al_map_rgb(255, 0, 0));


	al_flip_display();
	al_rest(5.0);
	return 0;
}