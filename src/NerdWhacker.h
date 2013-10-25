
#ifndef NERDWHACKER
#define NERDWHACKER



#include <iostream>
#include "ofMain.h"
//#include "ofxSyphon.h"

#include "Game.h"

#define NUM_BYTES_IN 1
#define NUM_BYTES_OUT 8
#define NUM_FRAMES 24



class NerdWhacker : public ofBaseApp {

	public:
		NerdWhacker();
        void update();
		void draw();
    
        void keyReleased(int key);
        void hammerTime(int v);

        // GAME
        Game* game;

        // ARDUINO
        ofSerial serial;
    
        // MAPPING
        //ofxSyphonServer syphon;
    
    private:
        int countCycles;
};



#endif