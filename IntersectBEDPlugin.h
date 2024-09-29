#ifndef INTERSECTBEDPLUGIN_H
#define INTERSECTBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class IntersectBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "IntersectBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
