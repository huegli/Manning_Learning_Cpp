#Define targets
set(TLIST intarray chararray chararray2 intarray2 intarray3 jokes)

#iterate through all targets
foreach (T IN ITEMS ${TLIST})
  set(TNAME "${T}")
  add_executable(${TNAME}
    "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp")
endforeach()
