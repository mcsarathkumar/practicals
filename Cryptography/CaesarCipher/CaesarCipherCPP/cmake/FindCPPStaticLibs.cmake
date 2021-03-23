#set(FIND_CPPSTATICLIBS_PATHS ../../../../CPPStaticLibs)
set(FIND_CPPSTATICLIBS_PATHS D:/Workspace/practicals/CPPStaticLibs)


find_path(CPPSTATICLIBS_INCLUDE_DIR cpp_util.h
        PATHS ${FIND_CPPSTATICLIBS_PATHS})

find_library(CPPSTATICLIBS_LIBRARY
        NAMES cpplibrary
        PATH_SUFFIXES build
        PATHS ${FIND_CPPSTATICLIBS_PATHS})
