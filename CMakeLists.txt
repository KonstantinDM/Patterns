cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)

if (UNIX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -pthread")
endif (UNIX)

MACRO(DLOG msg)
    message(STATUS "[INFO] ${msg}")
ENDMACRO()

MACRO(HEADER_DIRECTORIES return_list)
    
    # найдем все заголовочные файлы
    FILE(GLOB_RECURSE new_list "Include/*.h")
    SET(dir_list "")

    # вделим все пути из всех заголовочных файлов
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    
    # удалим дубликаты путей
    LIST(REMOVE_DUPLICATES dir_list)
    
    # лог
    FOREACH(file_dir ${dir_list})
        DLOG("Found ${file_dir}")
    ENDFOREACH()
    list(LENGTH  dir_list header_dir_list_count)
    DLOG("Found ${header_dir_list_count} header directories.")
    
    SET(${return_list} ${dir_list})
ENDMACRO()

HEADER_DIRECTORIES(header_dir_list)

project("Patterns" VERSION 1.0)

include_directories(${CMAKE_SOURCE_DIR}/Include)
file(GLOB_RECURSE SOURCES "Sources/*.cpp" "Include/*.h")

add_executable(Patterns ${SOURCES})

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  DLOG("dir='${dir}'")
endforeach()