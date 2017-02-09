#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);

    model();
    
    ofScale(0.5,1);
    model();
////    color();
//    yellow();
//    blue();

    ofTranslate(ofGetWindowWidth()/2, 0);
    ofScale(1,0.8);
    model();
    
//

    
}

//void ofApp::goldencut(){
//    a + b == ofGetWindowWidth();
//    a = b * 2;
//    
//}
void ofApp::model(){
    
    ofSetColor(0,0,0);
    ofSetLineWidth(50);
    ofNoFill();
    ofDrawRectangle(0,0,ofGetWindowWidth(),ofGetWindowHeight());
    ofSetLineWidth(10);
    ofDrawRectangle(0,0,x,x);
    ofDrawRectangle(x,0,y,y);
    ofDrawRectangle(ofGetWindowHeight()-x,x,y,x);
    ofDrawRectangle(x,y,ofGetWindowHeight()-y,ofGetWindowHeight()-y);
    ofDrawRectangle(0,x,ofGetWindowHeight()-x,ofGetWindowHeight()-y);
    
    blue();
    red();
    yellow();
    
    
    
}

void ofApp::blue()
{
    ofSetColor(13,127,190);
    ofFill();
    ofDrawRectangle(0,0,x/2,x/2);
    
    ofSetColor(0,0,0);
    ofSetLineWidth(10);
    ofNoFill();
    ofDrawRectangle(0,0,x/2,x/2);

}

void ofApp::red(){
    
    ofSetColor(245,15,15);
    ofFill();
    ofDrawRectangle(x,x,50,200);
    
    ofSetColor(0,0,0);
    ofSetLineWidth(10);
    ofNoFill();
    ofDrawRectangle(x,x,50,200);
    
}

void ofApp::yellow()
{
    ofSetColor(255,227,23);
    ofFill();
    ofDrawRectangle(y,y,100,50);
    
    ofSetColor(0,0,0);
    ofSetLineWidth(10);
    ofNoFill();
    ofDrawRectangle(y,y,100,50);
    
}

void ofApp::color()
{
    for (int i = 0; i <5; i ++)
    {
        if(i%3 ==0)
        {
            ofTranslate(i*20,i*20);
            ofScale(10,2);
            red();
        }
    }

  
    
   
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
