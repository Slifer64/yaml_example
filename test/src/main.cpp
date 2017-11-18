/**
 * Copyright (C) 2017 as64
 */

#include <memory>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <exception>

#include <yaml-cpp/yaml.h>

int main(int argc, char** argv)
{    
  YAML::Node config = YAML::LoadFile("../config/config.yml");

  bool binary = config["binary"].as<bool>();
  std::string filename = config["filename"].as<std::string>();

  std::cout << "binary = " << binary << "\n";
  std::cout << "filename = " << filename << "\n";

  return 0;
}
