# CMakeList.txt : CMake project for harness_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

file(READ subcompositions.txt SUB_CPS)

foreach(SUB_CPS_NAME ${SUB_CPS})
    add_subdirectory(${SUB_CPS_NAME})
endforeach(SUB_CPS_NAME)



foreach(SUB_CPS_NAME ${SUB_CPS})
    string(TOUPPER ${SUB_CPS_NAME} SUB_CPS_NAME)
    list(APPEND SOURCE_FILES ${${SUB_CPS_NAME}_SOURCE_FILES})
endforeach(SUB_CPS_NAME)

foreach(SUB_CPS_NAME ${SUB_CPS})
    string(TOUPPER ${SUB_CPS_NAME} SUB_CPS_NAME)
    list(APPEND INCLUDE_DIRS ${${SUB_CPS_NAME}_INCLUDE_DIRS})
endforeach(SUB_CPS_NAME)

message ( "Src File :- ${SOURCE_FILES} " )

message( "Set include to :- ${INCLUDE_DIRS} " )

include_directories ( ${INCLUDE_DIRS} )

add_executable ( harness_test  ${SOURCE_FILES}  "System/registry/inc/debug.h")

# TODO: Add tests and install targets if needed.
