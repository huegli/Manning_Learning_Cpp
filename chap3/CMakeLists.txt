# Define targets
set(TLIST temperature precedence intdivision)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp")
endforeach()
