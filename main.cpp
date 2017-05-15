#include <iostream>
#include <allegro.h>
#include "point.h"
#include "bricks.h"
#include "wall.h"
#include "raq.h"
using namespace std;


int main()
{
    BITMAP *bmp ;
    PALETTE pal;
    int x,y,r;

    allegro_init();
    install_keyboard();   //installe le clavier
    install_mouse();      //installe la souris

    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0)!=0)
    {   // s�lectionner un driver graphique appropri� +initialisation de la r�solution de l'�cran (tailles 640-480)
      		allegro_message(allegro_error);
            //allegro_message("mode graphique") ;
      		allegro_exit();
      		return 1;
    }

    set_mouse_sprite(NULL);
    show_mouse(screen);
    set_keyboard_rate(0,0);


   	wall wa(200,50);
    wa.affichetext();
    wa.affiche(screen);
    int i = 0;
    int j = 0;
    point po(200,100);
    bricks br(70,5,po);
    raq raquette(2,br);


	// boucle vide et attention : il n�y a pas d�affichage dans ce programme�.
    
	while ( ! key[KEY_ESC] ){
        // if (j > 5000){
        //     wa.setcolor(i);
        //     clear(screen);
        //     wa.affiche(screen);
        //     i++;
        //     if(i>255){
        //         i = 0;
        //     }
        //     j = 0;
        // }

        // j++;
        // if(key[KEY_LEFT]){
        //     raquette.gotogauche(5);
        // }
        // if(key[KEY_RIGHT]){
        //     raquette.gotogauche(-5);
        // }
        // if (j > 5000000){
        //     clear(screen);
        //     wa.affiche(screen);
        //     raquette.affiche(screen);
        //     j=0;
        // }
        // j++;
        
    }

	destroy_bitmap(bmp);
    set_gfx_mode(GFX_TEXT,0,0,0,0);

    cout << "fin du programme" << endl;
    return 0;

} END_OF_MAIN() ;
