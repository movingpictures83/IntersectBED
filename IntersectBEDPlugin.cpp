#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "IntersectBEDPlugin.h"

void IntersectBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void IntersectBEDPlugin::run() {}

void IntersectBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "intersectBed -a";
myCommand += " ";
addRequiredParameterNoFlag("A");
addRequiredParameter("-b", "B");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<IntersectBEDPlugin> IntersectBEDPluginProxy = PluginProxy<IntersectBEDPlugin>("IntersectBED", PluginManager::getInstance());
