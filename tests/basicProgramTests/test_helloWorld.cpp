#include<iostream>
#include "../../problems/basicProgram/helloWorld.cpp"

using namespace std;
void testHelloWorld(){
    if(printHelloWorld()=="Hello world"){
        cout<<printHelloWorld()<<"\n";
        cout<<"test--PASS"<<"\n";
    }else{
        cout<<"test--Fail"<<"\n";
    }
}

