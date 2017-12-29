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
        src/thermocouple/thermocouple.cpp src/thermocouple/thermocouple.h
        src/thermocouple/thermocouples.h
        src/graduation.h)

add_executable(cxxgrad
        src/thermocouple/jkj.cpp src/thermocouple/jkj.h
        src/thermocouple/mkm.cpp src/thermocouple/mkm.h
        src/thermocouple/mkt.cpp src/thermocouple/mkt.h
        src/thermocouple/nnn.cpp src/thermocouple/nnn.h
        src/thermocouple/ppr.cpp src/thermocouple/ppr.h
        src/thermocouple/pps.cpp src/thermocouple/pps.h
        src/thermocouple/prb.cpp src/thermocouple/prb.h
        src/thermocouple/thermocouple.cpp src/thermocouple/thermocouple.h
        src/thermocouple/thermocouples.h
        src/graduation.h
        src/test.cpp)
