cmake_minimum_required(VERSION 3.9)
project(cxxgrad)

set(CMAKE_CXX_STANDARD 11)

add_library(thermo SHARED
        src/thermocouple/jkj.cpp src/thermocouple/jkj.h
        src/thermocouple/mkm.cpp src/thermocouple/mkm.h
        src/thermocouple/mkt.cpp src/thermocouple/mkt.h
        src/thermocouple/nnn.cpp src/thermocouple/nnn.h
        src/thermocouple/ppr.cpp src/thermocouple/ppr.h
        src/thermocouple/pps.cpp src/thermocouple/pps.h
        src/thermocouple/prb.cpp src/thermocouple/prb.h
        src/thermocouple/vra1.cpp src/thermocouple/vra1.h
        src/thermocouple/vra2.cpp src/thermocouple/vra2.h
        src/thermocouple/thermocouple.cpp src/thermocouple/thermocouple.h
        src/thermocouple/thermocouples.h
        src/graduation.h)

set_target_properties(thermo PROPERTIES SUFFIX ".so")

add_executable(cxxgrad
        src/test.cpp)

add_dependencies(cxxgrad thermo)
target_link_libraries(cxxgrad thermo)
