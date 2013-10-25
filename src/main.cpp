
#include "ofMain.h"
#include "ofAppGlutWindow.h"

#include "NerdWhacker.h"



int main() {
    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1280, 720, OF_WINDOW);

	ofRunApp(new NerdWhacker());
}
