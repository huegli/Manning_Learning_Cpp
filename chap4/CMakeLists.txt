#Define targets
set(TLIST ifelse ifelse2 zipifelse zipswitch while break password continue circle tshirt tshirt2 oatmeal cheese prime prime2 jug)

#iterate through all targets
foreach (T IN ITEMS ${TLIST})
  set(TNAME "${T}")
  add_executable(${TNAME}
    "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp")
endforeach()
