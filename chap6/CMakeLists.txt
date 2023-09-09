#Define targets
file(GLOB TLIST *.cpp)

#iterate through all targets
foreach (T IN ITEMS ${TLIST})
  get_filename_component(TNAME ${T} NAME_WE)
  add_executable(${TNAME}
    "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp")
endforeach()
